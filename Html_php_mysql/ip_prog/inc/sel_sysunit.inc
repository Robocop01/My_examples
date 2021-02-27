<?                                 // изменение модели и/или серийника сканера, для других заменить слово sysunit на др.
    $q_select1=mysql_query("SELECT * FROM sn_sysunit, f_sysunit
    WHERE sn_sysunit.id_sysunit=f_sysunit.id_sysunit
    AND id_place=0
    AND id_s_m='".$_SESSION['id_s_m']."'
    ORDER BY n_sn");

    $q_select2=mysql_query("SELECT * FROM f_sysunit, sn_sysunit
    WHERE id_s_m='".$_SESSION['id_s_m']."'
    AND sn_sysunit.id_sysunit=f_sysunit.id_sysunit AND id_place=0
    GROUP BY sn_sysunit.id_sysunit ORDER BY n_sysunit");
?>

<td align="left"><font size="4">
<select id="m_sysunit" name="id_sysunit">
<?
   if ($q_place_row>0 && isset($_SESSION['id_sysunit']))
      echo '<option value='.$_SESSION['id_sysunit'].'>'.mysql_result($q_place, 0, 'n_sysunit').'</option>';
      echo '<option value="">-</option>';
     for ($i=0; $i<mysql_num_rows($q_select2); $i++)
     if (mysql_result($q_select2, $i, 'id_sysunit')!=$_SESSION['id_sysunit'])
   echo '<option value='.mysql_result($q_select2, $i, 'id_sysunit').'>'.mysql_result($q_select2, $i, 'n_sysunit').'</option>';
     ?>
</select>
<font></td>
<td><font size="4">
<select id="sn_sysunit" name="sysunit_id_sn">
<?
    if ($q_place_row>0)
  echo '<option value="'.$_SESSION['sysunit_id_sn'].'" class='.$_SESSION['id_sysunit'].'>'.mysql_result($q_place, 0, 'sn_sysunit.n_sn').'</option>';
   for ($i=0; $i<mysql_num_rows($q_select1); $i++)
echo '<option value="'.mysql_result($q_select1, $i, 'id_sn').'" class='.mysql_result($q_select1, $i, 'id_sysunit').'>'.mysql_result($q_select1, $i, 'n_sn').'</option>';
  ?>
</select>
</font></td>