<?         // изменение принадлежности (станция-организация) и/или для сканера
  $q_select=mysql_query("SELECT n_management, n_station, station.id_station, management.id_management, manag_state.id_s_m
  FROM user_resource, manag_state, management, station
  WHERE user_resource.id_user='".$_SESSION['id_user']."'
  AND user_resource.id_s_m=manag_state.id_s_m
  AND manag_state.id_management=management.id_management
  AND manag_state.id_station=station.id_station
  Order By n_station, n_management");

  $q_select2=mysql_query("SELECT station.id_station, n_station
  FROM station, user_resource, manag_state
  WHERE id_user='".$_SESSION['id_user']."' AND user_resource.id_s_m=manag_state.id_s_m AND manag_state.id_station=station.id_station
  Group By station.id_station Order By n_station");
?>

<td align="left"><font size="4">
<select id="station" name="id_station">
<?
         if (isset($_POST['add_new'])) { $id_station=$_SESSION['id_station']; $n_station=$_SESSION['n_station']; }
   echo '<option value='.$id_station.'>'.$n_station.'</option>';
     for ($i=0; $i<mysql_num_rows($q_select2); $i++)
       if (mysql_result($q_select2, $i, 'id_station')!=$id_station)
   echo '<option value='.mysql_result($q_select2, $i, 'id_station').'>'.mysql_result($q_select2, $i, 'n_station').'</option>';
  ?>
</select>
</font></td>

<td align="left"><font size="4">
<select id="management" name="id_s_m">
 <?
      if (!isset($_POST['add_new']))
  echo '<option value="'.$id_s_m.'" class='.$id_station.'>'.$n_management.'</option>';
   for ($i=0; $i<mysql_num_rows($q_select); $i++)
   if (mysql_result($q_select, $i, 'id_management')!=$id_management)
echo '<option value='.mysql_result($q_select, $i, 'id_s_m').' class='.mysql_result($q_select, $i, 'id_station').'>'.mysql_result($q_select, $i, 'n_management').'</option>';
  ?>
</select>
</font></td>
