<? session_start();
   require ('inc/sql_connect.inc');

if (isset($_POST['new']))
   mysql_query("INSERT INTO f_sysunit SET n_sysunit='".$_POST['n_sysunit']."' ");

 if (isset($_POST['delete']))
   {                               $_POST['id_sysunit']=$_SESSION['id_sysunit'];
   $q1=mysql_query("SELECT * FROM f_sysunit WHERE id_sysunit='".$_SESSION['id_sysunit']."'");
    if (mysql_result($q1, 0, 'foto_sysunit')!='0')
    {
    unlink ("../".$DIRECTORY."/".mysql_result($q1, 0, 'foto_sysunit'));
    unlink ("../".$DIRECTORY."/mini_".mysql_result($q1, 0, 'foto_sysunit'));
    }
    mysql_query("DELETE FROM f_sysunit WHERE id_sysunit='".$_SESSION['id_sysunit']."'");
    mysql_query("DELETE FROM sn_sysunit WHERE id_sysunit='".$_SESSION['id_sysunit']."'");
   }
 if (isset($_POST['exit'])) $_POST['id_sysunit']=$_SESSION['id_sysunit'];
?>
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=WINDOWS-1251" />
<link href="style.css"  rel="stylesheet" type="text/css" />
<STYLE type=text/css>
#slide {
Position: Absolute;
Left: 0; Top: 0;
Visibility: Visible;
}
</STYLE>

<script src="/inc/menu.js"></script>
</head>

<body topmargin="0" leftmargin="0" bgcolor=dce6e6>
<span ID="slide">

 <table border="0" cellspacing="0" cellpadding="0" border="0">
  <tr align="left" valign="middle" height="20">

<form action="index.php" method=post>
  <td width="107"><input type="submit" name="a" value="�����"></td>
</form>

<form action="edit_f_sysunit.php" method=post>

<td width="107">
<input type="submit" name="add_new" value="��������"></td>

  <td width="440"></td>
<td width="107">
</form>

<form action="print_pr.php" method=post>
<input type="submit" name="add_new" value="�����������"></td>
</form>

</tr>
</table>
</span>
</form>

<?
  $q1=mysql_query("SELECT * FROM f_sysunit
  WHERE '".$_SESSION['admin']."'=0 Order By n_sysunit");
   $row=mysql_num_rows($q1);
       echo '&nbsp';
  ob_start ();
?>
<table border="2"  cellspacing="1">

<tr><td colspan="3" align="center"><font size="4">������ ������� ��������� ������</font></td></tr>
<tr>
<td align="center"><font size="4">�</font></td>
<td align="center"><font size="4">������ ���������� �����</font></td>

<td align="center"><font size="4">����</font></td>
</tr>

<?
  for ($i=0; $i<$row; $i++)
{
echo '<tr>';
echo '<td align="left"><font size="4">'.($i+1).'</font></td>';

echo '<td align="left"><a href="edit_f_sysunit.php?id_sysunit='.mysql_result($q1, $i, 'id_sysunit').'">
<font size="4">'.mysql_result($q1, $i, 'n_sysunit').'</font></a></td>';

echo '<td align="left">';
if (mysql_result($q1, $i, 'foto_sysunit')!='0')
echo '<a href="f_foto&#092;'.mysql_result($q1, $i, 'foto_sysunit').'"
target="_blank"><img src="f_foto&#092;mini_'.mysql_result($q1, $i, 'foto_sysunit').'"></a>';
echo '</td>';
echo '</tr>';
}
echo '</table>';
$_SESSION['buffer']=ob_get_contents();
?>
</body>
</html>