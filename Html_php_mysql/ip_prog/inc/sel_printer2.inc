<?                                                       // изменение модели и/или серийника сканера, для других заменить слово printer2 на др.
    $q_select1=mysql_query("SELECT * FROM sn_printer, f_printer
    WHERE sn_printer.id_printer=f_printer.id_printer
    AND id_place=0
    AND id_s_m='".$_SESSION['id_s_m']."'
    ORDER BY n_sn");

    $q_select2=mysql_query("SELECT * FROM f_printer, sn_printer
    WHERE sn_printer.id_printer!='".$_SESSION['id_printer2']."'
    AND id_s_m='".$_SESSION['id_s_m']."'
    AND sn_printer.id_printer=f_printer.id_printer AND id_place=0
    GROUP BY sn_printer.id_printer ORDER BY n_printer");
?>

<td align="left"><font size="4">
<select id="m_printer2" name="id_printer2">
<?
   if ($printer_row>1)
      echo '<option value='.$_SESSION['id_printer2'].'>'.mysql_result($q_printer, 1, 'n_printer').'</option>';
      echo '<option value="">-</option>';
     for ($i=0; $i<mysql_num_rows($q_select2); $i++)
   echo '<option value='.mysql_result($q_select2, $i, 'id_printer').'>'.mysql_result($q_select2, $i, 'n_printer').'</option>';
     ?>
</select>
<font></td>
<td><font size="4">
<select id="sn_printer2" name="printer2_id_sn">
<?
    if ($printer_row>1)
   echo '<option value="'.$_SESSION['printer2_id_sn'].'" class='.$_SESSION['id_printer2'].'>'.mysql_result($q_printer, 1, 'n_sn').'</option>';
   for ($i=0; $i<mysql_num_rows($q_select1); $i++)
   echo '<option value='.mysql_result($q_select1, $i, 'id_sn').' class='.mysql_result($q_select1, $i, 'id_printer').'>'.mysql_result($q_select1, $i, 'n_sn').'</option>';
  ?>
</select>
</font></td>