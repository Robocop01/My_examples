<? session_start();
   require ('inc/sql_connect.inc');
   if (isset($_POST['exit'])) $_SESSION['id_station']=$_POST['id_station'];
   $q_station=mysql_query("SELECT n_station FROM station WHERE id_station='".$_POST['id_station']."' LIMIT 1");
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

<script src="inc/menu.js"></script>
</head>

<body topmargin="0" leftmargin="0" bgcolor=dce6e6>
<span ID="slide">
 <table cellspacing="0" cellpadding="0" border="0">

  <tr align="left" valign="middle" height="20">

<form action="1_3.php" method=post>
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
<? ob_start ();
   require ('inc/sql_ferum.inc');
   $row=mysql_num_rows($q1);

  $u=0;
  for ($i=0; $i<$row; $i++)
if ($i==0 || mysql_result($q1, $i-1, 'id_management')!=mysql_result($q1, $i, 'id_management')) $bu[++$u]=$i;
$bu[++$u]=$row;

  for ($i=1; $i<$u; $i++) $bu[$i]=$bu[$i+1]-$bu[$i];
  $u=0;
 echo '&nbsp';
 ?>

<table border="1" bordercolor="black" cellspacing="0">
<tr><th colspan="16">Станция - <? echo mysql_result($q_station, 0, 'n_station') ?></th></tr>
<tr>
<td align="center">№</td>
<td align="center">орг.</td>
<?
switch ($_POST['id_type']) {
    case 0:
        echo '<td align="center">Монитор</td>';
        echo '<td align="center">S/N</td>';
        echo '<td align="center">Сис. блок</td>';
        echo '<td align="center">S/N</td>';
        echo '<td align="center">UPS</td>';
        echo '<td align="center">S/N</td>';
        echo '<td align="center">Принтер</td>';
        echo '<td align="center">S/N</td>';
        echo '<td align="center">Сканер</td>';
        echo '<td align="center">S/N</td>';
        break;
    case 1:
        echo '<td align="center">Монитор</td>';
        break;
    case 2:
        echo '<td align="center">Сис. блок</td>';
        break;
    case 3:
        echo '<td align="center">Принтер</td>';
        break;
    case 4:
        echo '<td align="center">UPS</td>';
        break;
    case 5:
        echo '<td align="center">Сканер</td>';
        break;
        }
?>
<td align="center">здание</td>
<td align="center">должность</td>
<td align="center">Ф.И.О.</td>
<td align="center">тел.</td>
</tr>
<?
  for ($i=0; $i<$row; $i++)
{
echo '<tr>';
echo '<td align="left">'.($i+1).'<br></td>';

  if ($i==0 || mysql_result($q1, $i-1, 'id_management')!=mysql_result($q1, $i, 'id_management'))
        echo '<td rowspan='.$bu[++$u].' align="center">'.mysql_result($q1, $i, 'n_management').'<br></td>';

switch ($_POST['id_type']) {
    case 0:
        echo '<td align="center">'.mysql_result($q1, $i, 'n_monitor').'<br>'.mysql_result($q1, $i, 'n_monitor2').'</td>
              <td align="center">'.mysql_result($q1, $i, 'sn_monitor').'<br>'.mysql_result($q1, $i, 'sn_monitor2').'</td>';
        echo '<td align="center">'.mysql_result($q1, $i, 'n_sysunit').'<br></td><td align="center">'.mysql_result($q1, $i, 'sn_sysunit.n_sn').'<br></td>';
        echo '<td align="center">'.mysql_result($q1, $i, 'n_ups').'<br></td><td align="center">'.mysql_result($q1, $i, 'sn_ups.n_sn').'<br></td>';
        echo '<td align="center">'.mysql_result($q1, $i, 'n_printer').'<br>'.mysql_result($q1, $i, 'n_printer2').'</td>
              <td align="center">'.mysql_result($q1, $i, 'sn_printer').'<br>'.mysql_result($q1, $i, 'sn_printer2').'</td>';
        echo '<td align="center">'.mysql_result($q1, $i, 'n_scaner').'<br></td><td align="center">'.mysql_result($q1, $i, 'sn_scaner.n_sn').'<br></td>';
        break;
    case 1:
        echo '<td align="center">'.mysql_result($q1, $i, 'n_monitor').'<br>'.mysql_result($q1, $i, 'n_monitor2').'</td>';
        break;
    case 2:
        echo '<td align="center">'.mysql_result($q1, $i, 'n_sysunit').'<br></td>';
        break;
    case 3:
        echo '<td align="center">'.mysql_result($q1, $i, 'n_printer').'<br>'.mysql_result($q1, $i, 'n_printer2').'</td>';
        break;
    case 4:
        echo '<td align="center">'.mysql_result($q1, $i, 'n_ups').'<br></td>';
        break;
    case 5:
        echo '<td align="center">'.mysql_result($q1, $i, 'n_scaner').'<br></td>';
        break;
        }

echo '<td align="center">'.mysql_result($q1, $i, 'n_building').'<br></td>';
echo '<td align="left">'.mysql_result($q1, $i, 'p_post').'<br></td>';
echo '<td align="left">'.mysql_result($q1, $i, 'person_name').'<br></td>';
echo '<td align="left">'.mysql_result($q1, $i, 'p_phone').'<br></td>';
echo '</tr>';
}
echo '</table>';

$_SESSION['buffer']=ob_get_contents();
?>
</body>
</html>