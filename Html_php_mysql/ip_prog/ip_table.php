<? session_start();
   require ('inc/sql_connect.inc');

   if (isset($_POST['save']))
   mysql_query("UPDATE ip_table SET id_management='".$_POST['id_management']."' WHERE id_ip='".$_SESSION['id_ip']."'");
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

<script src="inc/menu.js"></script>
</head>

<body topmargin="0" leftmargin="0" bgcolor=dce6e6>
<span ID="slide">
 <table border="0" cellspacing="0" cellpadding="0" border="0">

  <tr align="left" valign="middle" height="20">

<form action="2_1.php" method=post>
  <td width="107"><input type="submit" name="a" value="Назад"></td>
</form>

<form action="edit_management.php" method=post>

<td width="107"></td>
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
if (isset($_GET['id_shluz_m'])) $_SESSION['id_shluz_m']=$_GET['id_shluz_m'];

  $q1=mysql_query("SELECT * FROM user_resource, manag_state, ip_table, management
  WHERE user_resource.id_user='".$_SESSION['id_user']."'
  AND user_resource.id_s_m=manag_state.id_s_m
  AND manag_state.id_management=ip_table.id_management
  AND ip_table.id_management=management.id_management
  AND id_shluz_m='".$_SESSION['id_shluz_m']."'
  Group By id_ip Order By n_ip");
   $row=mysql_num_rows($q1);
       echo '&nbsp';
  ob_start ();
?>
<table border="1" bordercolor="black" cellspacing="0">
<tr><th colspan="4"><font size="4">Орг. IP</font></th></tr>
<tr>
<td align="center"><font size="4">№</font></td>
<td align="center"><font size="4">IP</font></td>
<td align="center"><font size="4">Наз. орг.</font></td>
<td align="center"><font size="4">Занят/свободен</font></td>
</tr>
<?
  for ($i=0; $i<$row; $i++)
{
echo '<tr>';
echo '<td align="left"><font size="4">'.($i+1).'</font></td>';
echo '<td align="left"><font size="4">'.mysql_result($q1, $i, 'n_ip').'</font></td>';
echo '<td align="left">
<a href="edit_ip_table.php?id_ip='.mysql_result($q1, $i, 'id_ip').'"><font size="4">'.mysql_result($q1, $i, 'n_management').'</font></a>
</td>';

if (mysql_result($q1, $i, 'id_place')==0)
echo '<td align="center"><font size="4" font color=green>своб.</font></td>';
else
echo '<td align="center"><font size="4" font color=red>занят</font></td>';
echo '</tr>';
}
echo '</table>';
$_SESSION['buffer']=ob_get_contents();
?>
</body>
</html>