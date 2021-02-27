<? session_start();
   require ('inc/sql_connect.inc');
  $_SESSION['foto']="printer";  $_SESSION['directory']="f_foto/foto_printer";
   if (isset($_POST['save']))
   mysql_query("UPDATE f_printer SET n_printer='".$_POST['n_printer']."'
   WHERE id_printer='".$_SESSION['id_printer']."'");

   if (!isset($_POST['add_new']))
 {
 if (isset($_GET['id_printer'])) $_SESSION['id_printer']=$_GET['id_printer'];

   $q1=mysql_query("SELECT * FROM f_printer WHERE id_printer='".$_SESSION['id_printer']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_printer']=mysql_result($q1, 0, 'id_printer');
    $n_prog=mysql_result($q1, 0, 'n_printer');
    }     else { $n_printer="";   }
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
 if (!isset($_POST['id_printer'])) $_POST['id_printer']=$_SESSION['id_printer'];

   $q1=mysql_query("SELECT * FROM f_printer WHERE id_printer='".$_POST['id_printer']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_printer']=mysql_result($q1, 0, 'id_printer');
    $n_printer=mysql_result($q1, 0, 'n_printer');
    }
    else { $n_printer=""; $sn_printer=""; }
?>
<table border="3">
<tr bgcolor="#00FFFF">
<td colspan="3" align="center"><font size="6">Принтеры</font></td>
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
 { ?> <form action="edit_f_printer.php" method=post> <? }
else
 { ?> <form action="2_5.php" method=post> <? }
?>

<font size="4"> <input size=40 maxlength=40 type="text" name="n_printer" value='<? echo $n_printer; ?>'></font>
</td>

<td align="center">
<?
   if (!isset($_POST['add_new']))
echo '<a href="upload_img/script.php?id_printer"><img src="f_foto&#092;mini_'.mysql_result($q1, 0, 'foto_printer').'"></a>';
else
echo '<a href="upload_img/script.php?id_printer">Вставить фото</a>';
?>
</td>
</tr>

<?
   if (!isset($_POST['add_new']))
 { ?>
<tr>
<td align="center"><input type="submit" name="save" value="Сохранить"></td>
</form>

<form action="2_5.php" method=post>
<td align="center"><input type="submit" name="delete" value="Удалить"></td>
</form> <? }
else
{ ?>
<tr>
<td align="center"><input type="submit" name="new" value="Сохранить"></td>
</form> <? }
?>

<form action="2_5.php" method=post>
<td align="center"><input type="submit" name="concel" value="Назад"></td>
</form>
</tr>
</table>

</body>
</html>