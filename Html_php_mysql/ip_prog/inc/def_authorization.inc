<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />
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
{ return ($_POST['login'] == 'admin') && ($_POST['pass'] == '111'); }

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