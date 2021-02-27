<? session_start();
   require ('inc/sql_connect.inc');
       // Изменение данных о рабочем месте
  if (isset($_POST['save']))
   require ('inc/save_sql_place.inc');
                                                //
  if (isset($_POST['new']))
  {
     mysql_query("INSERT place SET person_name='".$_POST['person_name']."', p_post='".$_POST['p_post']."',
   p_phone='".$_POST['p_phone']."', id_s_m='".$_POST['id_s_m']."', id_building='".$_POST['id_building']."',
   email='".$_POST['email']."', note='".$_POST['note']."',
   n_computer='".$_POST['n_computer']."', r_u='".$_POST['r_u']."'");
   $_GET['id_place']=mysql_insert_id();
   }
       // Добавление данных о рабочем месте
   if (!isset($_POST['add_new']))
       {  if (isset($_POST['id_place'])) $_SESSION['id_place']=$_POST['id_place'];
  if (isset($_GET['id_place'])) $_SESSION['id_place']=$_GET['id_place'];

  $q_place=mysql_query("SELECT n_station, p_phone, person_name, place.id_place, place.note,
  p_post, n_management, n_building, n_computer, email, r_u, station.id_station, n_station,
  building.id_building, management.id_management, n_management, address.id_address, n_address,
  manag_state.id_s_m,
  sn_sysunit.id_sn, f_sysunit.id_sysunit, n_sysunit, sn_sysunit.n_sn,
  sn_scaner.id_sn, f_scaner.id_scaner, n_scaner, sn_scaner.n_sn,
  sn_ups.id_sn, f_ups.id_ups, n_ups, sn_ups.n_sn,
  id_ip, n_ip, n_shluz, maska_ip

  FROM station, management, building, address, user_resource, manag_state, place

  LEFT JOIN sn_sysunit ON place.id_place=sn_sysunit.id_place
  LEFT JOIN f_sysunit ON sn_sysunit.id_sysunit=f_sysunit.id_sysunit

  LEFT JOIN sn_scaner ON place.id_place=sn_scaner.id_place
  LEFT JOIN f_scaner ON sn_scaner.id_scaner=f_scaner.id_scaner

  LEFT JOIN sn_ups ON place.id_place=sn_ups.id_place
  LEFT JOIN  f_ups ON sn_ups.id_ups=f_ups.id_ups

  LEFT JOIN ip_table ON place.id_place=ip_table.id_place
  LEFT JOIN  shluz_m ON ip_table.id_shluz_m=shluz_m.id_shluz_m

  WHERE user_resource.id_user='".$_SESSION['id_user']."'
  AND user_resource.id_s_m=manag_state.id_s_m
  AND manag_state.id_s_m=place.id_s_m
  AND manag_state.id_management=management.id_management
  AND place.id_building=building.id_building
  AND building.id_address=address.id_address
  AND place.id_place='".$_SESSION['id_place']."'
  AND manag_state.id_station=station.id_station

  Order By n_management, n_building, p_post LIMIT 1");
  $q_place_row=mysql_num_rows($q_place);

  // Для случая, когда имя компьютера дублируется
  if ($q_place_row==0)
  {$person_name=""; $email=""; $note=""; $p_post=""; $p_phone=""; $n_computer="";
        $_SESSION['sysunit_id_sn']=0; $_SESSION['scaner_id_sn']=0; $_SESSION['ups_id_sn']=0; $_SESSION['id_ip']=0;
        $_POST['add_new']=1;}
else {
$id_management=mysql_result($q_place, 0, 'id_management'); $n_management=mysql_result($q_place, 0, 'n_management');
$id_station=mysql_result($q_place, 0, 'id_station');       $n_station=mysql_result($q_place, 0, 'n_station');
$id_building=mysql_result($q_place, 0, 'id_building');     $n_building=mysql_result($q_place, 0, 'n_building');
$id_address=mysql_result($q_place, 0, 'id_address');       $n_address=mysql_result($q_place, 0, 'n_address');

  $person_name=mysql_result($q_place, 0, 'person_name');
  $email=mysql_result($q_place, 0, 'email');
  $note=mysql_result($q_place, 0, 'note');
  $n_computer=mysql_result($q_place, 0, 'n_computer');
  $p_post=mysql_result($q_place, 0, 'p_post'); $p_phone=mysql_result($q_place, 0, 'p_phone');
  $id_s_m=mysql_result($q_place, 0, 'id_s_m'); $_SESSION['id_s_m']=mysql_result($q_place, 0, 'id_s_m');

  $_SESSION['sysunit_id_sn']=mysql_result($q_place, 0, 'sn_sysunit.id_sn');
  $_SESSION['id_sysunit']=mysql_result($q_place, 0, 'id_sysunit');

  $_SESSION['scaner_id_sn']=mysql_result($q_place, 0, 'sn_scaner.id_sn');
  $_SESSION['id_scaner']=mysql_result($q_place, 0, 'id_scaner');

  $_SESSION['ups_id_sn']=mysql_result($q_place, 0, 'sn_ups.id_sn');
  $_SESSION['id_ups']=mysql_result($q_place, 0, 'id_ups');

  $_SESSION['id_ip']=mysql_result($q_place, 0, 'id_ip');
       } }
      else
      { $person_name=""; $email=""; $note=""; $p_post=""; $p_phone=""; $n_computer="";
        $_SESSION['sysunit_id_sn']=0; $_SESSION['scaner_id_sn']=0; $_SESSION['ups_id_sn']=0; $_SESSION['id_ip']=0;
        }
        // Добавление и/или удаление программ
    if (isset($_POST['prog_add']) && isset($_POST['id_prog']))
  mysql_query("INSERT INTO pl_prog SET id_prog='".$_POST['id_prog']."', id_place='".$_SESSION['id_place']."'");

    if (isset($_POST['prog_del']) && isset($_POST['id_prog']))
  mysql_query("DELETE FROM pl_prog WHERE id_prog='".$_POST['id_prog']."' AND id_place='".$_SESSION['id_place']."'");
?>
<html>
<head>
<title>Учет компьютерного хозяйства</title>

<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />
<link href="style.css"  rel="stylesheet" type="text/css" />

<script type="text/javascript" src="inc/jquery-1.11.0.js"></script> 
<script type="text/javascript" src="inc/jquery.chained.js"></script>

<script type="text/javascript">
$(document).ready(function(){ $("#management").chained("#station"); });
</script>
<script type="text/javascript">
$(document).ready(function(){ $("#building").chained("#address"); });
</script>
<script type="text/javascript">
$(document).ready(function(){ $("#sn_monitor1").chained("#m_monitor1"); });
</script>
<script type="text/javascript">
$(document).ready(function(){ $("#sn_monitor2").chained("#m_monitor2"); });
</script>
<script type="text/javascript">
$(document).ready(function(){ $("#sn_ups").chained("#m_ups"); });
</script>
<script type="text/javascript">
$(document).ready(function(){ $("#sn_sysunit").chained("#m_sysunit"); });
</script>
<script type="text/javascript">
$(document).ready(function(){ $("#sn_printer1").chained("#m_printer1"); });
</script>
<script type="text/javascript">
$(document).ready(function(){ $("#sn_printer2").chained("#m_printer2"); });
</script>
<script type="text/javascript">
$(document).ready(function(){ $("#sn_scaner").chained("#m_scaner"); });
</script>
</head>

<body bgcolor=#c0c0c0>

<table border="1" bordercolor="black" cellspacing="0">

<tr bgcolor="#00FFFF"><td colspan="6" align="center"><font size="6">Информация о рабочем месте пользователя</font></td></tr>
<tr><td colspan="6" align="center">&nbsp</td></tr>

<form action="edit_place.php" method=post>

<tr>
<td align="center" bgcolor="#cccccc"><font size="4">Ф.И.О.</font></td>
<td align="center" bgcolor="#cccccc"><font size="4"><input size=40 maxlength=40 type="text" name="person_name" value='<? echo $person_name; ?>'></font></td>
<td align="center" bgcolor="#cccccc"><font size="4">Email</font></td>
<td align="light" bgcolor="#cccccc"><font size="4"><input size=24 maxlength=24 type="text" name="email" value='<? echo $email; ?>'></font></td>
<td align="center" colspan="3" bgcolor="#cccccc"><font size="4">Прим.<input size=40 maxlength=50 type="text" name="note" value='<? echo $note; ?>'></font></td>
</tr>

<tr>
<td align="center" bgcolor="#cccccc"><font size="4">Имя комп.</font></td>
<td align="light" bgcolor="#cccccc"><font size="4"><input size=20 maxlength=20 type="text" name="n_computer" value='<?
if (isset($_POST['add_new']) && $_POST['add_new']==1) echo 'ДУБЛЬ ИМЯ!!!'; echo $n_computer; ?>'></font></td>
<td align="center"><font size="4">Адрес/Здание</font></td>
<? require ('inc/sel_addr_build.inc'); ?>
<td colspan="20">Доступ:&nbsp
r- <input type="radio" <? if (isset($_POST['add_new']) || mysql_result($q_place, 0, 'r_u')=="r") echo 'checked="checked"'; ?> name="r_u" value="r">
u- <input type="radio" <? if (!isset($_POST['add_new'])) if (mysql_result($q_place, 0, 'r_u')=="u") echo 'checked="checked"'; ?> name="r_u" value="u">
n- <input type="radio" <? if (!isset($_POST['add_new'])) if (mysql_result($q_place, 0, 'r_u')=="n") echo 'checked="checked"'; ?> name="r_u" value="n">
</td>
</tr>

<tr bgcolor="#00FFFF"><td colspan="7" align="center">&nbsp</td></tr>

<tr>
<td align="center"><font size="4">Станция</font></td>
<td align="center"><font size="4">Организация</font></td>
<td align="center"><font size="4">Должность</font></td>
<td align="center"><font size="4">тел.</font></td>
<td align="center"><font size="4">IP-адрес</font></td>
<td align="center"><font size="4">Код расп.</font></td>
</tr>

<tr>
<? require ('inc/sel_manag_st.inc'); ?>
<td><font size="4"><input size=20 maxlength=20 type="text" name="p_post" value='<? echo $p_post; ?>'></font></td>
<td><font size="4"><input size=16 maxlength=16 type="text" name="p_phone" value='<? echo $p_phone; ?>'></font></td>
<td><font size="4"><? require ('inc/sel_ip.inc'); if (isset($ip_all_row)) echo $ip_all_row; ?></font></td>
<td colspan="6" align="center">&nbsp</td>
</tr>

<tr bgcolor="#00FFFF"><td colspan="6" align="center">&nbsp</td></tr>

<tr>
<td colspan="2" align="light" valign="top">
<table border="1" bordercolor="black" cellspacing="0">
<tr><td align="center"><font size="4">Установленные программы<font></td></tr>
<? if (!isset($_POST['add_new']))
 {
   $q6=mysql_query("SELECT * FROM prog, pl_prog WHERE pl_prog.id_place='".$_SESSION['id_place']."' AND pl_prog.id_prog=prog.id_prog
    ORDER BY n_prog");
  for ($i=0; $i<mysql_num_rows($q6); $i++)
  echo '<tr><td><font size="4">'.mysql_result($q6, $i, 'prog.n_prog').'</font></td></tr>';
} ?>
<tr><td><a href="prog_place.php" class="blank"><font size="4">Добавить/Удалить</font></a></td></tr>
</table>
</td>

<? if (!isset($_POST['add_new'])) { ?>
<td colspan="3" align="light" valign="top">
<table border="1" bordercolor="black" cellspacing="0">
<tr><td colspan="3" align="center"><font size="4">Комплект комп. техники</td></tr>
<tr><td colspan="2" align="center"><font size="4">Модель</td><td align="center"><font size="4">S\N</td></tr>
<tr><td align="center"><font size="4">Монитор 1<font></td><? require ('inc/sel_monitor1.inc'); ?></tr>
<tr><td align="center"><font size="4">Монитор 2<font></td><?  require ('inc/sel_monitor2.inc'); ?></tr>
<tr><td align="center"><font size="4">Системный блок<font></td><? require ('inc/sel_sysunit.inc'); ?></tr>
<tr><td align="center"><font size="4">Принтер/МФУ 1<font></td><? require ('inc/sel_printer1.inc'); ?></tr>
<tr><td align="center"><font size="4">Принтер/МФУ 2<font></td><? require ('inc/sel_printer2.inc'); ?></tr>
<tr><td align="center"><font size="4">UPS<font></td><? require ('inc/sel_ups.inc'); ?></tr>
<tr><td align="center"><font size="4">Сканер<font></td><? require ('inc/sel_scaner.inc'); ?></tr>
</table>
</td>
<? }  ?>

<td colspan="1" valign="top" align="light">
<?
  if (!isset($_POST['add_new']) && isset($_SESSION['id_ip']))
{
$vr=explode('/', mysql_result($q_place, 0, 'maska_ip'));
echo '<font size="4">Шлюз: '.mysql_result($q_place, 0, 'n_shluz').'<br>Маска: 255.255.255.'.$vr[0].'<br>Интервал IP: '.$vr[1].'</font>';
} ?>
</td>
</tr>

<tr>
<?
   if (!isset($_POST['add_new']))
 { ?>
<td align="center"><input type="submit" name="save" value="Сохранить"></td>
</form>

<form action="print.php" method=post>
<td align="center"><input type="submit" name="delete" value="Удалить"></td>
</form>
<? } else { ?>
<td align="center"><input type="submit" name="new" value="Сохранить"></td>
</form>
<? } ?>

<form action="print.php" method=post>
<td align="center"><input type="submit" name="exit" value="Назад"></td>
<td colspan="6" align="center">&nbsp</td>
</form>
</tr>
</table>

</body>
</html>