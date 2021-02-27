<? session_start();
   require ('inc/sql_connect.inc');

if (isset($_POST['new']))
   {
   mysql_query("INSERT INTO  place SET person_name='".$_POST['person_name']."', p_post='".$_POST['p_post']."',
   p_phone='".$_POST['p_phone']."', id_management='".$_POST['id_management']."',
   id_station='".$_POST['id_station']."', id_address='".$_POST['id_address']."',
   id_building='".$_POST['id_building']."', n_computer='".$_POST['n_computer']."', r_u='".$_POST['r_u']."'  ");

   mysql_query("UPDATE ip_table SET id_place='".mysql_insert_id()."' WHERE id_ip='".$_POST['id_ip']."'");
    }

 if (isset($_POST['delete']))
   {                               $_POST['id_station']=$_SESSION['id_station'];
   mysql_query("DELETE FROM place WHERE id_place='".$_SESSION['id_place']."'");
   mysql_query("UPDATE ip_table SET id_place=0 WHERE id_ip='".$_SESSION['id_ip']."'");
   }
 if (isset($_POST['exit'])) $_POST['id_station']=$_SESSION['id_station'];
?>
<html>
<head>
<body bgcolor=#c0c0c0>

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

<form action="1_4.php" method=post>
  <td width="107"><input type="submit" name="a" value="Назад"></td>
</form>

<form action="edit_place.php" method=post>

  <td width="440"></td>
<td width="107">
</form>

<form action="print_pr.php" method=post>
<input type="submit" name="add_new" value="Распечатать"></td>
</form>

 </tr>
</table>
</span>
</form>
<?
  $q1=mysql_query("SELECT n_station, ip_table.n_ip, p_phone, person_name, place.id_place,
  p_post, n_management, n_building, r_u, station.id_station,
  building.id_building, management.id_management
  FROM place, station, ip_table, management, building, pl_prog
  WHERE station.id_station=place.id_station
  and ip_table.id_place=place.id_place
  and management.id_management=place.id_management
  and building.id_building=place.id_building
  and id_prog='".$_GET['id_prog']."' and pl_prog.id_place=place.id_place
  Order By n_station, n_building, n_management, p_post, ip_table.n_ip");

   $row=mysql_num_rows($q1);

    $s=0; $u=0; $a=0;
  for ($i=0; $i<$row; $i++)
  {
if ($i==0 || mysql_result($q1, $i-1, 'station.id_station')!=mysql_result($q1, $i, 'station.id_station')) $st[++$s]=$i;
if ($i==0 || mysql_result($q1, $i-1, 'building.id_building')!=mysql_result($q1, $i, 'building.id_building')) $bu[++$u]=$i;
if ($i==0 || mysql_result($q1, $i-1, 'management.id_management')!=mysql_result($q1, $i, 'management.id_management')) $ma[++$a]=$i;
}
$st[++$s]=$row; $bu[++$u]=$row; $ma[++$a]=$row;

 for ($i=1; $i<$s; $i++) $st[$i]=$st[$i+1]-$st[$i];
 for ($i=1; $i<$u; $i++) $bu[$i]=$bu[$i+1]-$bu[$i];
 for ($i=1; $i<$a; $i++) $ma[$i]=$ma[$i+1]-$ma[$i];

  $s=0; $u=0; $a=0;
 ?>
<p>&nbsp

<? ob_start (); ?>
<table border="2"  cellspacing="1">
<tr>
<td colspan="10" align="center"><p><font size="4">Программа -
<?
if ($row>0)
{  $q2=mysql_query("SELECT * FROM prog WHERE id_prog='".$_GET['id_prog']."' ");
 echo mysql_result($q2, 0, 'n_prog'), "&nbsp&nbsp&nbsp&nbsp&nbsp", mysql_result($q2, 0, 't_prog');   }
 ?>
</font></p></td>
</tr>

<tr>
<td align="center"><p><font size="4">№</font></p></td>
<td align="center"><p><font size="4">Станция</font></p></td>
<td align="center"><p><font size="4">здание</font></p></td>
<td align="center"><p><font size="4">орг.</font></p></td>
<td align="center"><p><font size="4">IP</font></p></td>
<td align="center"><p><font size="4">C</font></p></td>
<td align="center"><p><font size="4">должность</font></p></td>
<td align="center"><p><font size="4">Ф.И.О.</font></p></td>
<td align="center"><p><font size="4">тел.</font></p></td>
</tr>

<?
  for ($i=0; $i<$row; $i++)
{
echo '<tr>';
echo '<td align="left"><p><font size="4">'.($i+1).'</font></p></td>';

if ($i==0 || mysql_result($q1, $i-1, 'station.id_station')!=mysql_result($q1, $i, 'station.id_station'))
echo '<td rowspan='.$st[++$s].' align="center"><p><font size="4">'.mysql_result($q1, $i, 'n_station').'</font></p></td>';

if ($i==0 || mysql_result($q1, $i-1, 'building.id_building')!=mysql_result($q1, $i, 'building.id_building'))
echo '<td rowspan='.$bu[++$u].' align="center"><p><font size="4">'.mysql_result($q1, $i, 'n_building').'</font></p></td>';

if ($i==0 || mysql_result($q1, $i-1, 'management.id_management')!=mysql_result($q1, $i, 'management.id_management'))
echo '<td rowspan='.$ma[++$a].' align="center"><p><font size="4">'.mysql_result($q1, $i, 'n_management').'</font></p></td>';

echo '<td align="left"><p><a href="edit_place.php?id_place='.mysql_result($q1, $i, 'place.id_place').'">
<font size="4">'.mysql_result($q1, $i, 'ip_table.n_ip').'</font></p></a></td>';

echo '<td align="left"><p><font size="4">'.mysql_result($q1, $i, 'r_u').'</font></p></td>';
echo '<td align="left"><p><font size="4">'.mysql_result($q1, $i, 'p_post').'</font></p></td>';
echo '<td align="left"><p><font size="4">'.mysql_result($q1, $i, 'person_name').'</font></p></td>';
echo '<td align="left"><p><font size="4">'.mysql_result($q1, $i, 'p_phone').'</font></p></td>';
echo '</tr>';
}
echo '</table>';

$_SESSION['buffer']=ob_get_contents();
?>
</body>
</head>
</html>