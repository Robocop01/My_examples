<? session_start();
   require ('inc/sql_connect.inc');

   if (isset($_POST['save']))
   {
   mysql_query("UPDATE user SET login='".$_POST['login']."', pass='".$_POST['pass']."',
   name='".$_POST['name']."', note='".$_POST['note']."'
   WHERE id_user='".$_SESSION['id_user_r']."'");
   }

   if (!isset($_POST['add_new']))
 {
  if (isset($_GET['id_user'])) $_SESSION['id_user_r']=$_GET['id_user'];

   $q1=mysql_query("SELECT * FROM user WHERE id_user='".$_SESSION['id_user_r']."'");
   $row=mysql_num_rows($q1);

    $_SESSION['id_user_r']=mysql_result($q1, 0, 'id_user');   // измена!!!
    $login=mysql_result($q1, 0, 'login'); $pass=mysql_result($q1, 0, 'pass');
    $name=mysql_result($q1, 0, 'name'); $note=mysql_result($q1, 0, 'note');
    }     else { $login=""; $pass=""; $name=""; $note=""; }
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
<td colspan="4" align="center"><font size="6">Параметры пользователя</font></td>
</tr>

<tr>
<td align="center"><font size="4">Логин</font></td>
<td align="center"><font size="4">Пароль</font></td>
<td align="center"><font size="4">Фамилия</font></td>
<td align="center"><font size="4">Прим.</font></td>
</tr>

<tr>
<td align="center">
<?
   if (!isset($_POST['add_new']))
 echo '<form action="edit_user.php" method=post>';
else
 echo '<form action="2_001.php" method=post>';
?>
<font size="4"> <input size=10 maxlength=10 type="text" name="login" value='<? echo $login; ?>'></font>
</td>

<td align="center"><font size="4">
<input size=10 maxlength=10 type="text" name="pass" value='<? echo $pass; ?>' ></font>
</td>
<td align="center"><font size="4">
<input size=20 maxlength=20 type="text" name="name" value='<? echo $name; ?>' ></font>
</td>
<td align="center"><font size="4">
<input size=20 maxlength=20 type="text" name="note" value='<? echo $note; ?>' ></font>
</td>
</tr>
<?
   if (!isset($_POST['add_new']))
 { ?>
<tr>
<td align="center"><input type="submit" name="save" value="Сохранить"></td>
</form>

<form action="2_001.php" method=post>
<td align="center"><input type="submit" name="delete" value="Удалить"></td>
</form> <? }
else
{ ?>
<tr>
<td align="center"><input type="submit" name="new" value="Сохранить"></td>
</form> <? }
?>
<form action="2_001.php" method=post>
<td align="center"><input type="submit" name="concel" value="Выход"></td>
</form>
</tr>

</table>
</body>
</html>