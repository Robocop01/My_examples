#����� ������� SMTP ��� ��������
$serverSmtp = "smtp.rambler.ru"
#���� �������
$port = 25 #465
#�� ����
$From = "****@rambler.ru"
#����
$To = "****s@rambler.ru"
#���� ������
$subject = $args[0]
#����� � ������ �� ����� � �������� ����������� login@yandex.ru
$user = "****"
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
$mes.Body ="<h4>" + $args[1] + "</h4>" 

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
#$att.Dispose()
# Start-Sleep -Seconds 10
