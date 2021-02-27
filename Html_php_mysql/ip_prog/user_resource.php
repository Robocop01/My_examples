<? session_start();
   require ('inc/sql_connect.inc');

if (isset($_POST['new']) && isset($_POST['id_s_m']))
   mysql_query("INSERT INTO user_resource SET id_user='".$_SESSION['id_user_r']."', id_s_m='".$_POST['id_s_m']."'");

 if (isset($_GET['id_s_m']))
   mysql_query("DELETE FROM user_resource WHERE id_s_m='".$_GET['id_s_m']."'");
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

<form action="2_001.php" method=post>
  <td width="107"><input type="submit" name="a" value="Назад"></td>
</form>

<form action="edit_st_manag.php" method=post>

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
<?     if (isset($_GET['id_user'])) $_SESSION['id_user_r']=$_GET['id_user'];

  $q1=mysql_query("SELECT * FROM user, user_resource, manag_state, station, management
  WHERE user.id_user='".$_SESSION['id_user_r']."' AND user.id_user=user_resource.id_user
  AND user_resource.id_s_m=manag_state.id_s_m AND manag_state.id_station=station.id_station
  AND manag_state.id_management=management.id_management
   Order By n_station, n_management");
   $row=mysql_num_rows($q1);

  $q2=mysql_query("SELECT * FROM user  WHERE id_user='".$_SESSION['id_user_r']."'");
     echo '&nbsp';
  ob_start ();
?>
<table border="2"  cellspacing="1">
<? echo '<tr><td colspan="4" align="center"><font size="4">Пользователь<br>'.mysql_result($q2, 0, 'login').'</font></td></tr>' ?>
<tr>
<td align="center"><font size="4">№</font></td>
<td align="center"><font size="4">Станция</font></td>
<td align="center"><font size="4">Дирекция</font></td>
<td align="center"><font size="4">Доступ</font></td>
</tr>

<?
  for ($i=0; $i<$row; $i++)
{
echo '<tr>';
echo '<td align="left"><font size="4">'.($i+1).'</font></td>';
echo '<td align="left"><font size="4">'.mysql_result($q1, $i, 'n_station').'</font></td>';
echo '<td align="left"><font size="4">'.mysql_result($q1, $i, 'n_management').'</font></td>';
echo '<td align="left"><a href="user_resource.php?id_s_m='.mysql_result($q1, $i, 'id_s_m').'"><font size="4">удалить</font></a></td>';
echo '</tr>';
}
echo '</table>';
$_SESSION['buffer']=ob_get_contents();
?>
</body>
</html>