<? session_start();
   require ('inc/sql_connect.inc');

   if (isset($_POST['save']))
   mysql_query("UPDATE address SET n_address='".$_POST['n_address']."', id_station='".$_POST['id_station']."', note='".$_POST['note']."'
   WHERE id_address='".$_SESSION['id_address']."'");

   if (!isset($_POST['add_new']))
 {
  if (isset($_GET['id_address'])) $_SESSION['id_address']=$_GET['id_address'];

   $q1=mysql_query("SELECT * FROM address, station WHERE station.id_station=address.id_station AND
   id_address='".$_SESSION['id_address']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_address']=mysql_result($q1, 0, 'id_address');
    $n_address=mysql_result($q1, 0, 'n_address'); $id_station=mysql_result($q1, 0, 'id_station');
    $n_station=mysql_result($q1, 0, 'n_station'); $note=mysql_result($q1, 0, 'note');
    }     else { $n_address=""; $id_station=""; $note=""; }
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
<?
   if (!isset($_POST['add_new']))
 {
 if (!isset($_POST['id_address']) && isset($_SESSION['id_address'])) $_POST['id_address']=$_SESSION['id_address'];

   $q1=mysql_query("SELECT * FROM address, station WHERE address.id_station=station.id_station AND id_address='".$_POST['id_address']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_address']=mysql_result($q1, 0, 'id_address');
    $n_address=mysql_result($q1, 0, 'n_address'); $id_address=mysql_result($q1, 0, 'address.id_address');
    $id_station=mysql_result($q1, 0, 'id_station'); $note=mysql_result($q1, 0, 'address.note');
    } else {$n_address=""; $note="";}
?>
<tr bgcolor="#00FFFF">
<td colspan="3" align="center"><font size="6">Станция</font></td>
</tr>

<tr>
<td align="center">
<font size="4">Название</font>
</td>

<td align="center">
<font size="4">Станция</font>
</td>

<td align="center">
<font size="4">Прим.</font>
</td>
</tr>

<tr>
<td align="center">
<?
   if (!isset($_POST['add_new']))
 echo '<form action="edit_address.php" method=post>';
else
 echo '<form action="2_02.php" method=post>';
?>
<font size="4"> <input size=40 maxlength=40 type="text" name="n_address" value='<? echo $n_address; ?>'></font>
</td>

<td align="center">
<?
   $q2=mysql_query("SELECT * FROM station Order By n_station");
   $row=mysql_num_rows($q2);
    echo '<select name="id_station">';
   if (!isset($_POST['add_new']))
  {
  echo '<option value='.$id_station.'>'.$n_station.'</option>';
  for ($i=0; $i<$row; $i++)
  echo '<option value='.mysql_result($q2, $i, 'id_station').'>'.mysql_result($q2, $i, 'n_station').'</option>';
  echo '</select>'; }
  else
  {
  for ($i=0; $i<$row; $i++)
  echo '<option value='.mysql_result($q2, $i, 'id_station').'>'.mysql_result($q2, $i, 'n_station').'</option>';
  echo '</select>'; }
  ?>
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

<form action="2_02.php" method=post>
<td align="center"><input type="submit" name="delete" value="Удалить"></td>
</form> <? }
else
{ ?>
<tr>
<td align="center"><input type="submit" name="new" value="Сохранить"></td>
</form> <? }
?>
<form action="2_02.php" method=post>
<td align="center"><input type="submit" name="concel" value="Назад"></td>
</form>
</tr>

</table>
</body>
</html>