<? session_start();
   require ('../inc/sql_connect.inc');
/********************************************/
/*Welcome to Upload IMG source-code!*/
/*The Upload IMG and its functions, contexture are copyrighted by s1ayer [www.spg.arbse.net]*/
/*Current file: script.php*/
/*Optimized for PHP 4.3.6, Apache 1.3.27*/
/********************************************/

//путь к скрипту на сервере (следуя из корня)
$SPATH = "upload_img";
//перезапись пути...
$SPATH_MOD = "".$_SERVER['DOCUMENT_ROOT']."/$SPATH";
//файл конфигурации
include "$SPATH_MOD/cfg.php";
?>
<html><head>
<meta http-equiv="Content-Type" content="text/html; CHARSET=Windows-1251">
</head>
<body topmargin="0" leftmargin="0" bgcolor=dce6e6>
<br><u>Загрузить файл:</u><br><br>
<form action=http://<? print $_SERVER['HTTP_HOST']."/".$SPATH; ?>/upload.php method="post" enctype="multipart/form-data">
<input type="file" name="filename">
<input type="submit" name=act value="Загрузить">
</form>
<?
if (isset($_GET['fname']))    $fname=$_GET['fname'];
if (isset($_GET['error_ID'])) $error_ID=$_GET['error_ID'];
if (isset($_GET['upload_done'])) $upload_done=$_GET['upload_done'];

//показ ошибки (зависит от переменной $error_ID)
switch (@$error_ID){
case ("0"):
print "<b>Ошибка:</b> Размер файла не должен превышать ".round($MAX_SIZE/1000, 2)." КБ !";
break;
case ("1"):
print "<b>Ошибка:</b> Загрузка данного типа файла невозможна!";

switch ($_SESSION['foto'])
{
	case ("monitor"):
    $q1=mysql_query("SELECT * FROM f_monitor WHERE id_monitor='".$_SESSION['id_monitor']."'");
    if (mysql_result($q1, 0, 'foto_monitor')!='0')
    {
    unlink ("../".$DIRECTORY."/".mysql_result($q1, 0, 'foto_monitor'));
    unlink ("../".$DIRECTORY."/mini_".mysql_result($q1, 0, 'foto_monitor'));
    }
    mysql_query("UPDATE f_monitor SET foto_monitor='0' WHERE id_monitor='".$_SESSION['id_monitor']."'");
    break;
	case ("sysunit"):
    $q1=mysql_query("SELECT * FROM f_sysunit WHERE id_sysunit='".$_SESSION['id_sysunit']."'");
    if (mysql_result($q1, 0, 'foto_sysunit')!='0')
    {
    unlink ("../".$DIRECTORY."/".mysql_result($q1, 0, 'foto_sysunit'));
    unlink ("../".$DIRECTORY."/mini_".mysql_result($q1, 0, 'foto_sysunit'));
    }
    mysql_query("UPDATE f_sysunit SET foto_sysunit='0' WHERE id_sysunit='".$_SESSION['id_sysunit']."'");
    break;

	case ("printer"):
    $q1=mysql_query("SELECT * FROM f_printer WHERE id_printer='".$_SESSION['id_printer']."'");
    if (mysql_result($q1, 0, 'foto_printer')!='0')
    {
    unlink ("../".$DIRECTORY."/".mysql_result($q1, 0, 'foto_printer'));
    unlink ("../".$DIRECTORY."/mini_".mysql_result($q1, 0, 'foto_printer'));
    }
    mysql_query("UPDATE f_printer SET foto_printer='0' WHERE id_printer='".$_SESSION['id_printer']."'");
    break;
	case ("ups"):
    $q1=mysql_query("SELECT * FROM f_ups WHERE id_ups='".$_SESSION['id_ups']."'");
    if (mysql_result($q1, 0, 'foto_ups')!='0')
    {
    unlink ("../".$DIRECTORY."/".mysql_result($q1, 0, 'foto_ups'));
    unlink ("../".$DIRECTORY."/mini_".mysql_result($q1, 0, 'foto_ups'));
    }
    mysql_query("UPDATE f_ups SET foto_ups='0' WHERE id_ups='".$_SESSION['id_ups']."'");
    break;
	case ("scaner"):
    $q1=mysql_query("SELECT * FROM f_scaner WHERE id_scaner='".$_SESSION['id_scaner']."'");
    if (mysql_result($q1, 0, 'foto_scaner')!='0')
    {    unlink ("../".$DIRECTORY."/".mysql_result($q1, 0, 'foto_scaner'));
    unlink ("../".$DIRECTORY."/mini_".mysql_result($q1, 0, 'foto_scaner'));
    }
    mysql_query("UPDATE f_scaner SET foto_scaner='0' WHERE id_scaner='".$_SESSION['id_scaner']."'");
    break;
}

break;
case ("2"):
print "<b>Ошибка:</b> Невозможно загрузить файл! Проверьте настройки скрипта и конфигурацию сервера.";
break;
}
//если файл загружен и ошибки отсутсвуют...
if (isset($upload_done) and !isset($error_ID) and isset($fname))
{
	if (file_exists("".$_SERVER['DOCUMENT_ROOT']."/$DIRECTORY/$fname"))
	{
	echo "Спасибо, файл успешно загружен<br>
	<a href=http://".$_SERVER["HTTP_HOST"]."/$DIRECTORY/$fname target=_blank>Изображение</a>
	<br>
	<a href=http://".$_SERVER["HTTP_HOST"]."/$DIRECTORY/mini_$fname target=_blank>Thumb изображение</a></center>";

switch ($_SESSION['foto']){
	case ("monitor"):
    mysql_query("UPDATE f_monitor SET foto_monitor='".$fname."' WHERE id_monitor='".$_SESSION['id_monitor']."'");
    break;
	case ("sysunit"):
    mysql_query("UPDATE f_sysunit SET foto_sysunit='".$fname."' WHERE id_sysunit='".$_SESSION['id_sysunit']."'");
    break;
	case ("printer"):
    mysql_query("UPDATE f_printer SET foto_printer='".$fname."' WHERE id_printer='".$_SESSION['id_printer']."'");
    break;
	case ("ups"):
    mysql_query("UPDATE f_ups SET foto_ups='".$fname."' WHERE id_ups='".$_SESSION['id_ups']."'");
    break;
	case ("scaner"):
    mysql_query("UPDATE f_scaner SET foto_scaner='".$fname."' WHERE id_scaner='".$_SESSION['id_scaner']."'");
    break;
}
} else print "<b>Ошибка:</b> файла не существует!";
}

switch ($_SESSION['foto']){
	case ("monitor"):
    echo "<br><a href=http://".$_SERVER["HTTP_HOST"]."/edit_f_monitor.php>Exit</a>";
    break;
	case ("sysunit"):
    echo "<br><a href=http://".$_SERVER["HTTP_HOST"]."/edit_f_sysunit.php>Exit</a>";
    break;
	case ("printer"):
    echo "<br><a href=http://".$_SERVER["HTTP_HOST"]."/edit_f_printer.php>Exit</a>";
    break;
	case ("ups"):
    echo "<br><a href=http://".$_SERVER["HTTP_HOST"]."/edit_f_ups.php>Exit</a>";
    break;
	case ("scaner"):
    echo "<br><a href=http://".$_SERVER["HTTP_HOST"]."/edit_f_scaner.php>Exit</a>";
    break;
}
?>
</body>
</html>