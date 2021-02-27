<?
header('Content-type: text/html; charset=cp866');
exec("ping '".$_GET['n_ping']."'", $out, $ret);
    foreach ($out as $line)
        echo trim($line) . "<br/>" . PHP_EOL;
?>
<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />