<? session_start();
   require ('inc/sql_connect.inc');

if (isset($_POST['new']))
   mysql_query("INSERT INTO  station SET n_station='".$_POST['n_station']."', note='".$_POST['note']."' ");

 if (isset($_POST['delete']))
   {
   mysql_query("DELETE pl_prog FROM pl_prog, manag_state, place WHERE manag_state.id_station='".$_SESSION['id_station']."'
   AND place.id_s_m=manag_state.id_s_m AND place.id_place=pl_prog.id_place");

   mysql_query("DELETE sn_monitor FROM sn_monitor, manag_state, place WHERE manag_state.id_station='".$_SESSION['id_station']."'
   AND place.id_s_m=manag_state.id_s_m AND place.id_place=sn_monitor.id_place");

   mysql_query("DELETE sn_printer FROM sn_printer, manag_state, place WHERE manag_state.id_station='".$_SESSION['id_station']."'
   AND place.id_s_m=manag_state.id_s_m AND place.id_place=sn_printer.id_place");

   mysql_query("DELETE sn_scaner FROM sn_scaner, manag_state, place WHERE manag_state.id_station='".$_SESSION['id_station']."'
   AND place.id_s_m=manag_state.id_s_m AND place.id_place=sn_scaner.id_place");

   mysql_query("DELETE sn_sysunit FROM sn_sysunit, manag_state, place WHERE manag_state.id_station='".$_SESSION['id_station']."'
   AND place.id_s_m=manag_state.id_s_m AND place.id_place=sn_sysunit.id_place");

   mysql_query("DELETE sn_sysunit FROM sn_sysunit, manag_state, place WHERE manag_state.id_station='".$_SESSION['id_station']."'
   AND place.id_s_m=manag_state.id_s_m AND place.id_place=sn_sysunit.id_place");

   mysql_query("DELETE place FROM place, manag_state, place WHERE manag_state.id_station='".$_SESSION['id_station']."'
   AND place.id_s_m=manag_state.id_s_m");

   mysql_query("DELETE building FROM building, address WHERE address.id_station='".$_SESSION['id_station']."'
   AND address.id_address=building.id_address");

   mysql_query("DELETE FROM address WHERE address.id_station='".$_SESSION['id_station']."'");

   mysql_query("DELETE ip_table FROM ip_table, shluz_m WHERE shluz_m.id_station='".$_SESSION['id_station']."'
   AND shluz_m.id_shluz_m=ip_table.id_shluz_m");

   mysql_query("DELETE FROM shluz_m WHERE shluz_m.id_station.id_station='".$_SESSION['id_station']."'");

   mysql_query("DELETE place FROM place, manag_state WHERE manag_state.id_station='".$_SESSION['id_station']."'
   AND place.id_s_m=manag_state.id_s_m");

   mysql_query("DELETE user_resourse FROM user_resourse WHERE manag_state.id_station='".$_SESSION['id_station']."'
   AND user_resourse.id_s_m=manag_state.id_s_m");

   mysql_query("DELETE FROM manag_state WHERE id_s_m='".$_SESSION['id_station']."'");

   mysql_query("DELETE FROM station WHERE id_station='".$_SESSION['id_station']."'");
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

<form action="edit_station.php" method=post>

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
  $q1=mysql_query("SELECT * FROM station WHERE '".$_SESSION['admin']."'=0 Order By n_station");
   $row=mysql_num_rows($q1);
       echo '&nbsp';
  ob_start ();
?>
<table border="2"  cellspacing="1">
<tr><td colspan="3" align="center"><font size="4">Список станций</font></td></tr>
<tr>
<td align="center"><font size="4">№</font></td>
<td align="center"><font size="4">Наз. орг.</font></td>
<td align="center"><font size="4">Контакт. информ. админ.</font></td>
</tr>

<?
  for ($i=0; $i<$row; $i++)
{
echo '<tr>';
echo '<td align="left"><font size="4">'.($i+1).'</font></td>';

echo '<td align="left"><a href="edit_station.php?id_station='.mysql_result($q1, $i, 'id_station').'">
<font size="4">'.mysql_result($q1, $i, 'n_station').'</font></a></td>';

echo '<td align="left"><font size="4">'.mysql_result($q1, $i, 'note').'</font></td>';
echo '</tr>';
}
echo '</table>';
 $_SESSION['buffer']=ob_get_contents(); ?>
</body>
</html>