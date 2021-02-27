<?
 $q_monitor=mysql_query("SELECT * FROM f_monitor,sn_monitor
   WHERE f_monitor.id_monitor=sn_monitor.id_monitor AND sn_monitor.id_place='".$_SESSION['id_place']."' LIMIT 2");
   $monitor_row=mysql_num_rows($q_monitor); 


           $_SESSION['id_monitor1']=0; $_SESSION['monitor1_id_sn']=0; $_SESSION['monitor1_id_s_m']=0;
           $_SESSION['id_monitor2']=0; $_SESSION['monitor2_id_sn']=0; $_SESSION['monitor2_id_s_m']=0;
         if ($monitor_row>0)               // выборка в зависимости от количества принтеров
         {  $_SESSION['id_monitor1']=mysql_result($q_monitor, 0, 'sn_monitor.id_monitor');
            $_SESSION['monitor1_id_sn']=mysql_result($q_monitor, 0, 'id_sn');
            $_SESSION['monitor1_id_s_m']=mysql_result($q_monitor, 0, 'id_s_m');}
         if ($monitor_row>1)
         {  $_SESSION['id_monitor2']=mysql_result($q_monitor, 1, 'sn_monitor.id_monitor');
            $_SESSION['monitor2_id_sn']=mysql_result($q_monitor, 1, 'id_sn');
            $_SESSION['monitor2_id_s_m']=mysql_result($q_monitor, 1, 'id_s_m');}

                                 // изменение модели и/или серийника сканера, для других заменить слово monitor1 на др.
    $q_select1=mysql_query("SELECT * FROM sn_monitor, f_monitor
    WHERE sn_monitor.id_monitor=f_monitor.id_monitor
    AND id_place=0
    AND id_s_m='".$_SESSION['id_s_m']."'
    ORDER BY n_sn");

    $q_select2=mysql_query("SELECT * FROM f_monitor, sn_monitor
    WHERE sn_monitor.id_monitor!='".$_SESSION['id_monitor1']."'
    AND id_s_m='".$_SESSION['id_s_m']."'
    AND sn_monitor.id_monitor=f_monitor.id_monitor AND id_place=0
    GROUP BY sn_monitor.id_monitor ORDER BY n_monitor");
?>

<td><font size="4">
<select id="m_monitor1" name="id_monitor1">
<?
          if ($monitor_row>0)
      echo '<option value='.$_SESSION['id_monitor1'].'>'.mysql_result($q_monitor, 0, 'n_monitor').'</option>';
      echo '<option value="">-</option>';
     for ($i=0; $i<mysql_num_rows($q_select2); $i++)
   echo '<option value='.mysql_result($q_select2, $i, 'id_monitor').'>'.mysql_result($q_select2, $i, 'n_monitor').'</option>';
     ?>
</select>
<font></td>
<td><font size="4">
<select id="sn_monitor1" name="monitor1_id_sn">
<?
    if ($monitor_row>0)
  echo '<option value="'.$_SESSION['monitor1_id_sn'].'" class='.$_SESSION['id_monitor1'].'>'.mysql_result($q_monitor, 0, 'n_sn').'</option>';
   for ($i=0; $i<mysql_num_rows($q_select1); $i++)
echo '<option value="'.mysql_result($q_select1, $i, 'id_sn').'" class='.mysql_result($q_select1, $i, 'id_monitor').'>'.mysql_result($q_select1, $i, 'n_sn').'</option>';
  ?>
</select>
<font></td>
