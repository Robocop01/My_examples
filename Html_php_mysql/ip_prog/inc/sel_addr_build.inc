<?         // изменение принадлежности (станция-организация) и/или для сканера
  $q_select=mysql_query("SELECT building.id_building, n_building, address.id_address, n_address
  FROM user_resource, manag_state, building, address
  WHERE user_resource.id_user='".$_SESSION['id_user']."'
  AND user_resource.id_s_m=manag_state.id_s_m
  AND manag_state.id_station=address.id_station
  AND address.id_address=building.id_address
  Group By building.id_building Order By n_address, n_building");

  $q_select2=mysql_query("SELECT address.id_station, address.id_address, n_address
  FROM address, building
  WHERE address.id_station='".$_SESSION['id_station']."'
  AND address.id_address=building.id_address
  Group By address.id_address Order By n_address");
?>

<td align="left"><font size="4">
<select id="address" name="id_address">
<?
         if (!isset($_POST['add_new']))
     echo '<option value='.$id_address.'>'.$n_address.'</option>';
     for ($i=0; $i<mysql_num_rows($q_select2); $i++)
       if (mysql_result($q_select2, $i, 'id_address')!=$id_address)
   echo '<option value='.mysql_result($q_select2, $i, 'id_address').'>'.mysql_result($q_select2, $i, 'n_address').'</option>';
  ?>
</select>
</font></td>

<td align="left"><font size="4">
<select id="building" name="id_building">
 <?
      if (!isset($_POST['add_new']))
  echo '<option value="'.$id_building.'" class='.$id_address.'>'.$n_building.'</option>';
   for ($i=0; $i<mysql_num_rows($q_select); $i++)
   if (mysql_result($q_select, $i, 'id_building')!=$id_building)
echo '<option value='.mysql_result($q_select, $i, 'id_building').' class='.mysql_result($q_select, $i, 'id_address').'>'.mysql_result($q_select, $i, 'n_building').'</option>';
  ?>
</select>
</font></td>
