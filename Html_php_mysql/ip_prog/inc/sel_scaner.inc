<?                                 // изменение модели и/или серийника сканера, для других заменить слово scaner на др.
    $q_select1=mysql_query("SELECT * FROM sn_scaner, f_scaner
    WHERE sn_scaner.id_scaner=f_scaner.id_scaner
    AND id_place=0
    AND id_s_m='".$_SESSION['id_s_m']."'
    ORDER BY n_sn");

    $q_select2=mysql_query("SELECT * FROM f_scaner, sn_scaner
    WHERE id_s_m='".$_SESSION['id_s_m']."'
    AND sn_scaner.id_scaner=f_scaner.id_scaner AND id_place=0
    GROUP BY sn_scaner.id_scaner ORDER BY n_scaner");
?>

<td align="left"><font size="4">
<select id="m_scaner" name="id_scaner">
<?
   if ($q_place_row>0 && isset($_SESSION['id_scaner']))
      echo '<option value='.$_SESSION['id_scaner'].'>'.mysql_result($q_place, 0, 'n_scaner').'</option>';
      echo '<option value="">-</option>';
     for ($i=0; $i<mysql_num_rows($q_select2); $i++)
     if (mysql_result($q_select2, $i, 'id_scaner')!=$_SESSION['id_scaner'])
   echo '<option value='.mysql_result($q_select2, $i, 'id_scaner').'>'.mysql_result($q_select2, $i, 'n_scaner').'</option>';
     ?>
</select>
<font></td>
<td><font size="4">
<select id="sn_scaner" name="scaner_id_sn">
<?
    if ($q_place_row>0)
  echo '<option value="'.$_SESSION['scaner_id_sn'].'" class='.$_SESSION['id_scaner'].'>'.mysql_result($q_place, 0, 'sn_scaner.n_sn').'</option>';
   for ($i=0; $i<mysql_num_rows($q_select1); $i++)
echo '<option value="'.mysql_result($q_select1, $i, 'id_sn').'" class='.mysql_result($q_select1, $i, 'id_scaner').'>'.mysql_result($q_select1, $i, 'n_sn').'</option>';
  ?>
</select>
</font></td>