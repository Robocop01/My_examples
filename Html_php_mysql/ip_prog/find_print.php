<? session_start();
   require ('inc/sql_connect.inc');
?>
<html>
<head>
  <title></title>
</head>

<body bgcolor=#c0c0c0>
<?
   if (!isset($_POST['find_ip']) || !isset($_POST['ip2'])) exit;

  echo $_POST['ip1'].=$_POST['ip2'], '<br>';
  $q_place=mysql_query("SELECT id_place FROM ip_table WHERE n_ip='".$_POST['ip1']."' LIMIT 1");
  if (mysql_num_rows($q_place)==0) { echo "<br>такой IP отсутствует!"; exit;}
  $id_place=mysql_result($q_place, 0, 'id_place');
  $q1=mysql_query("SELECT * FROM user_resource, manag_state, shluz_m, ip_table, management
  WHERE user_resource.id_user='".$_SESSION['id_user']."'
  AND user_resource.id_s_m=manag_state.id_s_m
  AND manag_state.id_management=ip_table.id_management
  AND ip_table.id_management=management.id_management
  AND manag_state.id_station=shluz_m.id_station
  AND ip_table.id_shluz_m=shluz_m.id_shluz_m
  AND n_ip='".$_POST['ip1']."'
  LIMIT 1");
  if (mysql_num_rows($q1)==0) { echo "<br>такой IP вне Вашей зоны!"; exit;}

  if ($id_place==0) { echo "<br>такой IP свободен!"; exit;}

  $q_place=mysql_query("SELECT n_station, p_phone, person_name, place.id_place, place.note,
  p_post, n_management, n_building, n_computer, email, r_u, station.id_station, n_station,
  building.id_building, management.id_management, n_management, address.id_address, n_address,
  manag_state.id_s_m,
  sn_sysunit.id_sn, f_sysunit.id_sysunit, n_sysunit, sn_sysunit.n_sn,
  sn_scaner.id_sn, f_scaner.id_scaner, n_scaner, sn_scaner.n_sn,
  sn_ups.id_sn, f_ups.id_ups, n_ups, sn_ups.n_sn,
  id_ip, n_ip, n_shluz, maska_ip,

  sn_monitor.id_place,
  case when count(*)>1 then sn_monitor.id_place end id_place2, min(n_monitor)n_monitor,
  case when min(n_monitor)<>max(n_monitor) then max(n_monitor) end n_monitor2,

  sn_printer.id_place,
  case when count(*)>1 then sn_printer.id_place end id_place2, min(n_printer)n_printer,
  case when min(n_printer)<>max(n_printer) then max(n_printer) end n_printer2

  FROM station, management, building, address, user_resource, manag_state, place

  LEFT JOIN sn_monitor ON place.id_place=sn_monitor.id_place
  LEFT JOIN  f_monitor ON sn_monitor.id_monitor=f_monitor.id_monitor

  LEFT JOIN sn_sysunit ON place.id_place=sn_sysunit.id_place
  LEFT JOIN  f_sysunit ON sn_sysunit.id_sysunit=f_sysunit.id_sysunit

  LEFT JOIN sn_printer ON place.id_place=sn_printer.id_place
  LEFT JOIN  f_printer ON sn_printer.id_printer=f_printer.id_printer

  LEFT JOIN sn_scaner ON place.id_place=sn_scaner.id_place
  LEFT JOIN f_scaner ON sn_scaner.id_scaner=f_scaner.id_scaner

  LEFT JOIN sn_ups ON place.id_place=sn_ups.id_place
  LEFT JOIN  f_ups ON sn_ups.id_ups=f_ups.id_ups

  LEFT JOIN ip_table ON place.id_place=ip_table.id_place
  LEFT JOIN  shluz_m ON ip_table.id_shluz_m=shluz_m.id_shluz_m

  WHERE user_resource.id_user='".$_SESSION['id_user']."'
  AND user_resource.id_s_m=manag_state.id_s_m
  AND manag_state.id_s_m=place.id_s_m
  AND manag_state.id_management=management.id_management
  AND place.id_building=building.id_building
  AND building.id_address=address.id_address
  AND manag_state.id_station=station.id_station
  AND place.id_place='".$id_place."'
  LIMIT 1");

  echo '<table border="1" cellspacing="0">';
  echo '<tr>';
  echo '<td>', mysql_result($q_place, 0, 'n_station'), '</td>', '<td>', mysql_result($q_place, 0, 'n_management'), '</td>';
  echo '</tr>';
  echo '<tr>';
  echo '<td>', mysql_result($q_place, 0, 'n_address'), '</td>', '<td>', mysql_result($q_place, 0, 'n_building'), '</td>';
  echo '</tr>';
  echo '<tr>';
  echo '<td>', mysql_result($q_place, 0, 'p_post'), '</td>', '<td>', mysql_result($q_place, 0, 'p_phone'), '</td>';
  echo '</tr>';
  echo '<tr>';
  echo '<td>', mysql_result($q_place, 0, 'person_name'), '</td>', '<td>', mysql_result($q_place, 0, 'email'), '</td>';
  echo '</tr>';
  echo '<tr><td>Подключение</td><td>', mysql_result($q_place, 0, 'r_u'), '</td></tr>';
  echo '</table>';
  echo '<br>';
  echo '<table border="1" cellspacing="0">';
  echo '<tr><td>Монитор 1</td><td>', mysql_result($q_place, 0, 'n_monitor'), '</td></tr>';
  echo '<tr><td>Монитор 2</td><td>', mysql_result($q_place, 0, 'n_monitor2'), '</td></tr>';
  echo '<tr><td>Системный блок</td><td>', mysql_result($q_place, 0, 'n_sysunit'), '</td></tr>';
  echo '<tr><td>Принтер/МФУ 1</td><td>', mysql_result($q_place, 0, 'n_printer'), '</td></tr>';
  echo '<tr><td>Принтер/МФУ 2</td><td>', mysql_result($q_place, 0, 'n_printer2'), '</td></tr>';
  echo '<tr><td>UPS</td><td>', mysql_result($q_place, 0, 'n_ups'), '</td></tr>';
  echo '<tr><td>Сканер</td><td>', mysql_result($q_place, 0, 'n_scaner'), '</td></tr>';
  echo '</table>';
  echo '<br>';

  $q6=mysql_query("SELECT * FROM prog, pl_prog
  WHERE pl_prog.id_place='".mysql_result($q_place, 0, 'id_place')."'
  AND pl_prog.id_prog=prog.id_prog
  ORDER BY n_prog");

  echo '<table border="1" cellspacing="0">';
  echo '<tr><td align="center">Установленные программы</td></tr>';
  for ($i=0; $i<mysql_num_rows($q6); $i++)
  echo '<tr><td>', mysql_result($q6, $i, 'prog.n_prog'), '</td></tr>';
  echo '</table>';
?>
</body>
</html>