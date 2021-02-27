<? session_start();
   require ('inc/sql_connect.inc');

 if (isset($_POST['delete']))
 {
   $_POST['id_station']=$_SESSION['id_station'];
   mysql_query("DELETE FROM place WHERE id_place='".$_SESSION['id_place']."'");
   mysql_query("DELETE FROM pl_prog WHERE id_place='".$_SESSION['id_place']."'");
   if (isset($_SESSION['id_ip']))
   mysql_query("UPDATE ip_table SET id_place=0 WHERE id_ip='".$_SESSION['id_ip']."'");
   mysql_query("UPDATE sn_monitor SET id_place=0 WHERE id_sn='".$_SESSION['monitor_id_sn']."'");
   mysql_query("UPDATE sn_sysunit SET id_place=0 WHERE id_sn='".$_SESSION['sysunit_id_sn']."'");
   mysql_query("UPDATE sn_ups SET id_place=0 WHERE id_sn='".$_SESSION['ups_id_sn']."'");
   mysql_query("UPDATE sn_scaner SET id_place=0 WHERE id_sn='".$_SESSION['scaner_id_sn']."'");
   mysql_query("UPDATE sn_printer SET id_place=0 WHERE id_sn='".$_SESSION['printer1_id_sn']."' OR id_sn='".$_SESSION['printer2_id_sn']."'");
  }
 if (isset($_POST['exit'])) $_POST['id_station']=$_SESSION['id_station'];


  $q1=mysql_query("SELECT n_station, ip_table.n_ip, p_phone, person_name, place.id_place,
  p_post, n_management, n_building, n_computer, email, r_u, station.id_station,
  building.id_building, management.id_management
  FROM station, management, building, user_resource, manag_state,
  place LEFT JOIN ip_table ON place.id_place=ip_table.id_place

  WHERE user_resource.id_user='".$_SESSION['id_user']."'
  AND user_resource.id_s_m=manag_state.id_s_m
  AND manag_state.id_s_m=place.id_s_m
  AND manag_state.id_management=management.id_management
  AND place.id_building=building.id_building
  AND manag_state.id_station=station.id_station
  AND manag_state.id_station='".$_POST['id_station']."'
  Order By n_management, n_building, p_post, ip_table.n_ip");

   $row=mysql_num_rows($q1);
   if ($row>0)
   {$_SESSION['id_station']=mysql_result($q1, 0, 'id_station');  $_SESSION['n_station']=mysql_result($q1, 0, 'n_station'); }
    else
     { $_SESSION['id_station']=$_POST['id_station'];
      $q1=mysql_query("SELECT * FROM station WHERE id_station='".$_SESSION['id_station']."'");
       $_SESSION['n_station']=mysql_result($q1, 0, 'n_station');}

   $a=0; $u=0;
  for ($i=0; $i<$row; $i++)
  {
if ($i==0 || mysql_result($q1, $i-1, 'management.id_management')!=mysql_result($q1, $i, 'management.id_management')) $ma[++$a]=$i;
if ($i==0 || mysql_result($q1, $i-1, 'building.id_building')!=mysql_result($q1, $i, 'building.id_building')) $bu[++$u]=$i;
}
$bu[++$u]=$row; $ma[++$a]=$row;

 for ($i=1; $i<$a; $i++) $ma[$i]=$ma[$i+1]-$ma[$i];
 for ($i=1; $i<$u; $i++) $bu[$i]=$bu[$i+1]-$bu[$i];
  $a=0; $u=0;
?>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />
<link href="style.css"  rel="stylesheet" type="text/css" />
<STYLE type=text/css>
#slide {
Position: Absolute;
Left: 0; Top: 0;
Visibility: Visible;
}
</STYLE>
<script src="/inc/menu.js"></script>
</head>

<body topmargin="0" leftmargin="0" bgcolor=dce6e6>
<span ID="slide">

<table border="0" cellspacing="0" cellpadding="0" border="0">

  <tr align="left" valign="middle" height="20">

<form action="1_2.php" method=post>
  <td width="107"><input type="submit" name="a" value="Назад"></td>
</form>

<form action="edit_place.php" method=post>

<td width="107">
<input type="submit" name="add_new" value="Добавить"></td>

  <td width="440"></td>
</form>

<td width="107">
<form action="print_pr.php" method=post>
<input type="submit" name="add_new" value="Распечатать"></td>
</form>

 </tr>
</table>
</span>
</form>
<?
echo '&nbsp';
 ob_start (); ?>
<table border="1" bordercolor="black" cellspacing="0">
<tr>
<td colspan="10" align="center">Станция - <? echo $_SESSION['n_station'] ?></td>
</tr>

<tr>
<td align="center">№</td>
<td align="center">орг.</td>
<td align="center">здание</td>
<td align="center">IP</td>
<td align="center">C</td>
<td align="center">должность</td>
<td align="center">Ф.И.О.</td>
<td align="center">тел.</td>
<td align="center">Имя комп.</td>
<td align="center">Email</td>
</tr>
<?
  for ($i=0; $i<$row; $i++)
{
echo '<tr>';
echo '<td align="left">'.($i+1).'</td>';

if ($i==0 || mysql_result($q1, $i-1, 'management.id_management')!=mysql_result($q1, $i, 'management.id_management'))
echo '<td rowspan='.$ma[++$a].' align="center">'.mysql_result($q1, $i, 'n_management').'</td>';

if ($i==0 || mysql_result($q1, $i-1, 'building.id_building')!=mysql_result($q1, $i, 'building.id_building'))
echo '<td rowspan='.$bu[++$u].' align="center">'.mysql_result($q1, $i, 'n_building').'</td>';

echo '<td align="left"><a href="edit_place.php?id_place='.mysql_result($q1, $i, 'place.id_place').'">';
 if ( mysql_result($q1, $i, 'ip_table.n_ip')==NULL )
   echo '0.0.0.0'; else echo mysql_result($q1, $i, 'ip_table.n_ip');
echo '</a></td>';

echo '<td align="left"><a href="ping.php?n_ping='.mysql_result($q1, $i, 'n_ip').'" target="_blank">
'.mysql_result($q1, $i, 'r_u').'</a></td>';

echo '<td align="left">'.mysql_result($q1, $i, 'p_post').'</td>';
echo '<td align="left">'.mysql_result($q1, $i, 'person_name').'</td>';
echo '<td align="left">'.mysql_result($q1, $i, 'p_phone').'</td>';
echo '<td align="left">'.mysql_result($q1, $i, 'n_computer').'</td>';
echo '<td align="left">'.mysql_result($q1, $i, 'email').'</td>';
echo '</tr>';
}
echo '</table>';
$_SESSION['buffer']=ob_get_contents(); ?>
</body>
</html>