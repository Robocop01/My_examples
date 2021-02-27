<? session_start();
   require ('inc/sql_connect.inc');

   if (isset($_POST['save']))
   mysql_query("UPDATE prog SET n_prog='".$_POST['n_prog']."', t_prog='".$_POST['t_prog']."'
   WHERE id_prog='".$_SESSION['id_prog']."'");

   if (!isset($_POST['add_new']))
 {
  if (isset($_GET['id_prog'])) $_SESSION['id_prog']=$_GET['id_prog'];

   $q1=mysql_query("SELECT * FROM prog WHERE id_prog='".$_SESSION['id_prog']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_prog']=mysql_result($q1, 0, 'id_prog');
    $n_prog=mysql_result($q1, 0, 'n_prog'); $t_prog=mysql_result($q1, 0, 't_prog');
    }     else { $n_prog=""; $t_prog=""; }
    ?>
<html>
<head>
<title>Учет компьютерного хозяйства</title>
<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />
<link href="style.css"  rel="stylesheet" type="text/css" />

 <script src="inc/datepicker.js" type="text/javascript" charset="UTF-8" language="javascript"></script>
 <link rel="stylesheet" type="text/css" href="datepicker.css" />
</head>

<body bgcolor=#c0c0c0>
<table border="3">

<tr bgcolor="#00FFFF">
<td colspan="3" align="center"><font size="6">Программа</font></td></tr>
</tr>

<tr>
<td align="center">
<font size="4">Название</font>
</td>

<td align="center">
<font size="4">Телефон</font>
</td>
</tr>

<tr>
<td align="center">
<?
   if (!isset($_POST['add_new']))
 echo '<form action="edit_prog.php" method=post>';
else
 echo '<form action="2_2.php" method=post>';
?>
<font size="4"> <input size=40 maxlength=40 type="text" name="n_prog" value='<? echo $n_prog; ?>'></font>
</td>

<td align="center">
<font size="4">
<input size=40 maxlength=40 type="text" name="t_prog" value='<? echo $t_prog; ?>'
></font>
</td>
</tr>
<?
   if (!isset($_POST['add_new']))
 { ?>
<tr>
<td align="center"><input type="submit" name="save" value="Сохранить"></td>
</form>

<form action="2_2.php" method=post>
<td align="center"><input type="submit" name="delete" value="Удалить"></td>
</form> <? }
else
{ ?>
<tr>
<td align="center"><input type="submit" name="new" value="Сохранить"></td>
</form> <? }
?>
<form action="2_2.php" method=post>
<td align="center"><input type="submit" name="concel" value="Назад"></td>
</form>
</tr>

</table>
</body>
</html>