
switch ([Int] (Get-Date).DayOfWeek) {
0 { $data_update = (Get-Date).AddDays(0).ToShortDateString()  }
1 { $data_update = (Get-Date).AddDays(-1).ToShortDateString() }
2 { $data_update = (Get-Date).AddDays(-2).ToShortDateString() }
3 { $data_update = (Get-Date).AddDays(-3).ToShortDateString() }
4 { $data_update = (Get-Date).AddDays(-4).ToShortDateString() }
5 { $data_update = (Get-Date).AddDays(-5).ToShortDateString() }
6 { $data_update = (Get-Date).AddDays(-6).ToShortDateString() }
}

$kazan_rar =    "KZN_" + $data_update.Substring(6,4) + $data_update.Substring(3,2) + $data_update.Substring(0,2) + "_01.RAR"
echo $kazan_rar

$rostov_rar =   "ROS_" + $data_update.Substring(6,4) + $data_update.Substring(3,2) + $data_update.Substring(0,2) + "_01.RAR"
echo $rostov_rar

$ufa_rar =      "UFA_" + $data_update.Substring(6,4) + $data_update.Substring(3,2) + $data_update.Substring(0,2) + "_01.RAR"
echo $ufa_rar

$voronezh_rar = "VOR_" + $data_update.Substring(6,4) + $data_update.Substring(3,2) + $data_update.Substring(0,2) + "_01.RAR"
echo $voronezh_rar

<#
$kazan_rar = "KZN_20210117_01.RAR"
Start-Process -FilePath "powershell" -arg " -file base_kazan.ps1 ${kazan_rar}" -Wait
echo "Kazan"

$kazan_rar = "KZN_20210124_01.RAR"
Start-Process -FilePath "powershell" -arg " -file base_kazan.ps1 ${kazan_rar}" -Wait
echo "Kazan"
#>

Start-Process -FilePath "powershell" -arg " -file base_kazan.ps1 ${kazan_rar}" -Wait
echo "Kazan"
Start-Process -FilePath "powershell" -arg " -file base_rostov.ps1 ${rostov_rar}" -Wait
echo "Rostov"
Start-Process -FilePath "powershell" -arg " -file base_ufa.ps1 ${ufa_rar}" -Wait
echo "Ufa"
Start-Process -FilePath "powershell" -arg " -file base_voronezh.ps1 ${voronezh_rar}" -Wait
echo "Voronezh"


#����� ������� SMTP ��� ��������
$serverSmtp = "smtp.rambler.ru"
#���� �������
$port = 25 #465
#�� ����
$From = "***@rambler.ru"
#����
$To = "***@ctcmedia.ru"
#���� ������
$subject = "Update_Polomars"
#����� � ������ �� ����� � �������� ����������� login@yandex.ru
$user = "login"
$pass = "****"
#���� �� �����
#$file = "time.ps1"

#������� ��� ���������� ������
#$att = New-object Net.Mail.Attachment($file)
$mes = New-Object System.Net.Mail.MailMessage

#��������� ������ ��� ��������
$mes.From = $from
$mes.To.Add($to)
$mes.Subject = $subject
$mes.IsBodyHTML = $true
 
$mes.Body = "<h4>" + $kazan_rar + "<br />" + $rostov_rar + "<br />" + $ufa_rar + "<br />" + $voronezh_rar + "</h4>"

#��������� ����
#$mes.Attachments.Add($att)

#������� ��������� ������ ����������� � SMTP 
$smtp = New-Object Net.Mail.SmtpClient($serverSmtp, $port)

#������ ���������� SSL
$smtp.EnableSSL = $true

#������� ��������� ������ ��� ����������� �� ������� �������
$smtp.Credentials = New-Object System.Net.NetworkCredential($user, $pass);

#���������� ������, ����������� ������
$smtp.Send($mes)
$att.Dispose()
