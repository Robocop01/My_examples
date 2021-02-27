<?
 $q_printer=mysql_query("SELECT * FROM f_printer,sn_printer
   WHERE f_printer.id_printer=sn_printer.id_printer AND sn_printer.id_place='".$_SESSION['id_place']."' LIMIT 2");
   $printer_row=mysql_num_rows($q_printer);

           $_SESSION['id_printer1']=0; $_SESSION['printer1_id_sn']=0; $_SESSION['printer1_id_s_m']=0;
           $_SESSION['id_printer2']=0; $_SESSION['printer2_id_sn']=0; $_SESSION['printer2_id_s_m']=0;
         if ($printer_row>0)               // выборка в зависимости от количества принтеров
         {  $_SESSION['id_printer1']=mysql_result($q_printer, 0, 'sn_printer.id_printer');
            $_SESSION['printer1_id_sn']=mysql_result($q_printer, 0, 'id_sn');
            $_SESSION['printer1_id_s_m']=mysql_result($q_printer, 0, 'id_s_m');}
         if ($printer_row>1)
         {  $_SESSION['id_printer2']=mysql_result($q_printer, 1, 'sn_printer.id_printer');
            $_SESSION['printer2_id_sn']=mysql_result($q_printer, 1, 'id_sn');
            $_SESSION['printer2_id_s_m']=mysql_result($q_printer, 1, 'id_s_m');}

                                 // изменение модели и/или серийника сканера, для других заменить слово printer1 на др.
    $q_select1=mysql_query("SELECT * FROM sn_printer, f_printer
    WHERE sn_printer.id_printer=f_printer.id_printer
    AND id_place=0
    AND id_s_m='".$_SESSION['id_s_m']."'
    ORDER BY n_sn");

    $q_select2=mysql_query("SELECT * FROM f_printer, sn_printer
    WHERE sn_printer.id_printer!='".$_SESSION['id_printer1']."'
    AND id_s_m='".$_SESSION['id_s_m']."'
    AND sn_printer.id_printer=f_printer.id_printer AND id_place=0
    GROUP BY sn_printer.id_printer ORDER BY n_printer");
?>

<td><font size="4">
<select id="m_printer1" name="id_printer1">
<?
          if ($printer_row>0)
      echo '<option value='.$_SESSION['id_printer1'].'>'.mysql_result($q_printer, 0, 'n_printer').'</option>';
      echo '<option value="">-</option>';
     for ($i=0; $i<mysql_num_rows($q_select2); $i++)
   echo '<option value='.mysql_result($q_select2, $i, 'id_printer').'>'.mysql_result($q_select2, $i, 'n_printer').'</option>';
     ?>
</select>
<font></td>
<td><font size="4">
<select id="sn_printer1" name="printer1_id_sn">
<?
    if ($printer_row>0)
  echo '<option value="'.$_SESSION['printer1_id_sn'].'" class='.$_SESSION['id_printer1'].'>'.mysql_result($q_printer, 0, 'n_sn').'</option>';
   for ($i=0; $i<mysql_num_rows($q_select1); $i++)
echo '<option value="'.mysql_result($q_select1, $i, 'id_sn').'" class='.mysql_result($q_select1, $i, 'id_printer').'>'.mysql_result($q_select1, $i, 'n_sn').'</option>';
  ?>
</select>
<font></td>
