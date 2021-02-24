
$file_rar = $args[0]
$mdb = "Vor21.mdb"
$load_mdb = "Vor21load.mdb"
$base ="Voronezh"         # название подпапки для ftp и папка для закачки
$data = "data_voronezh"   # папка на сервере

$download_url = "ftp://ftp4.adfact.ru/TV_Index/Regions/"+$base+ "/"+$file_rar
$local_path = "C:\mars30\Auto_update_base\"+$base+ "\"+$file_rar
$user = "********"
$pass = "********"


$WebClient = New-Object System.Net.WebClient 
$WebClient.Credentials = New-Object System.Net.NetworkCredential($user, $pass)
$WebClient.DownloadFile($download_url, $local_path)

Get-ChildItem "C:\mars30\Dataload" -recurse | Remove-Item -Force -Recurse   # delete all in C:\mars30\Dataload

Copy-Item -Path "C:\mars30\Data\${mdb}" -Destination "C:\mars30\Data\OLD\${mdb}" -Force

set-alias sz "$env:ProgramFiles\7-Zip\7z.exe" 
sz x -r $local_path -oC:\mars30\Dataload\

Write-Host("Step 1")

Start-Process -FilePath "C:\mars30\Datmngr4_0\datmngr.exe" -arg "C:\ProgramData\DataManager\datmngr.INI ${base}" -Wait  # запустить Datmngr4_0

Write-Host("Step 2")

$real = Test-Path -Path "U:\MARS30\${data}\Real\"
if( "True" -ne $real) { New-Item -Path "U:\MARS30\${data}\Real" -ItemType Directory }
Copy-Item -Path "C:\mars30\Dataload\Real\*" -Destination "U:\MARS30\${data}\Real" -Force
$techReal = Test-Path -Path "U:\MARS30\${data}\TechReal\"
if( "True" -ne $techReal) { New-Item -Path "U:\MARS30\${data}\TechReal" -ItemType Directory }
Copy-Item -Path "C:\mars30\Dataload\TechReal\*" -Destination "U:\MARS30\${data}\TechReal" -Force
$survey = Test-Path -Path "U:\MARS30\${data}\Survey\"
if( "True" -ne $survey) { New-Item -Path "U:\MARS30\${data}\Survey" -ItemType Directory }
Copy-Item -Path "C:\mars30\Dataload\Survey\*" -Destination "U:\MARS30\${data}\Survey" -Force

Copy-Item -Path "C:\mars30\Data\Load\${load_mdb}" -Destination "C:\mars30\Data\${mdb}" -Force
Copy-Item -Path "C:\mars30\Data\${mdb}" -Destination "U:\MARS30\${data}\db\${mdb}" -Force

Write-Host("Step 3")