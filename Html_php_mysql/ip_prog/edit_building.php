<? session_start();
   require ('inc/sql_connect.inc');

      if (isset($_POST['save']))
   mysql_query("UPDATE building SET n_building='".$_POST['n_building']."', id_address='".$_POST['id_address']."', note='".$_POST['note']."'
   WHERE id_building='".$_SESSION['id_building']."'");

   if (!isset($_POST['add_new']))
 {
if (isset($_GET['id_building'])) $_SESSION['id_building']=$_GET['id_building'];

   $q1=mysql_query("SELECT * FROM building, address WHERE address.id_address=building.id_address AND
   id_building='".$_SESSION['id_building']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_building']=mysql_result($q1, 0, 'id_building');
    $n_building=mysql_result($q1, 0, 'n_building'); $id_address=mysql_result($q1, 0, 'id_address');
    $n_address=mysql_result($q1, 0, 'n_address'); $note=mysql_result($q1, 0, 'building.note');
    }     else { $n_building=""; $id_address=""; $note=""; }
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
 if (!isset($_POST['id_building']) && isset($_SESSION['id_building'])) $_POST['id_building']=$_SESSION['id_building'];

   $q1=mysql_query("SELECT * FROM building, address WHERE building.id_address=address.id_address AND id_building='".$_POST['id_building']."'");
    $row=mysql_num_rows($q1);
    $_SESSION['id_building']=mysql_result($q1, 0, 'id_building');
    $n_building=mysql_result($q1, 0, 'n_building'); $id_building=mysql_result($q1, 0, 'building.id_building');
    $id_address=mysql_result($q1, 0, 'id_address');
    $note=mysql_result($q1, 0, 'note');
    } else {$n_building=""; $note="";}
?>

<tr bgcolor="#00FFFF">
<td colspan="3" align="center"><font size="6">Здание-Адрес</font></td>
</tr>

<tr>
<td align="center">
<font size="4">Здание</font>
</td>

<td align="center">
<font size="4">Адрес</font>
</td>

<td align="center">
<font size="4">Прим.</font>
</td>
</tr>

<tr>
<td align="center">
<?
   if (!isset($_POST['add_new']))
 echo '<form action="edit_building.php" method=post>';
else
 echo '<form action="2_03.php" method=post>';
?>
<font size="4"> <input size=40 maxlength=40 type="text" name="n_building" value='<? echo $n_building; ?>'></font>
</td>

<td align="center">
<?
   $q2=mysql_query("SELECT * FROM address Order By n_address");
   $row=mysql_num_rows($q2);
    echo '<select name="id_address">';
   if (!isset($_POST['add_new']))
  {
  echo '<option value='.$id_address.'>'.$n_address.'</option>';
  for ($i=0; $i<$row; $i++)
  echo '<option value='.mysql_result($q2, $i, 'id_address').'>'.mysql_result($q2, $i, 'n_address').'</option>';
  echo '</select>'; }
  else
  {
  for ($i=0; $i<$row; $i++)
  echo '<option value='.mysql_result($q2, $i, 'id_address').'>'.mysql_result($q2, $i, 'n_address').'</option>';
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

<form action="2_03.php" method=post>
<td align="center"><input type="submit" name="delete" value="Удалить"></td>
</form> <? }
else
{ ?>
<tr>
<td align="center"><input type="submit" name="new" value="Сохранить"></td>
</form> <? }
?>
<form action="2_03.php" method=post>
<td align="center"><input type="submit" name="concel" value="Назад"></td>
</form>
</tr>

</table>
</body>
</html>