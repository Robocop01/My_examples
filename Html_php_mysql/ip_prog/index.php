<? session_start();
header('Content-type: text/html; charset=WINDOWS-1251');
   require ('inc/authorization.inc');
   ?>
<html>

<head>
<title>���� ������������� ���������</title>
</head>

<body>

<table border="3">
<tr bgcolor="#00FFFF">
<td align="center" colspan="3"><font size="6">���� ����. ������ � ��������</font></td>
</tr>

<tr>
<td valign="top">
<table>
<tr>
<td align="center">
<font size="4">������ �������</font>
</td>
</tr>
<tr>
<td>
<a href="1_1.htm" class="blank"><font size="4">1.1 ������� ����� (������������)</font></a>
</td>
</tr>
<tr>
<td>
<a href="1_2.php" class="blank"><font size="4">1.2 ������� �����</font></a>
</td>
</tr>
<tr>
<td>
<a href="1_3.php" class="blank"><font size="4">1.3 ������������ �������</font></a>
</td>
</tr>
<tr>
<td>
<a href="1_4.php" class="blank"><font size="4">1.4 ���������</font></a>
</td>
</tr>
</table>
</td>

<td valign="top">
<table>
<tr>
<td align="center">
<font size="4">�������������� ������� ������</font>
</td>
</tr>
<tr>
<td>
<a href="2_3s.php" class="blank"><font size="4">2.3 �������� S/N</font></a>
</td>
</tr>
<tr>
<td>
<a href="2_4s.php" class="blank"><font size="4">2.4 ��������� ����� S/N</font></a>
</td>
</tr>
<tr>
<td>
<a href="2_5s.php" class="blank"><font size="4">2.5 �������� � ��� S/N</font></a>
</td>
</tr>
<tr>
<td>
<a href="2_6s.php" class="blank"><font size="4">2.6 UPS S/N</font></a>
</td>
</tr>
<tr>
<td>
<a href="2_7s.php" class="blank"><font size="4">2.7 ������� S/N</font></a>
</td>
</tr>
<tr>
<td>
<a href="2_1.php" class="blank"><font size="4">2.1 ����/�����/IP</font></a>
</td>
</tr>
</table>
</td>

<td valign="top">
<? if ($_SESSION['admin']==0) { ?>
<table>
<tr>
<td align="center">
<font size="4">�������������� �������� ������</font>
</td>
</tr>
<tr>
<td>
<a href="2_001.php" class="blank"><font size="4">2.001 ������������</font></a>
</td>
</tr>
<tr>
<td>
<a href="2_0.php" class="blank"><font size="4">2.0 �������</font></a>
</td>
</tr>
<tr>
<td>
<a href="2_01.php" class="blank"><font size="4">2.01 ����������� ���</font></a>
</td>
</tr>
<tr>
<td>
<a href="2_011.php" class="blank"><font size="4">2.011 �������� ���. � �������</font></a>
</td>
</tr>
<tr>
<td>
<a href="2_02.php" class="blank"><font size="4">2.02 �����</font></a>
</td>
</tr>
<tr>
<td>
<a href="2_03.php" class="blank"><font size="4">2.03 ������</font></a>
</td>
</tr>
<tr>
<td>
<a href="2_2.php" class="blank"><font size="4">2.2 ���������</font></a>
</td>
</tr>
<tr>
<td>
<a href="2_3.php" class="blank"><font size="4">2.3 ��������</font></a>
</td>
</tr>
<tr>
<td>
<a href="2_4.php" class="blank"><font size="4">2.4 ��������� �����</font></a>
</td>
</tr>
<tr>
<td>
<a href="2_5.php" class="blank"><font size="4">2.5 �������� � ���</font></a>
</td>
</tr>
<tr>
<td>
<a href="2_6.php" class="blank"><font size="4">2.6 UPS</font></a>
</td>
</tr>
<tr>
<td>
<a href="2_7.php" class="blank"><font size="4">2.7 �������</font></a>
</td>
</tr>
</table>
<? } ?>
</td>
</tr>

</table>

<a href="index.php?logout">�����</a>
</body>

</html>