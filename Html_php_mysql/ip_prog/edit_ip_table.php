<? session_start();
   require ('inc/sql_connect.inc');

   $q1=mysql_query("SELECT * FROM ip_table, management, shluz_m
   WHERE id_ip='".$_GET['id_ip']."'
   AND ip_table.id_management=management.id_management
   AND ip_table.id_shluz_m=shluz_m.id_shluz_m
   LIMIT 1");
    $id_ip=mysql_result($q1, 0, 'id_ip'); $n_ip=mysql_result($q1, 0, 'n_ip');
    $id_management=mysql_result($q1, 0, 'id_management'); $n_management=mysql_result($q1, 0, 'n_management');
    $_SESSION['id_ip']=$_GET['id_ip'];

  $q2=mysql_query("SELECT management.id_management, n_management FROM user_resource, manag_state, station, management
  WHERE user_resource.id_user='".$_SESSION['id_user']."'
  AND user_resource.id_s_m=manag_state.id_s_m
  AND manag_state.id_station=station.id_station
  AND manag_state.id_management=management.id_management
  Group By manag_state.id_management Order By n_station, n_management");
    ?>
<html>
<head>
<title>Учет компьютерного хозяйства</title>

 <script src="inc/datepicker.js" type="text/javascript" charset="UTF-8" language="javascript"></script>
 <link rel="stylesheet" type="text/css" href="datepicker.css" />

<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />
<link href="style.css"  rel="stylesheet" type="text/css" />
</head>

<body bgcolor=#c0c0c0>
<form action="ip_table.php" method=post>
<table border="3">

<tr bgcolor="#00FFFF">
<td colspan="2" align="center"><font size="6">Привязка Орг. к IP</font></td></tr>
</tr>

<tr>
<td align="center"><font size="4">IP</font></td>
<td align="center"><font size="4">Организация</font></td>
</tr>

<tr>
<td align="center"><font size="4"><? echo $n_ip; ?></font></td>
<td align="center">
<select name="id_management">
<?
   echo '<option value='.$id_management.'>'.$n_management.'</option>';
     for ($i=0; $i<mysql_num_rows($q2); $i++)
     if ($id_management!=mysql_result($q2, $i, 'id_management'))
   echo '<option value='.mysql_result($q2, $i, 'id_management').'>'.mysql_result($q2, $i, 'n_management').'</option>';
  ?>
</select>
</td>
</tr>

<tr>
<td align="center"><input type="submit" name="save" value="Сохранить"></td>
</form>

<form action="ip_table.php" method=post>
<td align="center"><input type="submit" name="concel" value="Назад"></td>
</form>
</tr>

</table>
</body>
</html>