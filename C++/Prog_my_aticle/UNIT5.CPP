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

int a=0, b=0, c=0, d=0, e=0, i=0, f=0, j=0,
aa=0, bb=0, cc=0, dd=0, ee=0, ii=0, ff=0, jj=0, col=0, o=1,
s1=0, s2=0, s3=0, s4=0, s5=0, s6=0, s7=0, s8=0, s9=0, s10=0, s11=0, s12=0, s13=0, s14=0, s15=0, s16=0;

int zk[10], w, nn=1;

clock_t t1, t2;
long double t3, tt, tt1;

int // окр. позиции
p1=0, p2=0, p3=0, p4=0, p5=0, p6=0, p7=0, p8=0, p9=0, p10=0,
p11=0,p12=0,p13=0,p14=0,p15=0,p16=0,p17=0,p18=0,p19=0,p20=0,
p21=0,p22=0,p23=0,p24=0,p25=0,p26=0,p27=0,p28=0,p29=0,p30=0,
p31=0,p32=0;


int main(int argc, char **argv)
{
FILE *Fpdat;
Fpdat=fopen("139700.txt", "r");

   col=8;

 
   for (w=1; w<=387; w++)
{
s1=0; s2=0; s3=0; s4=0; s5=0; s6=0; s7=0; s8=0; s9=0; s10=0; s11=0; s12=0; s13=0; s14=0; s15=0; s16=0;

zk[1]=0; zk[2]=0; zk[3]=0; zk[4]=0; zk[5]=0; zk[6]=0; zk[7]=0; zk[8]=0; // заряды
   aa=0;    bb=0;    cc=0;    dd=0;    ee=0;    ii=0;    ff=0;    jj=0;

printf("Proba\n\n");
//fscanf(Fpdat,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",
//           &s1,&s2,&s3,&s4,&s5,&s6,&s7,&s8,&s9,&s10,&s11,&s12,&s13,&s14,&s15,&s16);

//fscanf(Fpdat,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",
//           &s1,&s2,&s3,&s4,&s5,&s6,&s7,&s8,&s9,&s10,&s11,&s12,&s13,&s14);

//fscanf(Fpdat,"%d %d %d %d %d %d %d %d %d %d\n",
//           &s1,&s2,&s3,&s4,&s5,&s6,&s7,&s8,&s9,&s10);

fscanf(Fpdat,"%d %d %d %d %d %d %d %d\n",
           &s1,&s2,&s3,&s4,&s5,&s6,&s7,&s8);

//fscanf(Fpdat,"%d %d %d %d %d %d\n",
//           &s1,&s2,&s3,&s4,&s5,&s6);



zk[s1]=s1;
switch (zk[s1]) {case 0: aa=s2; break; case 1: bb=s2; break; case 2: cc=s2; break; case 3: dd=s2; break; case 4: ee=s2; break; case 5: ii=s2; break; case 6: ff=s2; break; case 7: jj=s2;}

zk[s3]=s3;
switch (zk[s3]) {case 0: aa=s4; break; case 1: bb=s2; break; case 2: cc=s4; break; case 3: dd=s4; break; case 4: ee=s4; break; case 5: ii=s4; break; case 6: ff=s4; break; case 7: jj=s4;}

zk[s5]=s5;
switch (zk[s5]) {case 0: aa=s6; break; case 1: bb=s2; break; case 2: cc=s6; break; case 3: dd=s6; break; case 4: ee=s6; break; case 5: ii=s6; break; case 6: ff=s6; break; case 7: jj=s6;}

zk[s7]=s7;
switch (zk[s7]) {case 0: aa=s8; break; case 1: bb=s2; break; case 2: cc=s8; break; case 3: dd=s8; break; case 4: ee=s8; break; case 5: ii=s8; break; case 6: ff=s8; break; case 7: jj=s8;}

zk[s9]=s9;
switch (zk[s9]) {case 0: aa=s10; break; case 1: bb=s2; break; case 2: cc=s10; break; case 3: dd=s10; break; case 4: ee=s10; break; case 5: ii=s10; break; case 6: ff=s10; break; case 7: jj=s10;}

zk[s11]=s11;
switch (zk[s11]) {case 0: aa=s12; break; case 1: bb=s2; break; case 2: cc=s12; break; case 3: dd=s12; break; case 4: ee=s12; break; case 5: ii=s12; break; case 6: ff=s12; break; case 7: jj=s12;}

zk[s13]=s13;
switch (zk[s13]) {case 0: aa=s14; break; case 1: bb=s2; break; case 2: cc=s14; break; case 3: dd=s14; break; case 4: ee=s14; break; case 5: ii=s14; break; case 6: ff=s14; break; case 7: jj=s14;}

zk[s15]=s15;
switch (zk[s15]) {case 0: aa=s16; break; case 1: bb=s2; break; case 2: cc=s16; break; case 3: dd=s16; break; case 4: ee=s16; break; case 5: ii=s16; break; case 6: ff=s16; break; case 7: jj=s16;}


printf("III  %d %d %d %d %d %d\n",s1, s2, s3, s4, s5, s6);
printf("III  %d\n",nn++);
printf("III  %d %d %d %d %d %d %d %d\n", zk[1], zk[2], zk[3], zk[4], zk[5], zk[6], zk[7], zk[8]);
printf("III  %d %d %d %d %d %d %d %d\n", aa, bb, cc, dd, ee, ii, ff, jj);

t1=clock();

for (p1=1; p1<=col; p1++)            // 1
for (p2=1; p2<=col; p2++)
for (p3=1; p3<=col; p3++)
for (p4=1; p4<=col; p4++)
for (p5=1; p5<=col; p5++)
for (p6=1; p6<=col; p6++)
{
  if (zk[p1]+zk[p2]+zk[p3]+zk[p4]+zk[p5]+zk[p6]!=12) continue;

  a=0; b=0; c=0; d=0; e=0; i=0; f=0; j=0;

switch (zk[p1]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p2]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p3]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p4]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p5]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p6]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
            
if ( a>aa || b>bb || c>cc || d>dd || e>ee || i>ii || f>ff || j>jj ) continue;



 //  printf("III  %d %d %d %d %d %d\n", zk[p1], zk[p2], zk[p3], zk[p4], zk[p5], zk[p6]);


for (p7=1; p7<=col; p7++)            //2
for (p8=1; p8<=col; p8++)
for (p18=1; p18<=col; p18++)
for (p19=1; p19<=col; p19++)
{
  if (zk[p3]+zk[p18]+zk[p1]+zk[p7]+zk[p19]+zk[p8]!=12 ) continue;  

for (p9=1; p9<=col; p9++)            //3
for (p10=1; p10<=col; p10++)
for (p16=1; p16<=col; p16++)
{
  if (zk[p5]+zk[p16]+zk[p1]+zk[p9]+zk[p19]+zk[p10]!=12) continue; // ************* old
                               {
  a=0; b=0; c=0; d=0; e=0; i=0; f=0; j=0;

switch (zk[p1]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p2]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p3]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p4]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p5]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p6]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p7]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p8]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p9]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p10]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p16]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p18]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p19]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}

if ( a>aa || b>bb || c>cc || d>dd || e>ee || i>ii || f>ff || j>jj ) continue;
                          }

for (p17=1; p17<=col; p17++)         //4
for (p23=1; p23<=col; p23++)
{
  if (zk[p2]+zk[p17]+zk[p1]+zk[p10]+zk[p23]+zk[p7]!=12) continue;


for (p15=1; p15<=col; p15++)         //5
{
  if (zk[p4]+zk[p15]+zk[p1]+zk[p8]+zk[p23]+zk[p9]!=12 || zk[p1]+zk[p6]+zk[p15]+zk[p16]+zk[p17]+zk[p18]!=12) continue;


for (p13=1; p13<=col; p13++)         //6 
for (p14=1; p14<=col; p14++)
for (p21=1; p21<=col; p21++)
{
  if (zk[p3]+zk[p18]+zk[p6]+zk[p14]+zk[p21]+zk[p13]!=12) continue;

for (p11=1; p11<=col; p11++)          //7
for (p12=1; p12<=col; p12++)
{
  if (zk[p5]+zk[p16]+zk[p6]+zk[p12]+zk[p21]+zk[p11]!=12) continue;


for (p25=1; p25<=col; p25++)          //8
{
  if (zk[p2]+zk[p17]+zk[p6]+zk[p11]+zk[p25]+zk[p14]!=12 || zk[p4]+zk[p15]+zk[p6]+zk[p13]+zk[p25]+zk[p12]!=12) continue;

  a=0; b=0; c=0; d=0; e=0; i=0; f=0; j=0;

switch (zk[p1]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p2]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p3]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p4]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p5]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p6]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p7]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p8]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p9]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p10]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p11]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p12]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p13]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p14]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p15]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p16]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p17]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p18]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p19]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p21]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p23]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p25]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}

if ( a>aa || b>bb || c>cc || d>dd || e>ee || i>ii || f>ff || j>jj ) continue;

for (p20=1; p20<=col; p20++)          //9
for (p26=1; p26<=col; p26++)
{
  if (zk[p7]+zk[p14]+zk[p2]+zk[p26]+zk[p20]+zk[p3]!=12) continue;


for (p22=1; p22<=col; p22++)          //10
{
  if (zk[p8]+zk[p13]+zk[p3]+zk[p22]+zk[p26]+zk[p4]!=12 || zk[p3]+zk[p5]+zk[p19]+zk[p20]+zk[p21]+zk[p22]!=12) continue;


for (p24=1; p24<=col; p24++)          //11
{
  if (zk[p2]+zk[p4]+zk[p23]+zk[p24]+zk[p25]+zk[p26]!=12 || zk[p9]+zk[p12]+zk[p4]+zk[p24]+zk[p22]+zk[p5]!=12 ||
      zk[p10]+zk[p11]+zk[p2]+zk[p5]+zk[p20]+zk[p24]!=12) continue;


for (p27=1; p27<=col; p27++)          //12
for (p28=1; p28<=col; p28++)
{
  if (zk[p15]+zk[p17]+zk[p23]+zk[p27]+zk[p25]+zk[p28]!=12) continue;          


for (p29=1; p29<=col; p29++)           //13
{
  if (zk[p7]+zk[p14]+zk[p17]+zk[p27]+zk[p29]+zk[p18]!=12 || zk[p10]+zk[p11]+zk[p16]+zk[p29]+zk[p28]+zk[p17]!=12) continue;


for (p30=1; p30<=col; p30++)           //14
{
  if (  zk[p16]+zk[p18]+zk[p19]+zk[p29]+zk[p21]+zk[p30]!=12 ||  zk[p8]+zk[p13]+zk[p15]+zk[p18]+zk[p30]+zk[p27]!=12 ||
        zk[p9]+zk[p12]+zk[p15]+zk[p28]+zk[p30]+zk[p16]!=12) continue;

for (p31=1; p31<=col; p31++)           //15
{
  if (zk[p7]+zk[p10]+zk[p19]+zk[p20]+zk[p31]+zk[p29]!=12 || zk[p7]+zk[p8]+zk[p23]+zk[p26]+zk[p31]+zk[p27]!=12 ||
      zk[p9]+zk[p10]+zk[p23]+zk[p28]+zk[p31]+zk[p24]!=12 || zk[p8]+zk[p9]+zk[p19]+zk[p30]+zk[p31]+zk[p22]!=12) continue;


for (p32=1; p32<=col; p32++)           //16
{

  a=0; b=0; c=0; d=0; e=0; i=0; f=0; j=0;

switch (zk[p1]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p2]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p3]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p4]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p5]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p6]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p7]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p8]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p9]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
            case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p10]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p11]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p12]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p13]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p14]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p15]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p16]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p17]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p18]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p19]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p20]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p21]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p22]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p23]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p24]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p25]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p26]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p27]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p28]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p29]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p30]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p31]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}
switch (zk[p32]){case 0: a=a+1; break; case 1: b=b+1; break; case 2: c=c+1; break; case 3: d=d+1; break;
             case 4: e=e+1; break; case 5: i=i+1; break; case 6: f=f+1; break; case 7: j=j+1;}

if ( a>aa || b>bb || c>cc || d>dd || e>ee || i>ii || f>ff || j>jj ) continue;

if (zk[p20]+zk[p22]+zk[p24]+zk[p31]+zk[p26]+zk[p32]!=12 || zk[p12]+zk[p13]+zk[p21]+zk[p22]+zk[p32]+zk[p30]!=12 ||
    zk[p11]+zk[p14]+zk[p20]+zk[p21]+zk[p29]+zk[p32]!=12 || zk[p13]+zk[p14]+zk[p25]+zk[p27]+zk[p32]+zk[p26]!=12 ||
    zk[p11]+zk[p12]+zk[p24]+zk[p32]+zk[p28]+zk[p25]!=12 || zk[p27]+zk[p28]+zk[p29]+zk[p31]+zk[p30]+zk[p32]!=12) continue; 


t2=clock();
tt=(t2-t1)/CLK_TCK;
cout << "Yessss:" << tt <<endl;

  printf("p1 %d p2 %d p3 %d  p4 %d p5 %d p6 %d p7 %d p8 %d\n", zk[p1], zk[p2], zk[p3], zk[p4], zk[p5], zk[p6], zk[p7], zk[p8]);
  printf("p9 %d p10 %d p11 %d  p12 %d p13 %d p14 %d p15 %d p16 %d\n", zk[p9], zk[p10], zk[p11], zk[p12], zk[p13], zk[p14], zk[p15], zk[p16]);
  printf("p17 %d p18 %d p19 %d  p20 %d p21 %d p22 %d p23 %d p24 %d\n", zk[p17], zk[p18], zk[p19], zk[p20], zk[p21], zk[p22], zk[p23], zk[p24]);
  printf("p25 %d p26 %d p27 %d  p28 %d p29 %d p30 %d p31 %d p32 %d\n", zk[p25], zk[p26], zk[p27], zk[p28], zk[p29], zk[p30], zk[p31], zk[p32]);

  cin >> cc; return 0;
} } } } } } } } } } } } } } } } }
fclose(Fpdat);

 t2=clock();
tt=(t2-t1)/CLK_TCK;
cout << "Not:" << tt <<endl;
cin >> cc;

    return 0;      
}
//---------------------------------------------------------------------------
