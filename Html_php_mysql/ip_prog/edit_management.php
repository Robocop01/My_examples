<? session_start();
   require ('inc/sql_connect.inc');

   if (isset($_POST['save']))
   mysql_query("UPDATE management SET n_management='".$_POST['n_management']."', note='".$_POST['note']."'
   WHERE id_management='".$_SESSION['id_management']."'");

   if (!isset($_POST['add_new']))
 {
  if (isset($_GET['id_management'])) $_SESSION['id_management']=$_GET['id_management'];

   $q1=mysql_query("SELECT * FROM management WHERE id_management='".$_SESSION['id_management']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_management']=mysql_result($q1, 0, 'id_management');
    $n_management=mysql_result($q1, 0, 'n_management'); $note=mysql_result($q1, 0, 'note');
    }     else { $n_management=""; $note=""; }
    ?>
<html>
<head>
<title>Учет компьютерного хозяйства</title>
<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />
<link href="style.css"  rel="stylesheet" type="text/css" />
</head>

<body bgcolor=#c0c0c0>
<table border="3">
<tr bgcolor="#00FFFF">
<td colspan="3" align="center"><font size="6">название организации</font></td>
</tr>

<tr>
<td align="center">
<font size="4">Название</font>
</td>

<td align="center">
<font size="4">Информ. админ.</font>
</td>
</tr>

<tr>
<td align="center">
<?
   if (!isset($_POST['add_new']))
 echo '<form action="edit_management.php" method=post>';
else
 echo '<form action="2_01.php" method=post>';
?>
<font size="4"> <input size=40 maxlength=40 type="text" name="n_management" value='<? echo $n_management; ?>'></font>
</td>

<td align="center">
<font size="4">
<input size=40 maxlength=40 type="text" name="note" value='<? echo $note; ?>'
></font>
</td>
</tr>
<?
   if (!isset($_POST['add_new']))
 { ?>
<tr>
<td align="center"><input type="submit" name="save" value="Сохранить"></td>
</form>

<form action="2_01.php" method=post>
<td align="center"><input type="submit" name="delete" value="Удалить"></td>
</form> <? }
else
{ ?>
<tr>
<td align="center"><input type="submit" name="new" value="Сохранить"></td>
</form> <? }
?>
<form action="2_01.php" method=post>
<td align="center"><input type="submit" name="exit" value="Назад"></td>
</form>
</tr>

</table>
</body>
</html>