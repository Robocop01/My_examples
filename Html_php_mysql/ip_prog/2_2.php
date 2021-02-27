<? session_start();
   require ('inc/sql_connect.inc');

if (isset($_POST['new']))
   mysql_query("INSERT INTO  prog SET n_prog='".$_POST['n_prog']."', t_prog='".$_POST['t_prog']."' ");

 if (isset($_POST['delete']))
   {
   mysql_query("DELETE FROM prog WHERE id_prog='".$_SESSION['id_prog']."'");
   mysql_query("DELETE FROM pl_prog WHERE id_prog='".$_SESSION['id_prog']."'");
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

<script src="/inc/menu.js"></script>
</head>

<body topmargin="0" leftmargin="0" bgcolor=dce6e6>
<span ID="slide">
 <table border="0" cellspacing="0" cellpadding="0" border="0">

  <tr align="left" valign="middle" height="20">

<form action="index.php" method=post>
  <td width="107"><input type="submit" name="a" value="Назад"></td>
</form>

<form action="edit_prog.php" method=post>

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
  $q1=mysql_query("SELECT * FROM prog WHERE '".$_SESSION['admin']."'=0 Order By n_prog");
   $row=mysql_num_rows($q1);
       echo '&nbsp';
  ob_start ();
?>
<table border="2"  cellspacing="1">

<tr><td colspan="3" align="center"><font size="4">Список программ</font></td></tr>
<tr>
<td align="center"><font size="4">№</font></td>
<td align="center"><font size="4">Наз. программы</font></td>
<td align="center"><font size="4">Контакт. информ.</font></td>
</tr>

<?
  for ($i=0; $i<$row; $i++)
{
echo '<tr>';
echo '<td align="left"><font size="4">'.($i+1).'</font></td>';

echo '<td align="left"><a href="edit_prog.php?id_prog='.mysql_result($q1, $i, 'id_prog').'">
<font size="4">'.mysql_result($q1, $i, 'n_prog').'</font></a></td>';

echo '<td align="left"><font size="4">'.mysql_result($q1, $i, 't_prog').'</font></td>';
echo '</tr>';
}
echo '</table>';
$_SESSION['buffer']=ob_get_contents();
?>
</body>
</html>