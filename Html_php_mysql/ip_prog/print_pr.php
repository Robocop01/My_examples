<? session_start();
header ("Content-type: application/msword");
header ("Content-Diposition: attachment; filename=ttt.doc");
echo $_SESSION['buffer'];
exit();
?>