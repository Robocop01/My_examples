<?
function draw_form($bad_login = false)
 { ?> <form action="" method="post">
         <input type="text" name="login"></input><br/>
         <input type="password" name="pass"></input><br/>
         <input type="submit" name="submit" value="Авторизовать"></input>
     </form> <?
     if ($bad_login) echo 'неправильный логин и/или пароль';  }
/* Проверку логина и пароля */
function check_login($login, $pass)
{	//////////////////////////////    Первое подключение к базе!!!define("DBName","ip_prog");
define("HostName","localhost");
define("UserName","root");
define("Password","");

if(!mysql_connect(HostName,UserName,Password))
{  echo "Не могу соединиться с базой".DBName."!<br>";
   echo mysql_error();
   exit; }
mysql_select_db(DBName);

mysql_query ("set character_set_client='cp1251'");
mysql_query ("set character_set_results='cp1251'");
mysql_query ("set collation_connection='cp1251_general_ci'");
    ///////////////////////////////////////////////////////////////////////////////////

$q1=mysql_query("SELECT * FROM user WHERE login='".$_POST['login']."' AND pass='".$_POST['pass']."'");
$row=mysql_num_rows($q1);
if ( $row>0 ) { $_SESSION['id_user']=mysql_result($q1, 0, 'id_user'); $_SESSION['admin']=mysql_result($q1, 0, 'admin');
 return ($_POST['login'] == mysql_result($q1, 0, 'login')) && ($_POST['pass'] == mysql_result($q1, 0, 'pass')); } }

// >>> точка входа <<<
if (isset($_GET['logout']))
{    session_unset();
     session_destroy();
     header("Location: index.php");
     exit(); // после передачи редиректа всегда нужен exit или die
     // иначе выполнение скрипта продолжится.
     }

// на случай если мы уже авторизированы
if (!isset($_SESSION['login']))
  {  if (count($_POST) == 0) draw_form();
     else {
     $login = $_POST['login']; $pass = $_POST['pass'];
     if (check_login($login, $pass)) $_SESSION['login'] = $login;
                                                   else draw_form(true);}
// параметр true передается чтобы показать, что был введен неправильный пароль
}

isset($_SESSION['login']) or die();
// здесь если функция вернула false то выполняется die()

echo 'Здравствуйте, ' . $_SESSION['login'];
?>