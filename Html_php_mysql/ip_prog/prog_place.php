<? session_start();
   require ('inc/sql_connect.inc'); ?>
<html>
<head>
<body bgcolor=#c0c0c0>
<title>Редактирование списка программ</title>

 <script src="inc/datepicker.js" type="text/javascript" charset="UTF-8" language="javascript"></script>
 <link rel="stylesheet" type="text/css" href="datepicker.css" />

<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />
<link href="style.css"  rel="stylesheet" type="text/css" />

<table border="3">

<tr>
<td>
<form action="edit_place.php" method=post>
<?
   $q6=mysql_query("SELECT prog.* FROM prog left join pl_prog on pl_prog.id_prog=prog.id_prog and pl_prog.id_place='".$_SESSION['id_place']."'
   WHERE pl_prog.id_prog is null ORDER BY n_prog");
   $row=mysql_num_rows($q6);
   if ($row>0)
   {
   echo '<select name="id_prog"><option value='.mysql_result($q6, 0, 'prog.id_prog').'>'.mysql_result($q6, 0, 'prog.n_prog').'</option>';
  for ($i=1; $i<$row; $i++)
  echo '<option value='.mysql_result($q6, $i, 'prog.id_prog').'>'.mysql_result($q6, $i, 'prog.n_prog').'</option>';
  }
  ?>
</td>
<td>
<input type="submit" name="prog_add" value="Добавить"></form>
</td>
</tr>
<tr>
<td>
<form action="edit_place.php" method=post>
<?
   $q6=mysql_query("SELECT * FROM prog, pl_prog WHERE pl_prog.id_place='".$_SESSION['id_place']."' AND pl_prog.id_prog=prog.id_prog
    ORDER BY n_prog");
   $row=mysql_num_rows($q6);
   if ($row>0)
   {
   echo '<select name="id_prog"><option value='.mysql_result($q6, 0, 'prog.id_prog').'>'.mysql_result($q6, 0, 'prog.n_prog').'</option>';
  for ($i=1; $i<$row; $i++)
  echo '<option value='.mysql_result($q6, $i, 'prog.id_prog').'>'.mysql_result($q6, $i, 'prog.n_prog').'</option>';
  }
  ?>
</td>
<td>
<input type="submit" name="prog_del" value="Удалить"></form>
</td>
</tr>

<tr>
<td>
<form action="edit_place.php" method=post>
<input type="submit" name="concel" value="Назад"></form>
</td>
</tr>

</table>
</body>
</head>
</html>