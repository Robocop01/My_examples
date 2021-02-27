<?
switch ($_POST['id_type']) {
    case 0:
  $q1=mysql_query("SELECT management.id_management, p_post, p_phone, person_name, n_management, n_building, n_station,
  n_sysunit, n_ups, n_scaner, sn_sysunit.n_sn, sn_ups.n_sn, sn_scaner.n_sn,

  sn_monitor.id_place,
  case when count(*)>1 then sn_monitor.id_place end id_place2, min(n_monitor)n_monitor,
  case when min(n_monitor)<>max(n_monitor) then max(n_monitor) end n_monitor2,

  case when count(*)>1 then sn_monitor.id_place end id_place2, min(sn_monitor.n_sn)sn_monitor,
  case when min(sn_monitor.n_sn)<>max(sn_monitor.n_sn) then max(sn_monitor.n_sn) end sn_monitor2,

  sn_printer.id_place,
  case when count(*)>1 then sn_printer.id_place end id_place2, min(n_printer)n_printer,
  case when min(n_printer)<>max(n_printer) then max(n_printer) end n_printer2,

  case when count(*)>1 then sn_printer.id_place end id_place2, min(sn_printer.n_sn)sn_printer,
  case when min(sn_printer.n_sn)<>max(sn_printer.n_sn) then max(sn_printer.n_sn) end sn_printer2

  FROM station, management, building, user_resource, manag_state,
  place

  LEFT JOIN sn_monitor ON place.id_place=sn_monitor.id_place
  LEFT JOIN  f_monitor ON sn_monitor.id_monitor=f_monitor.id_monitor

  LEFT JOIN sn_sysunit ON place.id_place=sn_sysunit.id_place
  LEFT JOIN  f_sysunit ON sn_sysunit.id_sysunit=f_sysunit.id_sysunit

  LEFT JOIN sn_printer ON place.id_place=sn_printer.id_place
  LEFT JOIN  f_printer ON sn_printer.id_printer=f_printer.id_printer

  LEFT JOIN sn_ups ON place.id_place=sn_ups.id_place
  LEFT JOIN  f_ups ON sn_ups.id_ups=f_ups.id_ups

  LEFT JOIN sn_scaner ON place.id_place=sn_scaner.id_place
  LEFT JOIN  f_scaner ON sn_scaner.id_scaner=f_scaner.id_scaner

  WHERE user_resource.id_user='".$_SESSION['id_user']."'
    AND user_resource.id_s_m=manag_state.id_s_m
    AND user_resource.id_s_m=place.id_s_m
    AND manag_state.id_management=management.id_management
    AND manag_state.id_station=station.id_station
    AND station.id_station='".$_POST['id_station']."'
    AND building.id_building=place.id_building

    GROUP BY place.id_place Order By n_management, n_building, p_post");
        break;
    case 1:
$q1=mysql_query("SELECT management.id_management, p_post, p_phone, person_name, n_management, n_building, n_station, sn_monitor.id_place,
  case when count(*)>1 then sn_monitor.id_place end id_place2, min(n_monitor)n_monitor,
  case when min(n_monitor)<>max(n_monitor) then max(n_monitor) end n_monitor2
  FROM sn_monitor, f_monitor, place, station, management, building, user_resource, manag_state
  WHERE user_resource.id_user='".$_SESSION['id_user']."'
    AND user_resource.id_s_m=manag_state.id_s_m
    AND user_resource.id_s_m=place.id_s_m
    AND manag_state.id_management=management.id_management
    AND manag_state.id_station=station.id_station
    AND station.id_station='".$_POST['id_station']."'
    AND building.id_building=place.id_building
    AND sn_monitor.id_place=place.id_place
    AND sn_monitor.id_monitor=f_monitor.id_monitor
    GROUP BY id_place Order By n_management, n_building, p_post");
        break;
    case 2:
  $q1=mysql_query("SELECT n_station, p_phone, person_name, place.id_place,
  p_post, n_management, n_building, station.id_station,
  building.id_building, management.id_management,
  f_sysunit.id_sysunit, n_sysunit

  FROM place, station, management, building, f_sysunit, sn_sysunit, user_resource, manag_state


  WHERE user_resource.id_user='".$_SESSION['id_user']."'
  AND user_resource.id_s_m=manag_state.id_s_m
  AND user_resource.id_s_m=place.id_s_m
  AND manag_state.id_management=management.id_management
  AND manag_state.id_station=station.id_station
  AND station.id_station='".$_POST['id_station']."'
  AND building.id_building=place.id_building
  and sn_sysunit.id_place=place.id_place
  and f_sysunit.id_sysunit=sn_sysunit.id_sysunit

  Order By n_management, n_sysunit, n_building, p_post");
        break;
    case 3:
$q1=mysql_query("SELECT management.id_management, p_post, p_phone, person_name, n_management, n_building, n_station, sn_printer.id_place,
  case when count(*)>1 then sn_printer.id_place end id_place2, min(n_printer)n_printer,
  case when min(n_printer)<>max(n_printer) then max(n_printer) end n_printer2
  FROM sn_printer, f_printer, place, station, management, building, user_resource, manag_state
  WHERE user_resource.id_user='".$_SESSION['id_user']."'
    AND user_resource.id_s_m=manag_state.id_s_m
    AND user_resource.id_s_m=place.id_s_m
    AND manag_state.id_management=management.id_management
    AND manag_state.id_station=station.id_station
    AND station.id_station='".$_POST['id_station']."'
    AND building.id_building=place.id_building
    AND sn_printer.id_place=place.id_place
    AND sn_printer.id_printer=f_printer.id_printer
    GROUP BY id_place Order By n_management, n_building, p_post");
        break;
    case 4:
  $q1=mysql_query("SELECT n_station, p_phone, person_name, place.id_place,
  p_post, n_management, n_building, station.id_station,
  building.id_building, management.id_management,
  f_ups.id_ups, n_ups

  FROM place, station, management, building, f_ups, sn_ups, user_resource, manag_state

  WHERE user_resource.id_user='".$_SESSION['id_user']."'
  AND user_resource.id_s_m=manag_state.id_s_m
  AND user_resource.id_s_m=place.id_s_m
  AND manag_state.id_management=management.id_management
  AND manag_state.id_station=station.id_station
  AND station.id_station='".$_POST['id_station']."'
  AND building.id_building=place.id_building
  and sn_ups.id_place=place.id_place
  and f_ups.id_ups=sn_ups.id_ups

  Order By n_management, n_ups, n_building, p_post");
        break;
    case 5:
  $q1=mysql_query("SELECT n_station, p_phone, person_name, place.id_place,
  p_post, n_management, n_building, station.id_station,
  building.id_building, management.id_management,
  f_scaner.id_scaner, n_scaner

  FROM place, station, management, building, f_scaner, sn_scaner, user_resource, manag_state

  WHERE user_resource.id_user='".$_SESSION['id_user']."'
  AND user_resource.id_s_m=manag_state.id_s_m
  AND user_resource.id_s_m=place.id_s_m
  AND manag_state.id_management=management.id_management
  AND manag_state.id_station=station.id_station
  AND station.id_station='".$_POST['id_station']."'
  AND building.id_building=place.id_building
  and sn_scaner.id_place=place.id_place
  and f_scaner.id_scaner=sn_scaner.id_scaner

  Order By n_scaner, n_scaner, n_building, p_post");
        break;
        }
?>