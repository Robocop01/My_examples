<? session_start();
   require ('inc/sql_connect.inc');

   if (isset($_POST['save']))
   mysql_query("UPDATE sn_ups SET id_s_m='".$_POST['id_s_m']."',
   id_ups='".$_POST['id_ups']."', n_sn='".$_POST['n_sn']."', d_y='".$_POST['d_y']."', note='".$_POST['note']."'
   WHERE id_sn='".$_SESSION['id_sn']."'");

   if (!isset($_POST['add_new']))
 {          // ���� �������� ������ �� �������� ������ � �.�.
 if (isset($_GET['id_sn'])) $_SESSION['id_sn']=$_GET['id_sn'];

  $q1=mysql_query("SELECT n_management, n_ups, id_sn, n_sn, d_y, sn_ups.note, n_station, manag_state.id_s_m,
  station.id_station, management.id_management, f_ups.id_ups
  FROM user_resource, manag_state, sn_ups, f_ups, management, station
  WHERE manag_state.id_s_m=sn_ups.id_s_m
  AND manag_state.id_management=management.id_management
  AND manag_state.id_station=station.id_station
  AND sn_ups.id_ups=f_ups.id_ups
  AND id_sn='".$_SESSION['id_sn']."'
   Order By n_management, n_ups, n_sn");

        $row=mysql_num_rows($q1);
        $id_station=mysql_result($q1, 0, 'id_station');       $n_station=mysql_result($q1, 0, 'n_station');
        $id_management=mysql_result($q1, 0, 'id_management'); $n_management=mysql_result($q1, 0, 'n_management');
        $id_ups=mysql_result($q1, 0, 'id_ups');         $n_ups=mysql_result($q1, 0, 'n_ups');
        $n_sn=mysql_result($q1, 0, 'n_sn');                   $note=mysql_result($q1, 0, 'note');
        $d_y=mysql_result($q1, 0, 'd_y');                     $id_s_m=mysql_result($q1, 0, 'id_s_m');
    }
else {       // ���� �������� ���������� �� ����������...
    $q2=mysql_query("SELECT * FROM f_ups ORDER BY n_ups");
    $row2=mysql_num_rows($q2);
    if ($row2>0) { $id_ups=mysql_result($q2, 0, 'id_ups'); $n_ups=mysql_result($q2, 0, 'n_ups'); }
    else { $id_ups=0; $n_ups=0; }
    $note=""; $n_sn=""; $d_y="1995-01-01";
    }
    ?>
<html>
<head>
<title>���� ������������� ���������</title>
<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />
<link href="style.css"  rel="stylesheet" type="text/css" />

<script type="text/javascript" src="inc/jquery-1.9.1.js"></script>
<script type="text/javascript" src="inc/chained.js"></script>
<script type="text/javascript">
$(document).ready(function(){ $("#management").chained("#station"); });
</script>
</head>

<body bgcolor=#c0c0c0>
<table border="3">

<tr><td colspan="6" align="center"><font size="4">UPS �� S/N</font></td></tr>

<tr>
<td align="center"><font size="4">�������</font></td>
<td align="center"><font size="4">�����������</font></td>
<td align="center"><font size="4">������</font></td>
<td align="center"><font size="4">S/N</font></td>
<td align="center"><font size="4">���� �����.</font></td>
<td align="center"><font size="4">����.</font></td>
</tr>

<tr>
<?
   if (!isset($_POST['add_new']))
 { ?> <form action="edit_sn_ups.php" method=post> <? }
else
 { ?> <form action="2_6s.php" method=post> <? }
 require ('inc/sel_manag_st.inc');

echo '<td align="left"><font size="4">';
   $q3=mysql_query("SELECT * FROM f_ups WHERE id_ups!='".$id_ups."' ORDER BY n_ups");
   $row=mysql_num_rows($q3);

  echo '<select name="id_ups"><option value='.$id_ups.'>'.$n_ups.'</option>';
  for ($i=0; $i<$row; $i++)
    if (mysql_result($q3, $i, 'id_ups')!=$id_ups)
  echo '<option value='.mysql_result($q3, $i, 'id_ups').'>'.mysql_result($q3, $i, 'n_ups').'</option>';
?>
<select>
</font></td>

<td align="left"><font size="4"><input size=20 maxlength=20 type="text" name="n_sn" value='<? echo $n_sn; ?>'></font></td>
<td align="left"><font size="4"><input size=20 maxlength=20 type="text" name="d_y" value='<? echo $d_y; ?>'></font></td>
<td align="left"><font size="4"><input size=20 maxlength=20 type="text" name="note" value='<? echo $note; ?>'></font></td>

<? if (!isset($_POST['add_new'])) { ?>
<tr>
<td align="center"><input type="submit" name="save" value="���������"></td>
</form>

<form action="2_6s.php" method=post>
<td align="center"><input type="submit" name="delete" value="�������"></td>
</form> <? }
else
{ ?>
<tr>
<td align="center"><input type="submit" name="new" value="���������"></td>
</form> <? }
?>

<form action="2_6s.php" method=post>
<td align="center"><input type="submit" name="concel" value="�����"></td>
</form>
</tr>

</table>
</body>
</html>