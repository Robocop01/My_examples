<?                                 // изменение модели и/или серийника сканера, для других заменить слово ups на др.
    $q_select1=mysql_query("SELECT * FROM sn_ups, f_ups
    WHERE sn_ups.id_ups=f_ups.id_ups
    AND id_place=0
    AND id_s_m='".$_SESSION['id_s_m']."'
    ORDER BY n_sn");

    $q_select2=mysql_query("SELECT * FROM f_ups, sn_ups
    WHERE id_s_m='".$_SESSION['id_s_m']."'
    AND sn_ups.id_ups=f_ups.id_ups AND id_place=0
    GROUP BY sn_ups.id_ups ORDER BY n_ups");
?>

<td align="left"><font size="4">
<select id="m_ups" name="id_ups">
<?
   if ($q_place_row>0 && isset($_SESSION['id_ups']))
      echo '<option value='.$_SESSION['id_ups'].'>'.mysql_result($q_place, 0, 'n_ups').'</option>';
      echo '<option value="">-</option>';
     for ($i=0; $i<mysql_num_rows($q_select2); $i++)
     if (mysql_result($q_select2, $i, 'id_ups')!=$_SESSION['id_ups'])
   echo '<option value='.mysql_result($q_select2, $i, 'id_ups').'>'.mysql_result($q_select2, $i, 'n_ups').'</option>';
     ?>
</select>
<font></td>
<td><font size="4">
<select id="sn_ups" name="ups_id_sn">
<?
    if ($q_place_row>0)
   echo '<option value="'.$_SESSION['ups_id_sn'].'" class='.$_SESSION['id_ups'].'>'.mysql_result($q_place, 0, 'sn_ups.n_sn').'</option>';
   for ($i=0; $i<mysql_num_rows($q_select1); $i++)
   echo '<option value="'.mysql_result($q_select1, $i, 'id_sn').'" class='.mysql_result($q_select1, $i, 'id_ups').'>'.mysql_result($q_select1, $i, 'n_sn').'</option>';
  ?>
</select>
</font></td>