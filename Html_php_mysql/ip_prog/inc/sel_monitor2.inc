<?                                                       // изменение модели и/или серийника сканера, для других заменить слово monitor2 на др.
    $q_select1=mysql_query("SELECT * FROM sn_monitor, f_monitor
    WHERE sn_monitor.id_monitor=f_monitor.id_monitor
    AND id_place=0
    AND id_s_m='".$_SESSION['id_s_m']."'
    ORDER BY n_sn");

    $q_select2=mysql_query("SELECT * FROM f_monitor, sn_monitor
    WHERE sn_monitor.id_monitor!='".$_SESSION['id_monitor2']."'
    AND id_s_m='".$_SESSION['id_s_m']."'
    AND sn_monitor.id_monitor=f_monitor.id_monitor AND id_place=0
    GROUP BY sn_monitor.id_monitor ORDER BY n_monitor");
?>

<td align="left"><font size="4">
<select id="m_monitor2" name="id_monitor2">
<?
   if ($monitor_row>1)
      echo '<option value='.$_SESSION['id_monitor2'].'>'.mysql_result($q_monitor, 1, 'n_monitor').'</option>';
      echo '<option value="">-</option>';
     for ($i=0; $i<mysql_num_rows($q_select2); $i++)
   echo '<option value='.mysql_result($q_select2, $i, 'id_monitor').'>'.mysql_result($q_select2, $i, 'n_monitor').'</option>';
     ?>
</select>
<font></td>
<td><font size="4">
<select id="sn_monitor2" name="monitor2_id_sn">
<?
    if ($monitor_row>1)
   echo '<option value="'.$_SESSION['monitor2_id_sn'].'" class='.$_SESSION['id_monitor2'].'>'.mysql_result($q_monitor, 1, 'n_sn').'</option>';
   for ($i=0; $i<mysql_num_rows($q_select1); $i++)
   echo '<option value='.mysql_result($q_select1, $i, 'id_sn').' class='.mysql_result($q_select1, $i, 'id_monitor').'>'.mysql_result($q_select1, $i, 'n_sn').'</option>';
  ?>
</select>
</font></td>