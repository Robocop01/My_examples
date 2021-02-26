
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


#Адрес сервера SMTP для отправки
$serverSmtp = "smtp.rambler.ru"
#Порт сервера
$port = 25 #465
#От кого
$From = "***@rambler.ru"
#Кому
$To = "***@ctcmedia.ru"
#Тема письма
$subject = "Update_Polomars"
#Логин и пароль от ящики с которого отправляете login@yandex.ru
$user = "login"
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
 
$mes.Body = "<h4>" + $kazan_rar + "<br />" + $rostov_rar + "<br />" + $ufa_rar + "<br />" + $voronezh_rar + "</h4>"

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
$att.Dispose()
