<?  session_start();
   require ('inc/sql_connect.inc');
                                 // изменение принадлежности (станция-организация) и/или для сканера
  $q_select=mysql_query("SELECT *
  FROM management, station, manag_state LEFT JOIN user_resource ON user_resource.id_s_m=manag_state.id_s_m
  WHERE manag_state.id_s_m NOT IN (SELECT user_resource.id_s_m
  FROM manag_state, user_resource WHERE user_resource.id_user='".$_SESSION['id_user_r']."' AND user_resource.id_s_m=manag_state.id_s_m)
  AND manag_state.id_management=management.id_management
  AND manag_state.id_station=station.id_station
   Order By n_station, n_management");

  $q_select2=mysql_query("SELECT * FROM station
  WHERE id_station IN (SELECT DISTINCT id_station FROM manag_state)
   Order By n_station");
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
<form action="user_resource.php" method=post>
<tr><td colspan="2" align="center"><font size="4">Доступ</font></td></tr>
<tr>
<td align="left"><font size="4"><font>

<? if (mysql_num_rows($q_select)>0) {?>
<select id="station" name="id_station">
<?
     for ($i=0; $i<mysql_num_rows($q_select2); $i++)
   echo '<option value='.mysql_result($q_select2, $i, 'id_station').'>'.mysql_result($q_select2, $i, 'n_station').'</option>';
  ?>
</select>
</font></td>
<td align="left"><font size="4">
<select id="management" name="id_s_m">
 <?
   for ($i=0; $i<mysql_num_rows($q_select); $i++)
echo '<option value='.mysql_result($q_select, $i, 'manag_state.id_s_m').' class='.mysql_result($q_select, $i, 'id_station').'>'.mysql_result($q_select, $i, 'n_management').'</option>';
  ?>
</select>
 <? } ?>
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