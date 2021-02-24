
$kazan_rar = "243434"
$rostov_rar = ""
$ufa_rar = ""
$voronenezh_rar = ""

$kazan_rar = "KZN_20210117_01.RAR"
Start-Process -FilePath "powershell" -arg " -file base_kazan.ps1 ${kazan_rar}" -Wait
echo "Kazan"

$kazan_rar = "KZN_20210124_01.RAR"
Start-Process -FilePath "powershell" -arg " -file base_kazan.ps1 ${kazan_rar}" -Wait
echo "Kazan"

$kazan_rar = "KZN_20210131_01.RAR"
Start-Process -FilePath "powershell" -arg " -file base_kazan.ps1 ${kazan_rar}" -Wait
echo "Kazan"

$kazan_rar = "KZN_20210207_01.RAR"
Start-Process -FilePath "powershell" -arg " -file base_kazan.ps1 ${kazan_rar}" -Wait
echo "Kazan"

$kazan_rar = "KZN_20210214_01.RAR"
Start-Process -FilePath "powershell" -arg " -file base_kazan.ps1 ${kazan_rar}" -Wait
echo "Kazan"




<#
Start-Process -FilePath "powershell" -arg " -file base_kazan.ps1 ${rostov_rar}" -Wait
echo "Rostov"
Start-Process -FilePath "powershell" -arg " -file base_kazan.ps1 ${ufa_rar}" -Wait
echo "Ufa"
Start-Process -FilePath "powershell" -arg " -file base_kazan.ps1 ${voronenezh_rar}" -Wait
echo "Voronenezh"
#>