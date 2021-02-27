<? session_start();
   require ('inc/sql_connect.inc');
  $_SESSION['foto']="scaner";  $_SESSION['directory']="f_foto/foto_scaner";
   if (isset($_POST['save']))
   mysql_query("UPDATE f_scaner SET n_scaner='".$_POST['n_scaner']."'
   WHERE id_scaner='".$_SESSION['id_scaner']."'");

   if (!isset($_POST['add_new']))
 {
 if (isset($_GET['id_scaner'])) $_SESSION['id_scaner']=$_GET['id_scaner'];

   $q1=mysql_query("SELECT * FROM f_scaner WHERE id_scaner='".$_SESSION['id_scaner']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_scaner']=mysql_result($q1, 0, 'id_scaner');
    $n_prog=mysql_result($q1, 0, 'n_scaner');
    }     else { $n_scaner="";   }
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
 if (!isset($_POST['id_scaner'])) $_POST['id_scaner']=$_SESSION['id_scaner'];

   $q1=mysql_query("SELECT * FROM f_scaner WHERE id_scaner='".$_POST['id_scaner']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_scaner']=mysql_result($q1, 0, 'id_scaner');
    $n_scaner=mysql_result($q1, 0, 'n_scaner');
    }
    else { $n_scaner=""; $sn_scaner=""; }
?>
<table border="3">
<tr bgcolor="#00FFFF">
<td colspan="3" align="center"><font size="6">Сканеры</font></td>
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
 { ?> <form action="edit_f_scaner.php" method=post> <? }
else
 { ?> <form action="2_7.php" method=post> <? }
?>

<font size="4"> <input size=40 maxlength=40 type="text" name="n_scaner" value='<? echo $n_scaner; ?>'></font>
</td>

<td align="center">
<?
   if (!isset($_POST['add_new']))
echo '<a href="upload_img/script.php?id_scaner"><img src="f_foto&#092;mini_'.mysql_result($q1, 0, 'foto_scaner').'"></a>';
else
echo '<a href="upload_img/script.php?id_scaner">Вставить фото</a>';
?>
</td>
</tr>

<?
   if (!isset($_POST['add_new']))
 { ?>
<tr>
<td align="center"><input type="submit" name="save" value="Сохранить"></td>
</form>

<form action="2_7.php" method=post>
<td align="center"><input type="submit" name="delete" value="Удалить"></td>
</form> <? }
else
{ ?>
<tr>
<td align="center"><input type="submit" name="new" value="Сохранить"></td>
</form> <? }
?>

<form action="2_7.php" method=post>
<td align="center"><input type="submit" name="concel" value="Назад"></td>
</form>
</tr>
</table>

</body>
</html>