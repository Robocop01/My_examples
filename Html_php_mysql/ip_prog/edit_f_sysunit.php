<? session_start();
   require ('inc/sql_connect.inc');
  $_SESSION['foto']="sysunit";  $_SESSION['directory']="f_foto/foto_sysunit";
   if (isset($_POST['save']))
   mysql_query("UPDATE f_sysunit SET n_sysunit='".$_POST['n_sysunit']."'
   WHERE id_sysunit='".$_SESSION['id_sysunit']."'");

   if (!isset($_POST['add_new']))
 {
 if (isset($_GET['id_sysunit'])) $_SESSION['id_sysunit']=$_GET['id_sysunit'];

   $q1=mysql_query("SELECT * FROM f_sysunit WHERE id_sysunit='".$_SESSION['id_sysunit']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_sysunit']=mysql_result($q1, 0, 'id_sysunit');
    $n_prog=mysql_result($q1, 0, 'n_sysunit');
    }     else { $n_sysunit="";   }
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
 if (!isset($_POST['id_sysunit'])) $_POST['id_sysunit']=$_SESSION['id_sysunit'];

   $q1=mysql_query("SELECT * FROM f_sysunit WHERE id_sysunit='".$_POST['id_sysunit']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_sysunit']=mysql_result($q1, 0, 'id_sysunit');
    $n_sysunit=mysql_result($q1, 0, 'n_sysunit');
    }
    else { $n_sysunit=""; $sn_sysunit=""; }
?>
<table border="3">
<tr bgcolor="#00FFFF">
<td colspan="3" align="center"><font size="6">Системные блоки</font></td>
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
 { ?> <form action="edit_f_sysunit.php" method=post> <? }
else
 { ?> <form action="2_4.php" method=post> <? }
?>

<font size="4"> <input size=40 maxlength=40 type="text" name="n_sysunit" value='<? echo $n_sysunit; ?>'></font>
</td>

<td align="center">
<?
   if (!isset($_POST['add_new']))
echo '<a href="upload_img/script.php?id_sysunit"><img src="f_foto&#092;mini_'.mysql_result($q1, 0, 'foto_sysunit').'"></a>';
else
echo '<a href="upload_img/script.php?id_sysunit">Вставить фото</a>';
?>
</td>
</tr>

<?
   if (!isset($_POST['add_new']))
 { ?>
<tr>
<td align="center"><input type="submit" name="save" value="Сохранить"></td>
</form>

<form action="2_4.php" method=post>
<td align="center"><input type="submit" name="delete" value="Удалить"></td>
</form> <? }
else
{ ?>
<tr>
<td align="center"><input type="submit" name="new" value="Сохранить"></td>
</form> <? }
?>

<form action="2_4.php" method=post>
<td align="center"><input type="submit" name="concel" value="Назад"></td>
</form>
</tr>
</table>

</body>
</html>