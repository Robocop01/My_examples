<?
function draw_form($bad_login = false)
 { ?> <form action="" method="post">
         <input type="text" name="login"></input><br/>
         <input type="password" name="pass"></input><br/>
         <input type="submit" name="submit" value="������������"></input>
     </form> <?
     if ($bad_login) echo '������������ ����� �/��� ������';  }
/* �������� ������ � ������ */
function check_login($login, $pass)
{
	//////////////////////////////    ������ ����������� � ����!!!
define("DBName","ip_prog");
define("HostName","database-2.czmdavhidebl.eu-central-1.rds.amazonaws.com");
define("UserName","user1");
define("Password","Admin1mysql");

if(!mysql_connect(HostName,UserName,Password))
{  echo "�� ���� ����������� � �����".DBName."!<br>";
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

// >>> ����� ����� <<<
if (isset($_GET['logout']))
{    session_unset();
     session_destroy();
     header("Location: index.php");
     exit(); // ����� �������� ��������� ������ ����� exit ��� die
     // ����� ���������� ������� �����������.
     }

// �� ������ ���� �� ��� ��������������
if (!isset($_SESSION['login']))
  {  if (count($_POST) == 0) draw_form();
     else {
     $login = $_POST['login']; $pass = $_POST['pass'];
     if (check_login($login, $pass)) $_SESSION['login'] = $login;
                                                   else draw_form(true);}
// �������� true ���������� ����� ��������, ��� ��� ������ ������������ ������
}

isset($_SESSION['login']) or die();
// ����� ���� ������� ������� false �� ����������� die()

echo '������������, ' . $_SESSION['login'];
?>
