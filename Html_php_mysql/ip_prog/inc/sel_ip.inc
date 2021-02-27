<?                                        // изменение ip
   if (!isset($_POST['add_new']))
   {
   $q_select=mysql_query("SELECT * FROM ip_table, shluz_m
   WHERE ip_table.id_shluz_m=shluz_m.id_shluz_m
   AND id_station='".$_SESSION['id_station']."'
   AND id_place=0 AND id_management='".$id_management."'
   ORDER BY n_ip");
   $ip_all_row=mysql_num_rows($q_select);
   } else $ip_all_row=0;

   echo '<select name="id_ip">';
   if (!isset($_POST['add_new']) && isset($_SESSION['id_ip']))
   echo '<option value='.$_SESSION['id_ip'].'>'.mysql_result($q_place, 0, 'n_ip').'</option>';
   echo '<option value="">0.0.0.0</option>';
     for ($i=0; $i<$ip_all_row; $i++)
   echo '<option value='.mysql_result($q_select, $i, 'id_ip').'>'.mysql_result($q_select, $i, 'n_ip').'</option>';
   echo '</select>';
?>