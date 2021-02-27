#Адрес сервера SMTP для отправки
$serverSmtp = "smtp.rambler.ru"
#Порт сервера
$port = 25 #465
#От кого
$From = "****@rambler.ru"
#Кому
$To = "****s@rambler.ru"
#Тема письма
$subject = $args[0]
#Логин и пароль от ящики с которого отправляете login@yandex.ru
$user = "****"
$pass = "****"
#Путь до файла
#$file = "time.ps1"

#Создаем два экземпляра класса
#$att = New-object Net.Mail.Attachment($file)
$mes = New-Object System.Net.Mail.MailMessage

#Формируем данные для отправки
$mes.From = $from
$mes.To.Add($to)
$mes.Subject = $subject
$mes.IsBodyHTML = $true
$mes.Body ="<h4>" + $args[1] + "</h4>" 

#Добавляем файл
#$mes.Attachments.Add($att)

#Создаем экземпляр класса подключения к SMTP 
$smtp = New-Object Net.Mail.SmtpClient($serverSmtp, $port)


#Сервер использует SSL
$smtp.EnableSSL = $true

#Создаем экземпляр класса для авторизации на сервере яндекса
$smtp.Credentials = New-Object System.Net.NetworkCredential($user, $pass);

#Отправляем письмо, освобождаем память
$smtp.Send($mes)
#$att.Dispose()
# Start-Sleep -Seconds 10
