//---------------------------------------------------------------------------
#include <vcl\condefs.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <dos.h>
#include <iostream.h>
#include <conio.h>
#include <math.h>

#pragma hdrstop

int a=0, b=0, c=0, d=0, aa, bb, cc, dd, col=0, i=1;

int // окр. позиции
p1=0, p2=0, p3=0, p4=0, p5=0, p6=0, p7=0, p8=0, p9=0, p10=0,
p11=0,p12=0,p13=0,p14=0,p15=0,p16=0,p17=0,p18=0,p19=0,p20=0,
p21=0,p22=0,p23=0,p24=0,p25=0,p26=0,p27=0,p28=0,p29=0,p30=0,
p31=0,p32=0;


int main(int argc, char **argv)
{
printf("Proba\n");
col=3;
aa=10;
bb=12;
cc=10;

for (p1=1; p1<=col; p1++)
for (p2=1; p2<=col; p2++)
for (p3=1; p3<=col; p3++)
for (p4=1; p4<=col; p4++)
for (p5=1; p5<=col; p5++)
for (p6=1; p6<=col; p6++)
{

// центральный:
if (p1+p2+p3+p4+p5+p6!=12) continue;

 a=0; b=0; c=0;
switch (p1){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p2){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p3){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p4){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p5){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p6){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}


 if ( a>aa || b>bb || c>cc )  continue;
   // {printf("III  %d %d %d\n", a, b, c);  cin >> cc;  }

for (p7=1; p7<=col; p7++)
for (p8=1; p8<=col; p8++)
for (p18=1; p18<=col; p18++)
for (p19=1; p19<=col; p19++)
{
if (p3+p18+p1+p7+p19+p8!=12 ) continue;

for (p9=1; p9<=col; p9++)
for (p10=1; p10<=col; p10++)
for (p16=1; p16<=col; p16++)
{
if (p5+p16+p1+p9+p19+p10!=12) continue;


for (p13=1; p13<=col; p13++)
for (p21=1; p21<=col; p21++)
for (p14=1; p14<=col; p14++)
{
if (p3+p18+p6+p14+p21+p13!=12) continue;

for (p12=1; p12<=col; p12++)
for (p11=1; p11<=col; p11++)
{
 if (p5+p16+p6+p12+p21+p11!=12) continue;
  a=0; b=0; c=0;
switch (p1){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p2){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p3){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p4){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p5){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p6){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p7){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p8){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p9){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p10){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p11){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p12){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p13){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p14){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p19){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p16){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p21){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;} 
switch (p18){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
if ( a>aa || b>bb || c>cc ) continue;

for (p15=1; p15<=col; p15++)
for (p17=1; p17<=col; p17++)
for (p20=1; p20<=col; p20++)
for (p22=1; p22<=col; p22++)
for (p23=1; p23<=col; p23++)
for (p24=1; p24<=col; p24++)
for (p25=1; p25<=col; p25++)
for (p26=1; p26<=col; p26++)
{
 if (p3+p5+p19+p20+p21+p22!=12 || p1+p6+p15+p16+p17+p18!=12 || p2+p4+p23+p24+p25+p26!=12) continue;
   a=0; b=0; c=0;
switch (p1){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p2){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p3){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p4){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p5){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p6){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p7){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p8){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p9){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p10){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p11){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p12){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p13){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p14){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p15){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p16){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p17){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p18){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p19){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p20){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p21){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p22){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p23){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p24){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p25){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p26){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}

if ( a>aa || b>bb || c>cc ) continue;


for (p27=1; p27<=col; p27++)
for (p28=1; p28<=col; p28++)
for (p29=1; p29<=col; p29++)
for (p30=1; p30<=col; p30++)
for (p31=1; p31<=col; p31++)
for (p32=1; p32<=col; p32++)
{

 a=0; b=0; c=0;
switch (p1){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p2){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p3){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p4){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p5){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p6){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p7){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p8){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p9){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p10){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p11){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p12){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p13){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p14){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p15){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p16){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p17){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p18){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p19){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p20){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p21){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p22){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p23){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p24){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p25){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p26){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p27){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p28){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p29){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p30){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p31){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}
switch (p32){case 1: a=a+1; break; case 2: b=b+1; break; case 3: c=c+1;}


if ( a>aa || b>bb || c>cc ) continue;
 //if (i==1000000 || i==160000000 || i==320000000 || i==640000000) printf("III %d\n", i);
 //  { printf("III %d   %d %d %d\n", i++, a, b, c);  cin >> cc; }

      // Три граневых:
if (p3+p5+p19+p20+p21+p22!=12 || p1+p6+p15+p16+p17+p18!=12 || p2+p4+p23+p24+p25+p26!=12) continue;

// Вершинный октаэдр: 
if (p27+p28+p29+p31+p30+p32!=12) continue;

// Три реберных октаэдра:
if (p16+p18+p19+p29+p21+p30!=12 || p15+p17+p23+p27+p25+p28!=12 || p20+p22+p24+p31+p26+p32!=12) continue;

// Четыре октаэдра1:
if (p3+p18+p1+p7+p19+p8!=12 || p5+p16+p1+p9+p19+p10!=12 || p3+p18+p6+p14+p21+p13!=12 || p5+p16+p6+p12+p21+p11!=12) continue;

// Четыре октаэдра2:
if (p2+p17+p1+p10+p23+p7!=12 || p4+p15+p1+p8+p23+p9!=12 || p2+p17+p6+p11+p25+p14!=12 || p4+p15+p6+p13+p25+p12!=12) continue;

// Четыре октаэдра:
if (p7+p14+p2+p26+p20+p3!=12 || p8+p13+p3+p22+p26+p4!=12 || p9+p12+p4+p24+p22+p5!=12 || p10+p11+p2+p5+p20+p24!=12) continue;

// Четыре граневых октаэдра:
if (p7+p14+p17+p27+p29+p18!=12 || p8+p13+p15+p18+p30+p27!=12 || p9+p12+p15+p28+p30+p16!=12 || p10+p11+p16+p29+p28+p17!=12) continue;

// Четыре граневых октаэдра:
if (p7+p10+p19+p20+p31+p29!=12 || p8+p9+p19+p30+p31+p22!=12 || p12+p13+p21+p22+p32+p30!=12 || p11+p14+p20+p21+p29+p32!=12) continue;

// Четыре граневых октаэдра:
if (p7+p8+p23+p26+p31+p27!=12 || p9+p10+p23+p28+p31+p24!=12 || p13+p14+p25+p27+p32+p26!=12 || p11+p12+p24+p32+p28+p25!=12) continue;


 {printf("Yessss\n");
  printf("p1 %d p2 %d p3 %d  p4 %d p5 %d p6 %d p7 %d p8 %d\n", p1, p2, p3, p4, p5, p6, p7, p8);
  printf("p9 %d p10 %d p11 %d  p12 %d p13 %d p14 %d p15 %d p16 %d\n", p9, p10, p11, p12, p13, p14, p15, p16);
  printf("p17 %d p18 %d p19 %d  p20 %d p21 %d p22 %d p23 %d p24 %d\n", p17, p18, p19, p20, p21, p22, p23, p24);
  printf("p25 %d p26 %d p27 %d  p28 %d p29 %d p30 %d p31 %d p32 %d\n", p25, p26, p27, p28, p29, p30, p31, p32);
 
  cin >> cc; return(0);}
}}}}} }

 }
    return 0;
}
//---------------------------------------------------------------------------
