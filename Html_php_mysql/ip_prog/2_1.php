<? session_start();
   require ('inc/sql_connect.inc');

if (isset($_POST['new']))
   {
   mysql_query("INSERT INTO shluz_m SET n_shluz='".$_POST['n_shluz']."',
   maska_ip='".$_POST['maska_ip']."', id_station='".$_POST['id_station']."', note='".$_POST['note']."'");

              // записываем для ip_table из maska_ip (130/20-50)
       $vr=explode('/', $_POST['maska_ip']);
       $ip1_ip2=explode("-", $vr[1]); $vr=explode('.', $_POST['n_shluz']);
       $id_shluz_m=mysql_insert_id();

     for ($i=$ip1_ip2[0]; $i<=$ip1_ip2[1]; $i++)
     mysql_query("INSERT INTO ip_table SET n_ip='".$vr[0]. '.' . $vr[1]. '.' . $vr[2]. '.' . $i."',
     id_shluz_m='".$id_shluz_m."', id_management=(SELECT id_management FROM manag_state WHERE id_s_m='".$_POST['id_s_m']."')");
   }

 if (isset($_POST['delete']))
   {
   mysql_query("DELETE FROM shluz_m WHERE id_shluz_m='".$_SESSION['id_shluz_m']."'");
   mysql_query("DELETE FROM ip_table WHERE id_shluz_m='".$_SESSION['id_shluz_m']."'");
   }
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
 <table border="0" cellspacing="0" cellpadding="0" border="0">

  <tr align="left" valign="middle" height="20">

<form action="index.php" method=post>
  <td width="107"><input type="submit" name="a" value="Назад"></td>
</form>

<form action="edit_shluz_m.php" method=post>

<td width="107">
<input type="submit" name="add_new" value="Добавить"></td>

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
  $q1=mysql_query("SELECT * FROM user_resource, manag_state, shluz_m, ip_table, station
  WHERE id_user='".$_SESSION['id_user']."'
  AND user_resource.id_s_m=manag_state.id_s_m
  AND manag_state.id_station=shluz_m.id_station
  AND shluz_m.id_station=station.id_station
  AND shluz_m.id_shluz_m=ip_table.id_shluz_m
  AND manag_state.id_management=ip_table.id_management
  Group By shluz_m.id_shluz_m Order By n_station, n_shluz");
  $row=mysql_num_rows($q1);

  echo '&nbsp';
  $u=0;
  for ($i=0; $i<$row; $i++)
if ($i==0 || mysql_result($q1, $i-1, 'station.id_station')!=mysql_result($q1, $i, 'station.id_station')) $bu[++$u]=$i;
$bu[++$u]=$row;

 for ($i=1; $i<$u; $i++) $bu[$i]=$bu[$i+1]-$bu[$i];
  $u=0;

  ob_start ();
?>
<table border="1" bordercolor="black" cellspacing="0">
<tr><th colspan="6"><font size="4">Список сетей</font></th></tr>
<tr>
<td align="center"><font size="4">№</font></td>
<td align="center"><font size="4">Станция</font></td>
<td align="center"><font size="4">Шлюз</font></td>
<td align="center"><font size="4">Маска и IP</font></td>
<td align="center"><font size="4">Принадлежность</font></td>
<td align="center"><font size="4">IP по организациям</font></td>
</tr>

<?
  for ($i=0; $i<$row; $i++)
{
echo '<tr>';
echo '<td align="left"><font size="4">'.($i+1).'</font></td>';

if ($i==0 || mysql_result($q1, $i-1, 'station.id_station')!=mysql_result($q1, $i, 'station.id_station'))
echo '<td rowspan='.$bu[++$u].' align="center"><font size="4">'.mysql_result($q1, $i, 'n_station').'</font></td>';

echo '<td align="left"><a href="edit_shluz_m.php?id_shluz_m='.mysql_result($q1, $i, 'id_shluz_m').'">
<font size="4">'.mysql_result($q1, $i, 'n_shluz').'</font></a></td>';

echo '<td align="left"><font size="4">'.mysql_result($q1, $i, 'maska_ip').'</font></td>';
echo '<td align="left"><font size="4">'.mysql_result($q1, $i, 'note').'</font></td>';

echo '<td align="left"><a href="ip_table.php?id_shluz_m='.mysql_result($q1, $i, 'id_shluz_m').'">
<font size="4">посмотреть</font></a></td>';
echo '</tr>';
}
echo '</table>';
$_SESSION['buffer']=ob_get_contents();
?>
</body>
</html>