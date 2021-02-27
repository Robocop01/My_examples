<? session_start();
   require ('inc/sql_connect.inc');

if (isset($_POST['new']))
   mysql_query("INSERT INTO  address SET n_address='".$_POST['n_address']."', id_station='".$_POST['id_station']."', note='".$_POST['note']."'");

 if (isset($_POST['delete']))
   {
     mysql_query("DELETE FROM place, building WHERE
     id_address='".$_SESSION['id_address']."' AND place.id_building=building.id_building");

   mysql_query("DELETE FROM address WHERE id_address='".$_SESSION['id_address']."'");
   mysql_query("DELETE FROM building WHERE id_address='".$_SESSION['id_address']."'");
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

<form action="edit_address.php" method=post>

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
     echo '&nbsp';
  $q1=mysql_query("SELECT * FROM address, station
  WHERE '".$_SESSION['admin']."'=0
  AND address.id_station=station.id_station
  Order By n_station, n_address");
   $row=mysql_num_rows($q1);
  ob_start ();
?>
<table border="2"  cellspacing="1">

<tr><td colspan="4" align="center"><font size="4">Список адресов</font></td></tr>
<tr>
<td align="center"><font size="4">№</font></td>
<td align="center"><font size="4">Станция</font></td>
<td align="center"><font size="4">Адрес</font></td>
<td align="center"><font size="4">Прим.</font></td>
</tr>

<?
  for ($i=0; $i<$row; $i++)
{
echo '<tr>';
echo '<td align="left"><font size="4">'.($i+1).'</font></td>';
echo '<td align="left"><font size="4">'.mysql_result($q1, $i, 'n_station').'</font></td>';
echo '<td align="left"><a href="edit_address.php?id_address='.mysql_result($q1, $i, 'id_address').'">
<font size="4">'.mysql_result($q1, $i, 'n_address').'</font></a></td>';

echo '<td align="left"><font size="4">'.mysql_result($q1, $i, 'note').'</font></td>';
echo '</tr>';
}
echo '</table>';
$_SESSION['buffer']=ob_get_contents();
?>
</body>
</html>