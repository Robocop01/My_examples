<? session_start();
   require ('inc/sql_connect.inc');

   if (isset($_POST['save']))
   mysql_query("UPDATE shluz_m SET n_shluz='".$_POST['n_shluz']."',
   maska_ip='".$_POST['maska_ip']."', note='".$_POST['note']."'
   WHERE id_shluz_m='".$_SESSION['id_shluz_m']."'");

   if (!isset($_POST['add_new']))
 {
 if (isset($_GET['id_shluz_m'])) $_SESSION['id_shluz_m']=$_GET['id_shluz_m'];

   $q1=mysql_query("SELECT * FROM shluz_m, station
   WHERE shluz_m.id_station=station.id_station and id_shluz_m='".$_SESSION['id_shluz_m']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_shluz_m']=mysql_result($q1, 0, 'id_shluz_m');
    $n_shluz=mysql_result($q1, 0, 'n_shluz'); $maska_ip=mysql_result($q1, 0, 'maska_ip');
    $n_station=mysql_result($q1, 0, 'n_station'); $id_station=mysql_result($q1, 0, 'station.id_station');
    $note=mysql_result($q1, 0, 'note');
    } else { $n_shluz=""; $maska_ip=""; $note=""; }
    ?>
<html>
<head>
<title>Учет компьютерного хозяйства</title>
<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />
<link href="style.css"  rel="stylesheet" type="text/css" />

<script type="text/javascript" src="inc/jquery-1.9.1.js"></script>
<script type="text/javascript" src="inc/chained.js"></script>
<script type="text/javascript">
$(document).ready(function(){ $("#management").chained("#station"); });
</script>
</head>

<body bgcolor=#c0c0c0>
<table border="3">
<tr bgcolor="#00FFFF">
<td colspan="5" align="center"><font size="5">Шлюз, маска/IP</font></td></tr>
<tr>
<td align="center"><font size="4">Шлюз</font></td>
<td align="center"><font size="4">Маска и IP</font></td>
<td align="center"><font size="4">Станция</font></td>
<td align="center"><font size="4">Орг. по умолч.</font></td>
<td align="center"><font size="4">Доп. информация</font></td>
</tr>
<?
   if (!isset($_POST['add_new']))
 { ?> <form action="edit_shluz_m.php" method=post> <? }
else
 { ?> <form action="2_1.php" method=post> <? }
?>
<tr>
<? if ($_SESSION['admin']==0)
{?>
<td align="left">
<font size="4"><input size=15 maxlength=15 type="text" name="n_shluz" value='<? echo $n_shluz; ?>'></font>
</td>
<td align="left">
<font size="4"><input size=11 maxlength=11 type="text" name="maska_ip" value='<? echo $maska_ip; ?>'></font>
</td>
<?
}
else
{?>
<td align="left"><? echo $n_shluz; ?></td>
<td align="left"><? echo $maska_ip; ?></td>
<?}
  if (isset($_POST['add_new'])) require ('inc/sel_manag_st.inc');
  else
  {
echo '<td align="left">';
echo '<font size="4">'.$n_station.'</font>';
echo '</td>';
echo '<td align="left">';
echo '<font size="4"></font>';
echo '</td>';
  }
?>
<td align="left">
<font size="4"><input size=36 maxlength=36 type="text" name="note" value='<? echo $note; ?>'></font>
</td>
</td>
<?
   if (!isset($_POST['add_new']))
 { ?>
<tr>
<td align="center"><input type="submit" name="save" value="Сохранить"></td>
</form>

<form action="2_1.php" method=post>
<td align="center"><input type="submit" name="delete" value="Удалить"></td>
</form> <? }
else
{ ?>
<tr>
<td align="center"><input type="submit" name="new" value="Сохранить"></td>
</form> <? }
?>

<form action="2_1.php" method=post>
<td align="center"><input type="submit" name="concel" value="Назад"></td>
</form>
</tr>

</table>
</body>
</html>