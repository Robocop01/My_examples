<? session_start();
   require ('inc/sql_connect.inc');

if (isset($_POST['new']))
   mysql_query("INSERT INTO sn_ups SET id_s_m='".$_POST['id_s_m']."',
   id_ups='".$_POST['id_ups']."', n_sn='".$_POST['n_sn']."', d_y='".$_POST['d_y']."', note='".$_POST['note']."'");

 if (isset($_POST['delete']))
   mysql_query("DELETE FROM sn_ups WHERE id_sn='".$_SESSION['id_sn']."'");

 if (isset($_POST['exit'])) $_POST['id_sn']=$_SESSION['id_sn'];
?>
<html>

<head>
<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />
<link href="style.css"  rel="stylesheet" type="text/css" />
<STYLE type=text/css>
#slide {
Position: Absolute;
Left: 0; Top: 0;
Visibility: Visible;
}
</STYLE>
<script src="/inc/menu.js"></script>
</head>

<body topmargin="0" leftmargin="0" bgcolor=dce6e6>
<span ID="slide">
 <table border="0" cellspacing="0" cellpadding="0" border="0">

<tr align="left" valign="middle" height="20">
<form action="index.php" method=post>
  <td width="107"><input type="submit" name="a" value="Назад"></td>
</form>

<form action="edit_sn_ups.php" method=post>

<td width="107">
<input type="submit" name="add_new" value="Добавить"></td>
  <td width="440"></td>
</form>

<form action="print_pr.php" method=post>
<td width="107"><input type="submit" name="add_new" value="Распечатать"></td>
</form>

</tr>
</table>
</span>
</form>
<?
  $q1=mysql_query("SELECT n_management, n_ups, id_sn, n_sn, d_y, n_station, sn_ups.note
  FROM user_resource, manag_state, sn_ups, f_ups, management, station
  WHERE id_user='".$_SESSION['id_user']."'
  AND user_resource.id_s_m=manag_state.id_s_m
  AND manag_state.id_s_m=sn_ups.id_s_m
  AND manag_state.id_management=management.id_management
  AND manag_state.id_station=station.id_station
  AND sn_ups.id_ups=f_ups.id_ups
  Order By n_station, n_management, n_ups, n_sn");

   $row=mysql_num_rows($q1);
       echo '&nbsp';
  ob_start ();
?>
<table border="1" bordercolor="black" cellspacing="0">
<tr><th colspan="7"><font size="4">UPS по S/N</font></th></tr>
<tr>
<td align="center"><font size="4">№</font></td>
<td align="center"><font size="4">Станция</font></td>
<td align="center"><font size="4">Организация</font></td>
<td align="center"><font size="4">Модель</font></td>
<td align="center"><font size="4">S/N</font></td>
<td align="center"><font size="4">Дата произ.</font></td>
<td align="center"><font size="4">Прим.</font></td>
</tr>
<?
  for ($i=0; $i<$row; $i++)
{
echo '<tr>';
echo '<td align="left"><font size="4">'.($i+1).'</font></td>';
echo '<td align="left"><font size="4">'.mysql_result($q1, $i, 'n_station').'</font></td>';
echo '<td align="left"><font size="4">'.mysql_result($q1, $i, 'n_management').'</font></td>';
echo '<td align="left"><font size="4">'.mysql_result($q1, $i, 'n_ups').'</font></td>';
echo '<td align="left"><a href="edit_sn_ups.php?id_sn='.mysql_result($q1, $i, 'id_sn').'">
<font size="4">'.mysql_result($q1, $i, 'n_sn').'</font></a></td>';
echo '<td align="left"><font size="4">'.mysql_result($q1, $i, 'd_y').'</font></td>';
echo '<td align="left"><font size="4">'.mysql_result($q1, $i, 'note').'</font></td>';
echo '</tr>';
}
echo '</table>';
$_SESSION['buffer']=ob_get_contents();
?>
</body>
</html>