<? session_start();
   require ('inc/sql_connect.inc');
  $_SESSION['foto']="monitor";  $_SESSION['directory']="f_foto/foto_monitor";
   if (isset($_POST['save']))
   mysql_query("UPDATE f_monitor SET n_monitor='".$_POST['n_monitor']."'
   WHERE id_monitor='".$_SESSION['id_monitor']."'");

   if (!isset($_POST['add_new']))
 {
 if (isset($_GET['id_monitor'])) $_SESSION['id_monitor']=$_GET['id_monitor'];

   $q1=mysql_query("SELECT * FROM f_monitor WHERE id_monitor='".$_SESSION['id_monitor']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_monitor']=mysql_result($q1, 0, 'id_monitor');
    $n_prog=mysql_result($q1, 0, 'n_monitor');
    }     else { $n_monitor="";   }
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
 if (!isset($_POST['id_monitor'])) $_POST['id_monitor']=$_SESSION['id_monitor'];

   $q1=mysql_query("SELECT * FROM f_monitor WHERE id_monitor='".$_POST['id_monitor']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_monitor']=mysql_result($q1, 0, 'id_monitor');
    $n_monitor=mysql_result($q1, 0, 'n_monitor');
    }
    else { $n_monitor=""; $sn_monitor=""; }
?>
<table border="3">
<tr bgcolor="#00FFFF">
<td colspan="3" align="center"><font size="6">Мониторы</font></td>
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
 { ?> <form action="edit_f_monitor.php" method=post> <? }
else
 { ?> <form action="2_3.php" method=post> <? }
?>

<font size="4"> <input size=40 maxlength=40 type="text" name="n_monitor" value='<? echo $n_monitor; ?>'></font>
</td>

<td align="center">
<?
   if (!isset($_POST['add_new']))
echo '<a href="upload_img/script.php?id_monitor"><img src="f_foto&#092;mini_'.mysql_result($q1, 0, 'foto_monitor').'"></a>';
else
echo '<a href="upload_img/script.php?id_monitor">Вставить фото</a>';
?>
</td>
</tr>

<?
   if (!isset($_POST['add_new']))
 { ?>
<tr>
<td align="center"><input type="submit" name="save" value="Сохранить"></td>
</form>

<form action="2_3.php" method=post>
<td align="center"><input type="submit" name="delete" value="Удалить"></td>
</form> <? }
else
{ ?>
<tr>
<td align="center"><input type="submit" name="new" value="Сохранить"></td>
</form> <? }
?>

<form action="2_3.php" method=post>
<td align="center"><input type="submit" name="concel" value="Назад"></td>
</form>
</tr>
</table>

</body>
</html>