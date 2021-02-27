<?
/********************************************/
/*Welcome to Upload IMG source-code!*/
/*The Upload IMG and its functions, contexture are copyrighted by s1ayer [www.spg.arbse.net]*/
/*Current file: upload.php*/
/*Optimized for PHP 4.3.6, Apache 1.3.27*/
/********************************************/
include "cfg.php";
if (!ereg("\?", $RELOAD)) $z="?"; else $z="";

$DIRECTORY = $_SERVER["DOCUMENT_ROOT"]."/".$DIRECTORY;
	if ($_FILES["filename"]["size"] > $MAX_SIZE)
	{
header("Location: $RELOAD$z&error_ID=0");
exit;
	}
	if (!in_array($_FILES["filename"]["type"], $FILE_TYPES))
	{header("Location: $RELOAD$z&error_ID=1");
exit;
	}
	$fname = "".time()."_".$_FILES["filename"]["name"]."";
	if (@move_uploaded_file($_FILES["filename"]["tmp_name"], "$DIRECTORY/$fname"))
		{
$filename = "".$DIRECTORY."/".$fname."";
list($width, $height) = getimagesize($filename);
$newwidth = $WIDTH;
$newheight = $HEIGHT;
$thumb = imagecreatetruecolor($newwidth, $newheight);
$source = imagecreatefromjpeg($filename);
imagecopyresized($thumb, $source, 0, 0, 0, 0, $newwidth, $newheight, $width, $height);
imagejpeg($thumb, "".$DIRECTORY."/mini_".$fname."");
header ("Location: $RELOAD$z&upload_done&fname=$fname");
		}
	else
	{header("Location: $RELOAD$z&error_ID=2");
exit;
	}
?>