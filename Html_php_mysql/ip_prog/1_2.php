<? session_start();
   require ('inc/sql_connect.inc');
?>
<html>
<head>
<title>Учет компьютерного хозяйства</title>
<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />
<link href="style.css"  rel="stylesheet" type="text/css" />
</head>

<body bgcolor=#c0c0c0>
<table border="3">
<tr bgcolor="#00FFFF">
<td colspan="2" align="center"><font size="6">Рабочие места по станциям</font></td>
</tr>

<tr>
<td valign="top">
<table border="0" cellspacing="0">
<tr>
<td>
<font size="4">Выбор станции</font>
</td>
</tr>
<tr>
<td align="center">
<form action="print.php" method=post>
<?
  $q1=mysql_query("SELECT station.id_station, n_station
  FROM station, user_resource, manag_state
  WHERE id_user='".$_SESSION['id_user']."' AND user_resource.id_s_m=manag_state.id_s_m AND manag_state.id_station=station.id_station
  Group By station.id_station Order By n_station");
  $row=mysql_num_rows($q1);

  if ($row>0)
  echo '<select name="id_station"><option value='.mysql_result($q1, 0, 'station.id_station').'>'.mysql_result($q1, 0, 'n_station').'</option>';
  for ($i=1; $i<$row; $i++)
  echo '<option value='.mysql_result($q1, $i, 'id_station').'>'.mysql_result($q1, $i, 'n_station').'</option>';
?>
</td>
</tr>
<tr>
<td align="center">
<? if ($row>0) echo '<input type="submit" name="saven" value="Показать">'; ?>
</td>
</form>
</tr>
</table>
</td>

<td valign="top">
<table border="0" cellspacing="0">
<tr>
<td align="center">
<font size="4">Поиск по IP</font>
</td>
</tr>

<tr>
<td align="center">
<form action="find_print.php" method=post target="_blank">
<?
  $q_ip=mysql_query("SELECT * FROM user_resource, manag_state, shluz_m, ip_table
  WHERE id_user='".$_SESSION['id_user']."'
  AND user_resource.id_s_m=manag_state.id_s_m
  AND manag_state.id_station=shluz_m.id_station
  AND shluz_m.id_shluz_m=ip_table.id_shluz_m
  AND manag_state.id_management=ip_table.id_management
  Group By shluz_m.id_shluz_m Order By n_shluz");
  $row=mysql_num_rows($q_ip);

  echo '<select name="ip1">';
  for ($i=0; $i<$row; $i++)
  {
  $vr=explode('.', mysql_result($q_ip, $i, 'n_shluz'));
    echo '<option value='.$vr[0]. '.' . $vr[1]. '.' . $vr[2].'.>'.$vr[0]. '.' . $vr[1]. '.' . $vr[2].'</option>';
  }

  echo '</select>.<select name="ip2">';
  for ($i=1; $i<255; $i++)
  echo '<option value='.$i.'>'.$i.'</option>';
?>
</select>
</td>
</tr>

<tr>
<td align="center"><input type="submit" name="find_ip" value="Найти"></td>
</form>
</tr>
</table>
</td>
</tr>
<tr>
<td colspan="2" align="center">
<a href="index.php" class="blank"><font size="4">Вернуться в Главное меню</font></a>
</td>
</tr>
</table>

</body>
</html>