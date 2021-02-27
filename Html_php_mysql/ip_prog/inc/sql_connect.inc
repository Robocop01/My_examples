<?
isset($_SESSION['login']) or die('вы не авторизованы');
define("DBName","ip_prog");
define("HostName","localhost");
define("UserName","root");
define("Password","");

if(!mysql_connect(HostName,UserName,Password))
{  echo "Ќе могу соединитьс€ с базой".DBName."!<br>";
   echo mysql_error();
   exit; }
mysql_select_db(DBName);

mysql_query ("set character_set_client='cp1251'");
mysql_query ("set character_set_results='cp1251'");
mysql_query ("set collation_connection='cp1251_general_ci'");
?>