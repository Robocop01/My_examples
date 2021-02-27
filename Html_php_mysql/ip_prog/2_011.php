<? session_start();
   require ('inc/sql_connect.inc');

if (isset($_POST['new']))
   mysql_query("INSERT INTO manag_state SET id_station='".$_POST['id_station']."', id_management='".$_POST['id_management']."'");

 if (isset($_GET['id_s_m']))
 {
     mysql_query("DELETE ip_table FROM ip_table, manag_state, shluz_m WHERE manag_state.id_s_m='".$_GET['id_s_m']."'
      AND shluz_m.id_shluz_m=ip_table.id_shluz_m AND manag_state.id_station=shluz_m.id_station
      AND manag_state.id_management=ip_table.id_management ");

   mysql_query("DELETE FROM pl_prog WHERE place.id_s_m='".$_GET['id_s_m']."' AND place.id_place=pl_prog.id_place");

   mysql_query("DELETE FROM manag_state WHERE id_s_m='".$_GET['id_s_m']."'");

   mysql_query("DELETE FROM user_resource WHERE id_s_m='".$_GET['id_s_m']."'");

   mysql_query("DELETE FROM place WHERE id_s_m='".$_GET['id_s_m']."'");

   mysql_query("DELETE FROM sn_monitor WHERE id_s_m='".$_GET['id_s_m']."'");

   mysql_query("DELETE FROM sn_printer WHERE id_s_m='".$_GET['id_s_m']."'");

   mysql_query("DELETE FROM sn_scaner WHERE id_s_m='".$_GET['id_s_m']."'");

   mysql_query("DELETE FROM sn_sysunit WHERE id_s_m='".$_GET['id_s_m']."'");

   mysql_query("DELETE FROM sn_ups WHERE id_s_m='".$_GET['id_s_m']."'");
}
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

<form action="edit_st_2_011.php" method=post>

<td width="107">
<input type="submit" name="add_new" value="Добавить"></td>

  <td width="440"></td>
<td width="107">
</form>

<form action="print_pr.php" method=post>
<input type="submit" name="add_new" value="Распечатать"></td>
</form>

 </tr>
</table>
</span>
</form>
<?
  $q1=mysql_query("SELECT * FROM manag_state, station, management
  WHERE '".$_SESSION['admin']."'=0
  AND manag_state.id_station=station.id_station
  AND manag_state.id_management=management.id_management
   Order By n_station, n_management");
   $row=mysql_num_rows($q1);
     echo '&nbsp';
  ob_start ();
?>
<table border="2"  cellspacing="1">
<tr><td colspan="4" align="center"><font size="4">Привязка орг. к станции</font></td></tr>
<tr>
<td align="center"><font size="4">№</font></td>
<td align="center"><font size="4">Станция</font></td>
<td align="center"><font size="4">Дирекция</font></td>
<td align="center"><font size="4">Оция удаления</font></td>
</tr>

<?
  for ($i=0; $i<$row; $i++)
{
echo '<tr>';
echo '<td align="left"><font size="4">'.($i+1).'</font></td>';
echo '<td align="left"><font size="4">'.mysql_result($q1, $i, 'n_station').'</font></td>';
echo '<td align="left"><font size="4">'.mysql_result($q1, $i, 'n_management').'</font></td>';
echo '<td align="left"><a href="2_011.php?id_s_m='.mysql_result($q1, $i, 'id_s_m').'"><font size="4">удалить</font></a></td>';
echo '</tr>';
}
echo '</table>';
$_SESSION['buffer']=ob_get_contents();
?>
</body>
</html>