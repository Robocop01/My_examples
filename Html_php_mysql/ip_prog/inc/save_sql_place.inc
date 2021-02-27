<?
   mysql_query("UPDATE place SET person_name='".$_POST['person_name']."', p_post='".$_POST['p_post']."',
   p_phone='".$_POST['p_phone']."', id_s_m='".$_POST['id_s_m']."', email='".$_POST['email']."', note='".$_POST['note']."',
   id_building='".$_POST['id_building']."', n_computer='".$_POST['n_computer']."', r_u='".$_POST['r_u']."'
   WHERE id_place='".$_SESSION['id_place']."'");


   if (isset($_POST['monitor1_id_sn']) && $_SESSION['monitor1_id_sn']!=$_POST['monitor1_id_sn']) // обновляем sn_monitor1, если он изменился
   mysql_query("UPDATE sn_monitor SET id_place='".$_SESSION['id_place']."' WHERE id_sn='".$_POST['monitor1_id_sn']."'");

   if (!isset($_POST['monitor1_id_sn']) || $_SESSION['monitor1_id_sn']!=$_POST['monitor1_id_sn'] || $_POST['id_s_m']!=$_SESSION['id_s_m'])
   mysql_query("UPDATE sn_monitor SET id_place=0 WHERE id_sn='".$_SESSION['monitor1_id_sn']."'");


   if (isset($_POST['monitor2_id_sn']) && $_SESSION['monitor2_id_sn']!=$_POST['monitor2_id_sn']) // обновляем sn_monitor2, если он изменился
   mysql_query("UPDATE sn_monitor SET id_place='".$_SESSION['id_place']."' WHERE id_sn='".$_POST['monitor2_id_sn']."'");

   if (!isset($_POST['monitor2_id_sn']) || $_SESSION['monitor2_id_sn']!=$_POST['monitor2_id_sn'] || $_POST['id_s_m']!=$_SESSION['id_s_m'])
   mysql_query("UPDATE sn_monitor SET id_place=0 WHERE id_sn='".$_SESSION['monitor2_id_sn']."'");


      if (isset($_POST['sysunit_id_sn']) && $_SESSION['sysunit_id_sn']!=$_POST['sysunit_id_sn']) // обновляем sn_sysunit, если он изменился
   mysql_query("UPDATE sn_sysunit SET id_place='".$_SESSION['id_place']."' WHERE id_sn='".$_POST['sysunit_id_sn']."'");

   if (!isset($_POST['sysunit_id_sn']) || $_SESSION['sysunit_id_sn']!=$_POST['sysunit_id_sn'] || $_POST['id_s_m']!=$_SESSION['id_s_m'])
   mysql_query("UPDATE sn_sysunit SET id_place=0 WHERE id_sn='".$_SESSION['sysunit_id_sn']."'");


   if (isset($_POST['printer1_id_sn']) && $_SESSION['printer1_id_sn']!=$_POST['printer1_id_sn']) // обновляем sn_printer1, если он изменился
   mysql_query("UPDATE sn_printer SET id_place='".$_SESSION['id_place']."' WHERE id_sn='".$_POST['printer1_id_sn']."'");

   if (!isset($_POST['printer1_id_sn']) || $_SESSION['printer1_id_sn']!=$_POST['printer1_id_sn'] || $_POST['id_s_m']!=$_SESSION['id_s_m'])
   mysql_query("UPDATE sn_printer SET id_place=0 WHERE id_sn='".$_SESSION['printer1_id_sn']."'");


   if (isset($_POST['printer2_id_sn']) && $_SESSION['printer2_id_sn']!=$_POST['printer2_id_sn']) // обновляем sn_printer2, если он изменился
   mysql_query("UPDATE sn_printer SET id_place='".$_SESSION['id_place']."' WHERE id_sn='".$_POST['printer2_id_sn']."'");

   if (!isset($_POST['printer2_id_sn']) || $_SESSION['printer2_id_sn']!=$_POST['printer2_id_sn'] || $_POST['id_s_m']!=$_SESSION['id_s_m'])
   mysql_query("UPDATE sn_printer SET id_place=0 WHERE id_sn='".$_SESSION['printer2_id_sn']."'");


     if (isset($_POST['ups_id_sn']) && $_SESSION['ups_id_sn']!=$_POST['ups_id_sn']) // обновляем sn_ups, если он изменился
   mysql_query("UPDATE sn_ups SET id_place='".$_SESSION['id_place']."' WHERE id_sn='".$_POST['ups_id_sn']."'");

   if (!isset($_POST['ups_id_sn']) || $_SESSION['ups_id_sn']!=$_POST['ups_id_sn'] || $_POST['id_s_m']!=$_SESSION['id_s_m'])
   mysql_query("UPDATE sn_ups SET id_place=0 WHERE id_sn='".$_SESSION['ups_id_sn']."'");


   if (isset($_POST['scaner_id_sn']) && $_SESSION['scaner_id_sn']!=$_POST['scaner_id_sn']) // обновляем sn_scaner, если он изменился
   mysql_query("UPDATE sn_scaner SET id_place='".$_SESSION['id_place']."' WHERE id_sn='".$_POST['scaner_id_sn']."'");

   if (!isset($_POST['scaner_id_sn']) || $_SESSION['scaner_id_sn']!=$_POST['scaner_id_sn'] || $_POST['id_s_m']!=$_SESSION['id_s_m'])
   mysql_query("UPDATE sn_scaner SET id_place=0 WHERE id_sn='".$_SESSION['scaner_id_sn']."'");


      if ($_SESSION['id_ip']!=$_POST['id_ip'])     // IP обновляем, если он изменился
   {
   mysql_query("UPDATE ip_table SET id_place='".$_SESSION['id_place']."' WHERE id_ip='".$_POST['id_ip']."'"); //
   mysql_query("UPDATE ip_table SET id_place=0 WHERE id_ip='".$_SESSION['id_ip']."'");
    }
?>