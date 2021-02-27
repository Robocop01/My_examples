<? session_start();
   require ('inc/sql_connect.inc');
  $_SESSION['foto']="ups";  $_SESSION['directory']="f_foto/foto_ups";
   if (isset($_POST['save']))
   mysql_query("UPDATE f_ups SET n_ups='".$_POST['n_ups']."'
   WHERE id_ups='".$_SESSION['id_ups']."'");

   if (!isset($_POST['add_new']))
 {
 if (isset($_GET['id_ups'])) $_SESSION['id_ups']=$_GET['id_ups'];

   $q1=mysql_query("SELECT * FROM f_ups WHERE id_ups='".$_SESSION['id_ups']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_ups']=mysql_result($q1, 0, 'id_ups');
    $n_prog=mysql_result($q1, 0, 'n_ups');
    }     else { $n_ups="";   }
    ?>
<html>
<head>
<title>Учет компьютерного хозяйства</title>
<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />
</head>

<body topmargin="0" leftmargin="0" bgcolor=dce6e6>
<?
   if (!isset($_POST['add_new']))
 {
 if (!isset($_POST['id_ups'])) $_POST['id_ups']=$_SESSION['id_ups'];

   $q1=mysql_query("SELECT * FROM f_ups WHERE id_ups='".$_POST['id_ups']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_ups']=mysql_result($q1, 0, 'id_ups');
    $n_ups=mysql_result($q1, 0, 'n_ups');
    }
    else { $n_ups=""; $sn_ups=""; }
?>
<table border="3">
<tr bgcolor="#00FFFF">
<td colspan="3" align="center"><font size="6">UPS</font></td>
</tr>

<tr>
<td align="center">
<font size="4">Название</font>
</td>

<td align="center">
<font size="4">Фото</font>
</td>
</tr>

<tr>
<td align="center">

<?
   if (!isset($_POST['add_new']))
 { ?> <form action="edit_f_ups.php" method=post> <? }
else
 { ?> <form action="2_6.php" method=post> <? }
?>

<font size="4"> <input size=40 maxlength=40 type="text" name="n_ups" value='<? echo $n_ups; ?>'></font>
</td>

<td align="center">
<?
   if (!isset($_POST['add_new']))
echo '<a href="upload_img/script.php?id_ups"><img src="f_foto&#092;mini_'.mysql_result($q1, 0, 'foto_ups').'"></a>';
else
echo '<a href="upload_img/script.php?id_ups">Вставить фото</a>';
?>
</td>
</tr>

<?
   if (!isset($_POST['add_new']))
 { ?>
<tr>
<td align="center"><input type="submit" name="save" value="Сохранить"></td>
</form>

<form action="2_6.php" method=post>
<td align="center"><input type="submit" name="delete" value="Удалить"></td>
</form> <? }
else
{ ?>
<tr>
<td align="center"><input type="submit" name="new" value="Сохранить"></td>
</form> <? }
?>

<form action="2_6.php" method=post>
<td align="center"><input type="submit" name="concel" value="Назад"></td>
</form>
</tr>
</table>

</body>
</html>