<? session_start();
   require ('inc/sql_connect.inc');
   global $REMOTE_ADDR;
?><html>
<head>
<body bgcolor=#c0c0c0>
<title>Учет компьютерного хозяйства</title>

 <script src="inc/datepicker.js" type="text/javascript" charset="UTF-8" language="javascript"></script>
 <link rel="stylesheet" type="text/css" href="datepicker.css" />

<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />
<link href="style.css"  rel="stylesheet" type="text/css" />

<table border="3">

<tr bgcolor="#00FFFF">
<td colspan="3" align="center"><p><font size="6">Поиск комп. техники</font></p></td></tr>
</tr>

<tr>

<td valign="top">
<table border="0" cellspacing="0">
<tr>
<td>
<p><font size="4">Станция</font></p>
</td>
</tr>
<tr>
<td align="center">
<form action="report_f.php" method=post>
<?
  $q1=mysql_query("SELECT id_station, n_station FROM station
  WHERE id_station IN (SELECT DISTINCT id_station FROM user_resource, manag_state
  WHERE id_user='".$_SESSION['id_user']."' AND user_resource.id_s_m=manag_state.id_s_m)
  Order By n_station");
   $row=mysql_num_rows($q1);

   echo '<select name="id_station"><option value='.mysql_result($q1, 0, 'station.id_station').'>'.mysql_result($q1, 0, 'n_station').'</option>';

  for ($i=1; $i<$row; $i++)
  echo '<option value='.mysql_result($q1, $i, 'id_station').'>'.mysql_result($q1, $i, 'n_station').'</option>';
?>
</td>
</tr>
</table>
</td>

<td></td>

<td valign="top">
<table border="0" cellspacing="0">
<tr>
<td align="center">
<p><font size="4">Тип оборуд.</font></p>
</td>
</tr>
<tr>
<td align="center">
<?
   echo '<select name="id_type"><option value=0>all</option>';
   echo '<option value=1>Монитор</option>';
   echo '<option value=2>Сис. блок</option>';
   echo '<option value=3>Принтер</option>';
   echo '<option value=4>UPS</option>';
   echo '<option value=5>Сканер</option>';
?>
</td>
</tr>
</table>
</td>
</tr>

<tr>
<td align="center" colspan=3><input type="submit" name="save" value="Показать"></td>
</form>
</tr>
<tr>
<td align="center" colspan=3>
<p><a href="index.php" class="blank"><font size="4">Вернуться в Главное меню</font></a></p>
</td>
</tr>
</table>
</body>
</head>
</html>