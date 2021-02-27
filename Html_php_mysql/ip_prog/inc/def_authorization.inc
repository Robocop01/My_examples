<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />
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
{ return ($_POST['login'] == 'admin') && ($_POST['pass'] == '111'); }

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