<?php
$comboboxes = 2;
$combobox[1]['font-size'] = '14';
$combobox[1]['width'] = '200';
$combobox[1]['top'] = '4';
$combobox[1]['dbtable'] = 'myDBtable1';
$combobox[1]['dbfield'] = 'myDBfield1';
$combobox[2]['font-size'] = '20';
$combobox[2]['width'] = '300';
$combobox[2]['top'] = '100';
$combobox[2]['dbtable'] = 'myDBtable2';
$combobox[2]['dbfield'] = 'myDBfield2';

echo '<style>
';
for ($i=1; $i<=$comboboxes; $i++)
{
echo '
input.combo'. $i. ' {
width: '. $combobox[$i]['width']. 'px;
font-size: '. $combobox[$i]['font-size']. 'px;
}
div.combobox'. $i. ' {
display: none;
background-color: rgb(244,244,244);
width: '. ($combobox[$i]['width']-2). 'px;
border-width: 1px;
border-style: solid;
position: absolute;
top: '. ($combobox[$i]['top']+$combobox[$i]['font-size']+8). 'px;
z-index: 999;
}
div.comboitem'. $i. ' {
color: rgb(0,0,0);
font-size: '. $combobox[$i]['font-size']. 'px;
font-family: arial;
}
td.comboline'. $i. ' {
width: '. $combobox[$i]['width']. 'px;
height: '. ($combobox[$i]['font-size']+8). 'px;
}
td.combolist'. $i. ' {
width: '. $combobox[$i]['width']. 'px;
height: 1px;
}
';
};
echo '</style>

<script language="JavaScript">
var comboitemselect = new Array();
var comboitemlist = new Array();
';
for ($j=0; $j<=($comboboxes-1); $j++)
{
echo '
comboitemselect['. $j. '] = 0;
comboitemlist['. $j. '] = new Array(';

$array = mysql_query('SELECT * FROM '. $combobox[$j+1]['dbtable']);
$array_c = mysql_num_rows($array);

for ($i=0; $i<($array_c-1); $i++)
{
$dbstring = mysql_result($array,$i,$combobox[$j+1]['field']);
echo '
"'. $dbstring. '",';
};
$dbstring = mysql_result($array,($array_c-1),$combobox[$j+1]['field']);

echo '
"'. $dbstring. '"
);
';
};
echo '</script>
<script type="text/javascript" src="combobox/combo_box_lib.js"></script>
';

function createcombobox($combonum,$name,$value,$formid)
{
$quote = "'";
$combotext = '
<table border="0" cellpadding="0" cellspacing="0">
<tr class="comboline'. $combonum. '"><td>
<input type=text name="'. $name. '" id="comboinput'. $combonum. '" value="'. $value. '" class="combo'. $combonum. '" onKeyUp="showlist('. $combonum. ',event.keyCode)" onKeyDown="selectitems('. $combonum. ',0,event.keyCode,'. $quote. $quote. ')"/>
</td></tr>
<tr class="combolist'. $combonum. '"><td>
<div id="combobox'. $combonum. '" class="combobox'. $combonum. '">
';
for ($i=1; $i<6; $i++)
{
$combotext = $combotext. '<div class="comboitem'. $combonum. '" tabIndex="0" id="comboitem'. $combonum. '_'. $i. '" onKeyUp="selectitems('. $combonum. ','. $i. ',event.keyCode,'. $quote. $formid. $quote. ')" onClick="clickitem('. $combonum. ','. $i. ','. $quote. $formid. $quote. ')"></div>
';
};
$combotext = $combotext. '
</div>
</td></tr>
</table>
';
return $combotext;
};

?>