<? session_start();
   require ('inc/sql_connect.inc');

if (isset($_POST['new']))
   mysql_query("INSERT INTO f_printer SET n_printer='".$_POST['n_printer']."' ");

 if (isset($_POST['delete']))
   {                               $_POST['id_printer']=$_SESSION['id_printer'];
   $q1=mysql_query("SELECT * FROM f_printer WHERE id_printer='".$_SESSION['id_printer']."'");
    if (mysql_result($q1, 0, 'foto_printer')!='0')
    {
    unlink ("../".$DIRECTORY."/".mysql_result($q1, 0, 'foto_printer'));
    unlink ("../".$DIRECTORY."/mini_".mysql_result($q1, 0, 'foto_printer'));
    }
   mysql_query("DELETE FROM f_printer WHERE id_printer='".$_SESSION['id_printer']."'");
   mysql_query("DELETE FROM sn_printer WHERE id_printer='".$_SESSION['id_printer']."'");
   }
 if (isset($_POST['exit'])) $_POST['id_printer']=$_SESSION['id_printer'];
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

<form action="edit_f_printer.php" method=post>

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
  $q1=mysql_query("SELECT * FROM f_printer WHERE '".$_SESSION['admin']."'=0 Order By n_printer");
   $row=mysql_num_rows($q1);
       echo '&nbsp';
  ob_start ();
?>
<table border="2"  cellspacing="1">

<tr><td colspan="3" align="center"><font size="4">Список моделей принтеров</font></td></tr>
<tr>
<td align="center"><font size="4">№</font></td>
<td align="center"><font size="4">Модель принтера</font></td>

<td align="center"><font size="4">Фото</font></td>
</tr>

<?
  for ($i=0; $i<$row; $i++)
{
echo '<tr>';
echo '<td align="left"><font size="4">'.($i+1).'</font></td>';

echo '<td align="left"><a href="edit_f_printer.php?id_printer='.mysql_result($q1, $i, 'id_printer').'">
<font size="4">'.mysql_result($q1, $i, 'n_printer').'</font></a></td>';

echo '<td align="left">';
if (mysql_result($q1, $i, 'foto_printer')!='0')
echo '<a href="f_foto&#092;'.mysql_result($q1, $i, 'foto_printer').'"
target="_blank"><img src="f_foto&#092;mini_'.mysql_result($q1, $i, 'foto_printer').'"></a>';
echo '</td>';
echo '</tr>';
}
echo '</table>';
$_SESSION['buffer']=ob_get_contents();
?>
</body>
</html>