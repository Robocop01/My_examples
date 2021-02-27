<? session_start();
   require ('inc/sql_connect.inc');

   if (isset($_POST['save']))
   mysql_query("UPDATE station SET n_station='".$_POST['n_station']."', note='".$_POST['note']."'
   WHERE id_station='".$_SESSION['id_station']."'");

   if (!isset($_POST['add_new']))
 {
  if (isset($_GET['id_station'])) $_SESSION['id_station']=$_GET['id_station'];

   $q1=mysql_query("SELECT * FROM station WHERE id_station='".$_SESSION['id_station']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_station']=mysql_result($q1, 0, 'id_station');
    $n_station=mysql_result($q1, 0, 'n_station'); $note=mysql_result($q1, 0, 'note');
    }     else { $n_station=""; $note=""; }
    ?>
<html>
<head>
<title>Учет компьютерного хозяйства</title>
 <script src="inc/datepicker.js" type="text/javascript" charset="UTF-8" language="javascript"></script>
 <link rel="stylesheet" type="text/css" href="datepicker.css" />
</head>

<body bgcolor=#c0c0c0>
<table border="3">
<tr bgcolor="#00FFFF">
<td colspan="3" align="center"><font size="6">Станция</font></td></tr>
</tr>

<tr>
<td align="center">
<font size="4">Название</font>
</td>

<td align="center">
<font size="4">Доп. информ.</font>
</td>
</tr>

<tr>
<td align="center">
<?
   if (!isset($_POST['add_new']))
 echo '<form action="edit_station.php" method=post>';
else
 echo '<form action="2_0.php" method=post>';
?>
<font size="4"> <input size=40 maxlength=40 type="text" name="n_station" value='<? echo $n_station; ?>'></font>
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

<form action="2_0.php" method=post>
<td align="center"><input type="submit" name="delete" value="Удалить"></td>
</form> <? }
else
{ ?>
<tr>
<td align="center"><input type="submit" name="new" value="Сохранить"></td>
</form> <? }
?>
<form action="2_0.php" method=post>
<td align="center"><input type="submit" name="concel" value="Назад"></td>
</form>
</tr>
</table>
</body>
</html>