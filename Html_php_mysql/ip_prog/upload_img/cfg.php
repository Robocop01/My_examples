<?
/********************************************/
/*Welcome to Upload IMG source-code!*/
/*The Upload IMG and its functions, contexture are copyrighted by s1ayer [www.spg.arbse.net]*/
/*Current file: script.php*/
/*Optimized for PHP 4.3.6, Apache 1.3.27*/
/********************************************/
$MAX_SIZE = 512000; //максимальный размер загружаемого файла (в байтах)
$WIDTH = 150; //ширина thumb- файла (в пикселях)
$HEIGHT = 113; //высота thumb- файла (в пикселях)
$DIRECTORY = "f_foto"; //директория загрузки (следуя из корня)
$FILE_TYPES = array ("image/pjpeg", "image/jpeg"); //разрешенные типы загружаемых  файлов. ВНИМАНИЕ: в данной версии скрипта рекомендуется загружать только JPEG- файлы
$RELOAD = "../upload_img/script.php"; //страница, на которой находится форма загрузки
?>