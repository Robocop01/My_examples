<?  session_start();
   require ('inc/sql_connect.inc');
   $q_1=mysql_query("SELECT * FROM station");     $q_2=mysql_query("SELECT * FROM management");
?>
<html>
<head>
<title>Учет компьютерного хозяйства</title>
<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />
<link href="style.css"  rel="stylesheet" type="text/css" />

<script type="text/javascript" src="inc/jquery-1.9.1.js"></script>
<script type="text/javascript" src="inc/chained.js"></script>
<script type="text/javascript">
$(document).ready(function(){ $("#management").chained("#station"); });
</script>
</head>

<body bgcolor=#c0c0c0>

<table border="3">
<form action="2_011.php" method=post>
<tr><td colspan="2" align="center"><font size="4">Доступ</font></td></tr>
<tr>
<td align="left"><font size="4"><font>
<?
echo '<select name="id_station">';
     for ($i=0; $i<mysql_num_rows($q_1); $i++)
   echo '<option value='.mysql_result($q_1, $i, 'id_station').'>'.mysql_result($q_1, $i, 'n_station').'</option>';
 echo '</font></td><td>';
echo '<select name="id_management">';
     for ($i=0; $i<mysql_num_rows($q_2); $i++)
   echo '<option value='.mysql_result($q_2, $i, 'id_management').'>'.mysql_result($q_2, $i, 'n_management').'</option>';
 echo '</font></td>';
?>
</font></td>
</tr>

<tr>
<sub></sub>
<td align="center"><input type="submit" name="new" value="Сохранить"></td>
</form>

<form action="user_resource.php" method=post>
<td align="center"><input type="submit" name="concel" value="Назад"></td>
</form>
</tr>

</table>
</body>
</html>