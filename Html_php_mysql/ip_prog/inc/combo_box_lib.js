function showlist(combonum,pkey)
{
if (pkey != 13)
{
var ndiv = 0;
var varsnum = combonum-1;
var itemid = "comboinput"+combonum;
var ocomboinput =  document.getElementById(itemid);
itemid = "combobox"+combonum;
var ocombobox = document.getElementById(itemid);
var oitem;
if (ocomboinput.value.length > 0)
{
var n = 0;
var liststr;
for (i=1; i<6; i++)
{
itemid = "comboitem"+combonum+"_"+i;
oitem = document.getElementById(itemid);
liststr = "";
while (n<(comboitemlist[varsnum].length-1) && comboitemlist[varsnum][n].substr(0,ocomboinput.value.length).toLowerCase() != ocomboinput.value.toLowerCase())
{
n++;
};
if (n<(comboitemlist[varsnum].length))
{
if (comboitemlist[varsnum][n].substr(0,ocomboinput.value.length).toLowerCase() == ocomboinput.value.toLowerCase())
{
liststr = comboitemlist[varsnum][n];
ndiv++;
n++;
};
};
oitem.innerHTML = liststr;
oitem.style.color = "#000000";
};
if (ndiv > 0)
{
ocombobox.style.display = "block";
};
} else {
ocombobox.style.display = "none";
};
};
return true;
};

function selectitems(combonum,itid,pkey,formid)
{
var varsnum = combonum-1;
if (itid == 0 && pkey == 40)
{
comboitemselect[varsnum] = 1;
};
if (itid == 1 && pkey == 40 && comboitemselect[varsnum] == 1)
{
itid = 0;
comboitemselect[varsnum] = 0;
};
var itemid = "combobox"+combonum;
var ocombobox = document.getElementById(itemid);
itemid = "comboinput"+combonum;
var ocomboinput =  document.getElementById(itemid);
if (ocombobox.style.display == "block")
{
var prkey = pkey;
if (pkey == 40 && itid < 5)
{
itid = itid+1;
var prkey = 39;
};
if (pkey == 38 && itid > 0)
{
itid = itid-1;
var prkey = 39;
};
if (prkey == 39)
{
var oitem;
for (i=1; i<6; i++)
{
itemid = "comboitem"+combonum+"_"+i;
oitem = document.getElementById(itemid);
oitem.style.color = "#000000";
};
if (itid == 0)
{
ocomboinput.focus();
} else {
itemid = "comboitem"+combonum+"_"+itid;
oitem = document.getElementById(itemid);
oitem.focus();
oitem.style.color = "#777777";
};
};
if (prkey == 13 && itid > 0)
{
itemid = "comboitem"+combonum+"_"+itid;
oitem = document.getElementById(itemid);
ocomboinput.value = oitem.innerHTML;
ocomboinput.focus();
ocombobox.style.display = "none";
var oform = document.getElementById(formid);
oform.submit();
};
};
return true;
};

function clickitem(combonum,itid,formid)
{
var itemid = "comboitem"+combonum+"_"+itid;
var oitem = document.getElementById(itemid);
itemid = "comboinput"+combonum;
var ocomboinput =  document.getElementById(itemid);
itemid = "combobox"+combonum;
var ocombobox = document.getElementById(itemid);
ocomboinput.value = oitem.innerHTML;
ocomboinput.focus();
ocombobox.style.display = "none";
var oform = document.getElementById(formid);
oform.submit();
return true;
};
