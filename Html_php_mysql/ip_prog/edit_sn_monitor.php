<? session_start();
   require ('inc/sql_connect.inc');

   if (isset($_POST['save']))
   mysql_query("UPDATE sn_monitor SET id_s_m='".$_POST['id_s_m']."',
   id_monitor='".$_POST['id_monitor']."', n_sn='".$_POST['n_sn']."', d_y='".$_POST['d_y']."', note='".$_POST['note']."'
   WHERE id_sn='".$_SESSION['id_sn']."'");

   if (!isset($_POST['add_new']))
 {          // ���� �������� ������ �� �������� ������ � �.�.
 if (isset($_GET['id_sn'])) $_SESSION['id_sn']=$_GET['id_sn'];

  $q1=mysql_query("SELECT n_management, n_monitor, id_sn, n_sn, d_y, sn_monitor.note, n_station, manag_state.id_s_m,
  station.id_station, management.id_management, f_monitor.id_monitor
  FROM user_resource, manag_state, sn_monitor, f_monitor, management, station
  WHERE manag_state.id_s_m=sn_monitor.id_s_m
  AND manag_state.id_management=management.id_management
  AND manag_state.id_station=station.id_station
  AND sn_monitor.id_monitor=f_monitor.id_monitor
  AND id_sn='".$_SESSION['id_sn']."'
   Order By n_management, n_monitor, n_sn");

        $row=mysql_num_rows($q1);
        $id_station=mysql_result($q1, 0, 'id_station');       $n_station=mysql_result($q1, 0, 'n_station');
        $id_management=mysql_result($q1, 0, 'id_management'); $n_management=mysql_result($q1, 0, 'n_management');
        $id_monitor=mysql_result($q1, 0, 'id_monitor');         $n_monitor=mysql_result($q1, 0, 'n_monitor');
        $n_sn=mysql_result($q1, 0, 'n_sn');                   $note=mysql_result($q1, 0, 'note');
        $d_y=mysql_result($q1, 0, 'd_y');                     $id_s_m=mysql_result($q1, 0, 'id_s_m');
    }
else {       // ���� �������� ���������� �� ����������...
    $q2=mysql_query("SELECT * FROM f_monitor ORDER BY n_monitor");
    $row2=mysql_num_rows($q2);
    if ($row2>0) { $id_monitor=mysql_result($q2, 0, 'id_monitor'); $n_monitor=mysql_result($q2, 0, 'n_monitor'); }
    else { $id_monitor=0; $n_monitor=0; }
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

<tr><td colspan="6" align="center"><font size="4">�������� �� S/N</font></td></tr>

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
 { ?> <form action="edit_sn_monitor.php" method=post> <? }
else
 { ?> <form action="2_3s.php" method=post> <? }
 require ('inc/sel_manag_st.inc');

echo '<td align="left"><font size="4">';
   $q3=mysql_query("SELECT * FROM f_monitor WHERE id_monitor!='".$id_monitor."' ORDER BY n_monitor");
   $row=mysql_num_rows($q3);

  echo '<select name="id_monitor"><option value='.$id_monitor.'>'.$n_monitor.'</option>';
  for ($i=0; $i<$row; $i++)
    if (mysql_result($q3, $i, 'id_monitor')!=$id_monitor)
  echo '<option value='.mysql_result($q3, $i, 'id_monitor').'>'.mysql_result($q3, $i, 'n_monitor').'</option>';
?>
<select>
</font></td>

<td align="left"><font size="4"><input size=22 maxlength=22 type="text" name="n_sn" value='<? echo $n_sn; ?>'></font></td>
<td align="left"><font size="4"><input size=20 maxlength=20 type="text" name="d_y" value='<? echo $d_y; ?>'></font></td>
<td align="left"><font size="4"><input size=20 maxlength=20 type="text" name="note" value='<? echo $note; ?>'></font></td>

<? if (!isset($_POST['add_new'])) { ?>
<tr>
<td align="center"><input type="submit" name="save" value="���������"></td>
</form>

<form action="2_3s.php" method=post>
<td align="center"><input type="submit" name="delete" value="�������"></td>
</form> <? }
else
{ ?>
<tr>
<td align="center"><input type="submit" name="new" value="���������"></td>
</form> <? }
?>

<form action="2_3s.php" method=post>
<td align="center"><input type="submit" name="concel" value="�����"></td>
</form>
</tr>

</table>
</body>
</html>