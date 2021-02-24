//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <ctime>
#define A 6000000
// #pragma hdrstop

int w, rows, bb, i, ii=1, n=1;
int ap1[A], ap2[A], ap3[A], ap4[A], ap5[A], ap6[A], ap7[A], ap8[A], ap9[A], ap10[A],
ap11[A], ap12[A], ap13[A], ap14[A], ap15[A], ap16[A], ap17[A], ap18[A], ap19[A],
ap20[A], ap21[A], ap22[A], ap23[A], ap24[A], ap25[A], ap26[A], ap27[A], ap28[A],
ap29[A], ap30[A], ap31[A], ap32[A],

p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17,
p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32,
tmp_p1=0, tmp_p2=0, tmp_p3=0, tmp_p4=0, tmp_p5=0, tmp_p6=0;


int main()
{
                              //*
FILE *Fpdat;
Fpdat=fopen("139700.txt", "r");

fscanf(Fpdat,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",
&ap1[1],&ap2[1],&ap3[1],&ap4[1],&ap5[1],&ap6[1],&ap7[1],&ap8[1],&ap9[1],&ap10[1],&ap11[1],&ap12[1],&ap13[1],
&ap14[1],&ap15[1],&ap16[1],&ap17[1],&ap18[1],&ap19[1],&ap20[1],&ap21[1],&ap22[1],&ap23[1],&ap24[1],&ap25[1],
&ap26[1],&ap27[1],&ap28[1],&ap29[1],&ap30[1],&ap31[1],&ap32[1]);

printf("number of rows\n");
scanf ("%d",&rows);
time_t seconds = time(NULL); // получить текущую дату, выраженную в секундах

   for (w=2; w<=rows; w++)
{                              //**
fscanf(Fpdat,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",
&p1,&p2,&p3,&p4,&p5,&p6,&p7,&p8,&p9,&p10,&p11,&p12,&p13,&p14,&p15,&p16,&p17,&p18,&p19,&p20,
&p21,&p22,&p23,&p24,&p25,&p26,&p27,&p28,&p29,&p30,&p31,&p32); bb=0;

if (
        w==100000 || w==200000
     || w==300000 || w==400000
     || w==500000 || w==600000
     || w==700000 || w==800000
     || w==900000 || w==1000000
     || w==1100000 || w==1200000
     || w==1300000 || w==1400000
     || w==1500000 || w==1600000
     || w==1700000 || w==1800000
     || w==1900000 || w==2000000
     || w==2100000 || w==2200000
     || w==2300000 || w==2400000
     || w==2500000 || w==2600000
     || w==2700000 || w==2800000
     || w==2900000 || w==3000000
     || w==3100000 || w==3200000
     || w==3300000 || w==3400000
     || w==3500000 || w==3600000
     || w==3700000 || w==3800000)  std::cout << "Indicator № = " << w << " № = " << ii << " Время выполнения программы = "
                                             << (time(NULL)-seconds) <<  std::endl;


   for (i=n; i<=ii; i++)

       if ( ap1[i]==p1 && ap6[i]==p6 && ap2[i]==p2 && ap3[i]==p3 && ap4[i]==p4 && ap5[i]==p5 ) // 1
       {}
//****************************************************************
else
{

if
(
( ap2[i]==tmp_p1 && ap2[i]==tmp_p2 && ap2[i]==tmp_p3 && ap2[i]==tmp_p4 && ap2[i]==tmp_p5 && ap2[i]==tmp_p6)
||
     //2_
(ap1[i]==p3 && ap6[i]==p5)
 && (ap2[i]==p19 && ap3[i]==p20 && ap4[i]==p21 && ap5[i]==p22
||   ap2[i]==p20 && ap3[i]==p21 && ap4[i]==p22 && ap5[i]==p19
||   ap2[i]==p21 && ap3[i]==p22 && ap4[i]==p19 && ap5[i]==p20
||   ap2[i]==p22 && ap3[i]==p19 && ap4[i]==p20 && ap5[i]==p21)

||
(ap1[i]==p19 && ap6[i]==p21)
 && (ap2[i]==p3 && ap3[i]==p22 && ap4[i]==p5 && ap5[i]==p20
||   ap2[i]==p22 && ap3[i]==p5 && ap4[i]==p20 && ap5[i]==p3
||   ap2[i]==p5 && ap3[i]==p20 && ap4[i]==p3 && ap5[i]==p22
||   ap2[i]==p20 && ap3[i]==p3 && ap4[i]==p22 && ap5[i]==p5)

||
(ap1[i]==p20 && ap6[i]==p22)
 && (ap2[i]==p3 && ap3[i]==p19 && ap4[i]==p5 && ap5[i]==p21
||   ap2[i]==p19 && ap3[i]==p5 && ap4[i]==p21 && ap5[i]==p3
||   ap2[i]==p5 && ap3[i]==p21 && ap4[i]==p3 && ap5[i]==p19
||   ap2[i]==p21 && ap3[i]==p3 && ap4[i]==p19 && ap5[i]==p5)

||
(ap1[i]==p21 && ap6[i]==p19)
 && (ap2[i]==p3 && ap3[i]==p20 && ap4[i]==p5 && ap5[i]==p22
||   ap2[i]==p20 && ap3[i]==p5 && ap4[i]==p22 && ap5[i]==p3
||   ap2[i]==p5 && ap3[i]==p22 && ap4[i]==p3 && ap5[i]==p20
||   ap2[i]==p22 && ap3[i]==p3 && ap4[i]==p20 && ap5[i]==p5)

||
(ap1[i]==p22 && ap6[i]==p20)
 && (ap2[i]==p3 && ap3[i]==p21 && ap4[i]==p5 && ap5[i]==p19
||   ap2[i]==p21 && ap3[i]==p5 && ap4[i]==p19 && ap5[i]==p3
||   ap2[i]==p5 && ap3[i]==p19 && ap4[i]==p3 && ap5[i]==p21
||   ap2[i]==p19 && ap3[i]==p3 && ap4[i]==p21 && ap5[i]==p5)

||
(ap1[i]==p5 && ap6[i]==p3)
 && (ap2[i]==p19 && ap3[i]==p22 && ap4[i]==p21 && ap5[i]==p20
||   ap2[i]==p22 && ap3[i]==p21 && ap4[i]==p20 && ap5[i]==p19
||   ap2[i]==p21 && ap3[i]==p20 && ap4[i]==p19 && ap5[i]==p22
||   ap2[i]==p20 && ap3[i]==p19 && ap4[i]==p22 && ap5[i]==p21)

||
     //3_
(ap1[i]==p1 && ap6[i]==p6)
 && (ap2[i]==p15 && ap3[i]==p16 && ap4[i]==p17 && ap5[i]==p18
||   ap2[i]==p16 && ap3[i]==p17 && ap4[i]==p18 && ap5[i]==p15
||   ap2[i]==p17 && ap3[i]==p18 && ap4[i]==p15 && ap5[i]==p16
||   ap2[i]==p18 && ap3[i]==p15 && ap4[i]==p16 && ap5[i]==p17)

||
(ap1[i]==p15 && ap6[i]==p17)
 && (ap2[i]==p1 && ap3[i]==p18 && ap4[i]==p6 && ap5[i]==p16
||   ap2[i]==p18 && ap3[i]==p6 && ap4[i]==p16 && ap5[i]==p1
||   ap2[i]==p6 && ap3[i]==p16 && ap4[i]==p1 && ap5[i]==p18
||   ap2[i]==p16 && ap3[i]==p1 && ap4[i]==p18 && ap5[i]==p6)

||
(ap1[i]==p16 && ap6[i]==p18)
 && (ap2[i]==p1 && ap3[i]==p15 && ap4[i]==p6 && ap5[i]==p17
||   ap2[i]==p15 && ap3[i]==p6 && ap4[i]==p17 && ap5[i]==p1
||   ap2[i]==p6 && ap3[i]==p17 && ap4[i]==p1 && ap5[i]==p15
||   ap2[i]==p17 && ap3[i]==p1 && ap4[i]==p15 && ap5[i]==p6)

||
(ap1[i]==p17 && ap6[i]==p15)
 && (ap2[i]==p1 && ap3[i]==p16 && ap4[i]==p6 && ap5[i]==p18
||   ap2[i]==p16 && ap3[i]==p6 && ap4[i]==p18 && ap5[i]==p1
||   ap2[i]==p6 && ap3[i]==p18 && ap4[i]==p1 && ap5[i]==p16
||   ap2[i]==p18 && ap3[i]==p1 && ap4[i]==p16 && ap5[i]==p6)

||
(ap1[i]==p18 && ap6[i]==p16)
 && (ap2[i]==p1 && ap3[i]==p17 && ap4[i]==p6 && ap5[i]==p15
||   ap2[i]==p17 && ap3[i]==p6 && ap4[i]==p15 && ap5[i]==p1
||   ap2[i]==p6 && ap3[i]==p15 && ap4[i]==p1 && ap5[i]==p17
||   ap2[i]==p15 && ap3[i]==p1 && ap4[i]==p17 && ap5[i]==p6)

||
(ap1[i]==p6 && ap6[i]==p1)
 && (ap2[i]==p15 && ap3[i]==p18 && ap4[i]==p17 && ap5[i]==p16
||   ap2[i]==p18 && ap3[i]==p17 && ap4[i]==p16 && ap5[i]==p15
||   ap2[i]==p17 && ap3[i]==p16 && ap4[i]==p15 && ap5[i]==p18
||   ap2[i]==p16 && ap3[i]==p15 && ap4[i]==p18 && ap5[i]==p17)

||
     //4_
(ap1[i]==p2 && ap6[i]==p4)
 && (ap2[i]==p23 && ap3[i]==p24 && ap4[i]==p25 && ap5[i]==p26
||   ap2[i]==p24 && ap3[i]==p25 && ap4[i]==p26 && ap5[i]==p23
||   ap2[i]==p25 && ap3[i]==p26 && ap4[i]==p23 && ap5[i]==p24
||   ap2[i]==p26 && ap3[i]==p23 && ap4[i]==p24 && ap5[i]==p25)

||
(ap1[i]==p23 && ap6[i]==p25)
 && (ap2[i]==p2 && ap3[i]==p26 && ap4[i]==p4 && ap5[i]==p24
||   ap2[i]==p26 && ap3[i]==p4 && ap4[i]==p24 && ap5[i]==p2
||   ap2[i]==p4 && ap3[i]==p24 && ap4[i]==p2 && ap5[i]==p26
||   ap2[i]==p24 && ap3[i]==p2 && ap4[i]==p26 && ap5[i]==p4)

||
(ap1[i]==p24 && ap6[i]==p26)
 && (ap2[i]==p2 && ap3[i]==p23 && ap4[i]==p4 && ap5[i]==p25
||   ap2[i]==p23 && ap3[i]==p4 && ap4[i]==p25 && ap5[i]==p2
||   ap2[i]==p4 && ap3[i]==p25 && ap4[i]==p2 && ap5[i]==p23
||   ap2[i]==p25 && ap3[i]==p2 && ap4[i]==p23 && ap5[i]==p4)

||
(ap1[i]==p25 && ap6[i]==p23)
 && (ap2[i]==p2 && ap3[i]==p24 && ap4[i]==p4 && ap5[i]==p26
||   ap2[i]==p24 && ap3[i]==p4 && ap4[i]==p26 && ap5[i]==p2
||   ap2[i]==p4 && ap3[i]==p26 && ap4[i]==p2 && ap5[i]==p24
||   ap2[i]==p26 && ap3[i]==p2 && ap4[i]==p24 && ap5[i]==p4)

||
(ap1[i]==p26 && ap6[i]==p24)
 && (ap2[i]==p2 && ap3[i]==p25 && ap4[i]==p4 && ap5[i]==p23
||   ap2[i]==p25 && ap3[i]==p4 && ap4[i]==p23 && ap5[i]==p2
||   ap2[i]==p4 && ap3[i]==p23 && ap4[i]==p2 && ap5[i]==p25
||   ap2[i]==p23 && ap3[i]==p2 && ap4[i]==p25 && ap5[i]==p4)

||
(ap1[i]==p4 && ap6[i]==p2)
 && (ap2[i]==p23 && ap3[i]==p26 && ap4[i]==p25 && ap5[i]==p24
||   ap2[i]==p26 && ap3[i]==p25 && ap4[i]==p24 && ap5[i]==p23
||   ap2[i]==p25 && ap3[i]==p24 && ap4[i]==p23 && ap5[i]==p26
||   ap2[i]==p24 && ap3[i]==p23 && ap4[i]==p26 && ap5[i]==p25)

||
     //5_
(ap1[i]==p27 && ap6[i]==p28)
 && (ap2[i]==p29 && ap3[i]==p31 && ap4[i]==p30 && ap5[i]==p32
||   ap2[i]==p31 && ap3[i]==p30 && ap4[i]==p32 && ap5[i]==p29
||   ap2[i]==p30 && ap3[i]==p32 && ap4[i]==p29 && ap5[i]==p31
||   ap2[i]==p32 && ap3[i]==p29 && ap4[i]==p31 && ap5[i]==p30)

||
(ap1[i]==p29 && ap6[i]==p30)
 && (ap2[i]==p27 && ap3[i]==p32 && ap4[i]==p28 && ap5[i]==p31
||   ap2[i]==p32 && ap3[i]==p28 && ap4[i]==p31 && ap5[i]==p27
||   ap2[i]==p28 && ap3[i]==p31 && ap4[i]==p27 && ap5[i]==p32
||   ap2[i]==p31 && ap3[i]==p27 && ap4[i]==p32 && ap5[i]==p28)

||
(ap1[i]==p31 && ap6[i]==p32)
 && (ap2[i]==p27 && ap3[i]==p29 && ap4[i]==p28 && ap5[i]==p30
||   ap2[i]==p29 && ap3[i]==p28 && ap4[i]==p30 && ap5[i]==p27
||   ap2[i]==p28 && ap3[i]==p30 && ap4[i]==p27 && ap5[i]==p29
||   ap2[i]==p30 && ap3[i]==p27 && ap4[i]==p29 && ap5[i]==p28)

||
(ap1[i]==p30 && ap6[i]==p29)
 && (ap2[i]==p27 && ap3[i]==p31 && ap4[i]==p28 && ap5[i]==p32
||   ap2[i]==p31 && ap3[i]==p28 && ap4[i]==p32 && ap5[i]==p27
||   ap2[i]==p28 && ap3[i]==p32 && ap4[i]==p27 && ap5[i]==p31
||   ap2[i]==p32 && ap3[i]==p27 && ap4[i]==p31 && ap5[i]==p28)

||
(ap1[i]==p32 && ap6[i]==p31)
 && (ap2[i]==p27 && ap3[i]==p30 && ap4[i]==p28 && ap5[i]==p29
||   ap2[i]==p30 && ap3[i]==p28 && ap4[i]==p29 && ap5[i]==p27
||   ap2[i]==p28 && ap3[i]==p29 && ap4[i]==p27 && ap5[i]==p30
||   ap2[i]==p29 && ap3[i]==p27 && ap4[i]==p30 && ap5[i]==p28)

||
(ap1[i]==p28 && ap6[i]==p27)
 && (ap2[i]==p29 && ap3[i]==p32 && ap4[i]==p30 && ap5[i]==p31
||   ap2[i]==p32 && ap3[i]==p30 && ap4[i]==p31 && ap5[i]==p29
||   ap2[i]==p30 && ap3[i]==p31 && ap4[i]==p29 && ap5[i]==p32
||   ap2[i]==p31 && ap3[i]==p29 && ap4[i]==p32 && ap5[i]==p30)

||
     //6_
(ap1[i]==p16 && ap6[i]==p18)
 && (ap2[i]==p19 && ap3[i]==p29 && ap4[i]==p21 && ap5[i]==p30
||   ap2[i]==p29 && ap3[i]==p21 && ap4[i]==p30 && ap5[i]==p19
||   ap2[i]==p21 && ap3[i]==p30 && ap4[i]==p19 && ap5[i]==p29
||   ap2[i]==p30 && ap3[i]==p19 && ap4[i]==p29 && ap5[i]==p21)

||
(ap1[i]==p19 && ap6[i]==p21)
 && (ap2[i]==p16 && ap3[i]==p30 && ap4[i]==p18 && ap5[i]==p29
||   ap2[i]==p30 && ap3[i]==p18 && ap4[i]==p29 && ap5[i]==p16
||   ap2[i]==p18 && ap3[i]==p29 && ap4[i]==p16 && ap5[i]==p30
||   ap2[i]==p29 && ap3[i]==p16 && ap4[i]==p30 && ap5[i]==p18)

||
(ap1[i]==p29 && ap6[i]==p30)
 && (ap2[i]==p16 && ap3[i]==p19 && ap4[i]==p18 && ap5[i]==p21
||   ap2[i]==p19 && ap3[i]==p18 && ap4[i]==p21 && ap5[i]==p16
||   ap2[i]==p18 && ap3[i]==p21 && ap4[i]==p16 && ap5[i]==p19
||   ap2[i]==p21 && ap3[i]==p16 && ap4[i]==p19 && ap5[i]==p18)

||
(ap1[i]==p21 && ap6[i]==p19)
 && (ap2[i]==p16 && ap3[i]==p29 && ap4[i]==p18 && ap5[i]==p30
||   ap2[i]==p29 && ap3[i]==p18 && ap4[i]==p30 && ap5[i]==p16
||   ap2[i]==p18 && ap3[i]==p30 && ap4[i]==p16 && ap5[i]==p29
||   ap2[i]==p30 && ap3[i]==p16 && ap4[i]==p29 && ap5[i]==p18)

||
(ap1[i]==p30 && ap6[i]==p29)
 && (ap2[i]==p16 && ap3[i]==p21 && ap4[i]==p18 && ap5[i]==p19
||   ap2[i]==p21 && ap3[i]==p18 && ap4[i]==p19 && ap5[i]==p16
||   ap2[i]==p18 && ap3[i]==p19 && ap4[i]==p16 && ap5[i]==p21
||   ap2[i]==p19 && ap3[i]==p16 && ap4[i]==p21 && ap5[i]==p18)

||
(ap1[i]==p18 && ap6[i]==p16)
 && (ap2[i]==p19 && ap3[i]==p30 && ap4[i]==p21 && ap5[i]==p29
||   ap2[i]==p30 && ap3[i]==p21 && ap4[i]==p29 && ap5[i]==p19
||   ap2[i]==p21 && ap3[i]==p29 && ap4[i]==p19 && ap5[i]==p30
||   ap2[i]==p29 && ap3[i]==p19 && ap4[i]==p30 && ap5[i]==p21)

||
     //7_
(ap1[i]==p15 && ap6[i]==p17)
 && (ap2[i]==p23 && ap3[i]==p27 && ap4[i]==p25 && ap5[i]==p28
||   ap2[i]==p27 && ap3[i]==p25 && ap4[i]==p28 && ap5[i]==p23
||   ap2[i]==p25 && ap3[i]==p28 && ap4[i]==p23 && ap5[i]==p27
||   ap2[i]==p28 && ap3[i]==p23 && ap4[i]==p27 && ap5[i]==p25)

||
(ap1[i]==p23 && ap6[i]==p25)
 && (ap2[i]==p15 && ap3[i]==p28 && ap4[i]==p17 && ap5[i]==p27
||   ap2[i]==p28 && ap3[i]==p17 && ap4[i]==p27 && ap5[i]==p15
||   ap2[i]==p17 && ap3[i]==p27 && ap4[i]==p15 && ap5[i]==p28
||   ap2[i]==p27 && ap3[i]==p15 && ap4[i]==p28 && ap5[i]==p17)

||
(ap1[i]==p27 && ap6[i]==p28)
 && (ap2[i]==p15 && ap3[i]==p23 && ap4[i]==p17 && ap5[i]==p25
||   ap2[i]==p23 && ap3[i]==p17 && ap4[i]==p25 && ap5[i]==p15
||   ap2[i]==p17 && ap3[i]==p25 && ap4[i]==p15 && ap5[i]==p23
||   ap2[i]==p25 && ap3[i]==p15 && ap4[i]==p23 && ap5[i]==p17)

||
(ap1[i]==p25 && ap6[i]==p23)
 && (ap2[i]==p15 && ap3[i]==p27 && ap4[i]==p17 && ap5[i]==p28
||   ap2[i]==p27 && ap3[i]==p17 && ap4[i]==p28 && ap5[i]==p15
||   ap2[i]==p17 && ap3[i]==p28 && ap4[i]==p15 && ap5[i]==p27
||   ap2[i]==p28 && ap3[i]==p15 && ap4[i]==p27 && ap5[i]==p17)

||
(ap1[i]==p28 && ap6[i]==p27)
 && (ap2[i]==p15 && ap3[i]==p25 && ap4[i]==p17 && ap5[i]==p23
||   ap2[i]==p25 && ap3[i]==p17 && ap4[i]==p23 && ap5[i]==p15
||   ap2[i]==p17 && ap3[i]==p23 && ap4[i]==p15 && ap5[i]==p25
||   ap2[i]==p23 && ap3[i]==p15 && ap4[i]==p25 && ap5[i]==p17)

||
(ap1[i]==p17 && ap6[i]==p15)
 && (ap2[i]==p23 && ap3[i]==p28 && ap4[i]==p25 && ap5[i]==p27
||   ap2[i]==p28 && ap3[i]==p25 && ap4[i]==p27 && ap5[i]==p23
||   ap2[i]==p25 && ap3[i]==p27 && ap4[i]==p23 && ap5[i]==p28
||   ap2[i]==p27 && ap3[i]==p23 && ap4[i]==p28 && ap5[i]==p25)

||
     //8_
(ap1[i]==p20 && ap6[i]==p22)
 && (ap2[i]==p24 && ap3[i]==p31 && ap4[i]==p26 && ap5[i]==p32
||   ap2[i]==p31 && ap3[i]==p26 && ap4[i]==p32 && ap5[i]==p24
||   ap2[i]==p26 && ap3[i]==p32 && ap4[i]==p24 && ap5[i]==p31
||   ap2[i]==p32 && ap3[i]==p24 && ap4[i]==p31 && ap5[i]==p26)

||
(ap1[i]==p24 && ap6[i]==p26)
 && (ap2[i]==p20 && ap3[i]==p32 && ap4[i]==p22 && ap5[i]==p31
||   ap2[i]==p32 && ap3[i]==p22 && ap4[i]==p31 && ap5[i]==p20
||   ap2[i]==p22 && ap3[i]==p31 && ap4[i]==p20 && ap5[i]==p32
||   ap2[i]==p31 && ap3[i]==p20 && ap4[i]==p32 && ap5[i]==p22)

||
(ap1[i]==p31 && ap6[i]==p32)
 && (ap2[i]==p20 && ap3[i]==p24 && ap4[i]==p22 && ap5[i]==p26
||   ap2[i]==p24 && ap3[i]==p22 && ap4[i]==p26 && ap5[i]==p20
||   ap2[i]==p22 && ap3[i]==p26 && ap4[i]==p20 && ap5[i]==p24
||   ap2[i]==p26 && ap3[i]==p20 && ap4[i]==p24 && ap5[i]==p22)

||
(ap1[i]==p26 && ap6[i]==p24)
 && (ap2[i]==p20 && ap3[i]==p31 && ap4[i]==p22 && ap5[i]==p32
||   ap2[i]==p31 && ap3[i]==p22 && ap4[i]==p32 && ap5[i]==p20
||   ap2[i]==p22 && ap3[i]==p32 && ap4[i]==p20 && ap5[i]==p31
||   ap2[i]==p32 && ap3[i]==p20 && ap4[i]==p31 && ap5[i]==p22)

||
(ap1[i]==p32 && ap6[i]==p31)
 && (ap2[i]==p20 && ap3[i]==p26 && ap4[i]==p22 && ap5[i]==p24
||   ap2[i]==p26 && ap3[i]==p22 && ap4[i]==p24 && ap5[i]==p20
||   ap2[i]==p22 && ap3[i]==p24 && ap4[i]==p20 && ap5[i]==p26
||   ap2[i]==p24 && ap3[i]==p20 && ap4[i]==p26 && ap5[i]==p22)

||
(ap1[i]==p22 && ap6[i]==p20)
 && (ap2[i]==p24 && ap3[i]==p32 && ap4[i]==p26 && ap5[i]==p31
||   ap2[i]==p32 && ap3[i]==p26 && ap4[i]==p31 && ap5[i]==p24
||   ap2[i]==p26 && ap3[i]==p31 && ap4[i]==p24 && ap5[i]==p32
||   ap2[i]==p31 && ap3[i]==p24 && ap4[i]==p32 && ap5[i]==p26)

||
     //9_
(ap1[i]==p3 && ap6[i]==p18)
 && (ap2[i]==p1 && ap3[i]==p7 && ap4[i]==p19 && ap5[i]==p8
||   ap2[i]==p7 && ap3[i]==p19 && ap4[i]==p8 && ap5[i]==p1
||   ap2[i]==p19 && ap3[i]==p8 && ap4[i]==p1 && ap5[i]==p7
||   ap2[i]==p8 && ap3[i]==p1 && ap4[i]==p7 && ap5[i]==p19)

||
(ap1[i]==p1 && ap6[i]==p19)
 && (ap2[i]==p3 && ap3[i]==p8 && ap4[i]==p18 && ap5[i]==p7
||   ap2[i]==p8 && ap3[i]==p18 && ap4[i]==p7 && ap5[i]==p3
||   ap2[i]==p18 && ap3[i]==p7 && ap4[i]==p3 && ap5[i]==p8
||   ap2[i]==p7 && ap3[i]==p3 && ap4[i]==p8 && ap5[i]==p18)

||
(ap1[i]==p7 && ap6[i]==p8)
 && (ap2[i]==p3 && ap3[i]==p1 && ap4[i]==p18 && ap5[i]==p19
||   ap2[i]==p1 && ap3[i]==p18 && ap4[i]==p19 && ap5[i]==p3
||   ap2[i]==p18 && ap3[i]==p19 && ap4[i]==p3 && ap5[i]==p1
||   ap2[i]==p19 && ap3[i]==p3 && ap4[i]==p1 && ap5[i]==p18)

||
(ap1[i]==p19 && ap6[i]==p1)
 && (ap2[i]==p3 && ap3[i]==p7 && ap4[i]==p18 && ap5[i]==p8
||   ap2[i]==p7 && ap3[i]==p18 && ap4[i]==p8 && ap5[i]==p3
||   ap2[i]==p18 && ap3[i]==p8 && ap4[i]==p3 && ap5[i]==p7
||   ap2[i]==p8 && ap3[i]==p3 && ap4[i]==p7 && ap5[i]==p18)

||
(ap1[i]==p8 && ap6[i]==p7)
 && (ap2[i]==p3 && ap3[i]==p19 && ap4[i]==p18 && ap5[i]==p1
||   ap2[i]==p19 && ap3[i]==p18 && ap4[i]==p1 && ap5[i]==p3
||   ap2[i]==p18 && ap3[i]==p1 && ap4[i]==p3 && ap5[i]==p19
||   ap2[i]==p1 && ap3[i]==p3 && ap4[i]==p19 && ap5[i]==p18)

||
(ap1[i]==p18 && ap6[i]==p3)
 && (ap2[i]==p1 && ap3[i]==p8 && ap4[i]==p19 && ap5[i]==p7
||   ap2[i]==p8 && ap3[i]==p19 && ap4[i]==p7 && ap5[i]==p1
||   ap2[i]==p19 && ap3[i]==p7 && ap4[i]==p1 && ap5[i]==p8
||   ap2[i]==p7 && ap3[i]==p1 && ap4[i]==p8 && ap5[i]==p19)

||
     //10_
(ap1[i]==p5 && ap6[i]==p16)
 && (ap2[i]==p1 && ap3[i]==p9 && ap4[i]==p19 && ap5[i]==p10
||   ap2[i]==p9 && ap3[i]==p19 && ap4[i]==p10 && ap5[i]==p1
||   ap2[i]==p19 && ap3[i]==p10 && ap4[i]==p1 && ap5[i]==p9
||   ap2[i]==p10 && ap3[i]==p1 && ap4[i]==p9 && ap5[i]==p19)

||
(ap1[i]==p1 && ap6[i]==p19)
 && (ap2[i]==p5 && ap3[i]==p10 && ap4[i]==p16 && ap5[i]==p9
||   ap2[i]==p10 && ap3[i]==p16 && ap4[i]==p9 && ap5[i]==p5
||   ap2[i]==p16 && ap3[i]==p9 && ap4[i]==p5 && ap5[i]==p10
||   ap2[i]==p9 && ap3[i]==p5 && ap4[i]==p10 && ap5[i]==p16)

||
(ap1[i]==p9 && ap6[i]==p10)
 && (ap2[i]==p5 && ap3[i]==p1 && ap4[i]==p16 && ap5[i]==p19
||   ap2[i]==p1 && ap3[i]==p16 && ap4[i]==p19 && ap5[i]==p5
||   ap2[i]==p16 && ap3[i]==p19 && ap4[i]==p5 && ap5[i]==p1
||   ap2[i]==p19 && ap3[i]==p5 && ap4[i]==p1 && ap5[i]==p16)

||
(ap1[i]==p19 && ap6[i]==p1)
 && (ap2[i]==p5 && ap3[i]==p9 && ap4[i]==p16 && ap5[i]==p10
||   ap2[i]==p9 && ap3[i]==p16 && ap4[i]==p10 && ap5[i]==p5
||   ap2[i]==p16 && ap3[i]==p10 && ap4[i]==p5 && ap5[i]==p9
||   ap2[i]==p10 && ap3[i]==p5 && ap4[i]==p9 && ap5[i]==p16)

||
(ap1[i]==p10 && ap6[i]==p9)
 && (ap2[i]==p5 && ap3[i]==p19 && ap4[i]==p16 && ap5[i]==p1
||   ap2[i]==p19 && ap3[i]==p16 && ap4[i]==p1 && ap5[i]==p5
||   ap2[i]==p16 && ap3[i]==p1 && ap4[i]==p5 && ap5[i]==p19
||   ap2[i]==p1 && ap3[i]==p5 && ap4[i]==p19 && ap5[i]==p16)

||
(ap1[i]==p16 && ap6[i]==p5)
 && (ap2[i]==p1 && ap3[i]==p10 && ap4[i]==p19 && ap5[i]==p9
||   ap2[i]==p10 && ap3[i]==p19 && ap4[i]==p9 && ap5[i]==p1
||   ap2[i]==p19 && ap3[i]==p9 && ap4[i]==p1 && ap5[i]==p10
||   ap2[i]==p9 && ap3[i]==p1 && ap4[i]==p10 && ap5[i]==p19)

||
     //11_
(ap1[i]==p3 && ap6[i]==p18)
 && (ap2[i]==p6 && ap3[i]==p14 && ap4[i]==p21 && ap5[i]==p13
||   ap2[i]==p14 && ap3[i]==p21 && ap4[i]==p13 && ap5[i]==p6
||   ap2[i]==p21 && ap3[i]==p13 && ap4[i]==p6 && ap5[i]==p14
||   ap2[i]==p13 && ap3[i]==p6 && ap4[i]==p14 && ap5[i]==p21)

||
(ap1[i]==p6 && ap6[i]==p21)
 && (ap2[i]==p3 && ap3[i]==p13 && ap4[i]==p18 && ap5[i]==p14
||   ap2[i]==p13 && ap3[i]==p18 && ap4[i]==p14 && ap5[i]==p3
||   ap2[i]==p18 && ap3[i]==p14 && ap4[i]==p3 && ap5[i]==p13
||   ap2[i]==p14 && ap3[i]==p3 && ap4[i]==p13 && ap5[i]==p18)

||
(ap1[i]==p14 && ap6[i]==p13)
 && (ap2[i]==p3 && ap3[i]==p6 && ap4[i]==p18 && ap5[i]==p21
||   ap2[i]==p6 && ap3[i]==p18 && ap4[i]==p21 && ap5[i]==p3
||   ap2[i]==p18 && ap3[i]==p21 && ap4[i]==p3 && ap5[i]==p6
||   ap2[i]==p21 && ap3[i]==p3 && ap4[i]==p6 && ap5[i]==p18)

||
(ap1[i]==p21 && ap6[i]==p6)
 && (ap2[i]==p3 && ap3[i]==p14 && ap4[i]==p18 && ap5[i]==p13
||   ap2[i]==p14 && ap3[i]==p18 && ap4[i]==p13 && ap5[i]==p3
||   ap2[i]==p18 && ap3[i]==p13 && ap4[i]==p3 && ap5[i]==p14
||   ap2[i]==p13 && ap3[i]==p3 && ap4[i]==p14 && ap5[i]==p18)

||
(ap1[i]==p13 && ap6[i]==p14)
 && (ap2[i]==p3 && ap3[i]==p21 && ap4[i]==p18 && ap5[i]==p6
||   ap2[i]==p21 && ap3[i]==p18 && ap4[i]==p6 && ap5[i]==p3
||   ap2[i]==p18 && ap3[i]==p6 && ap4[i]==p3 && ap5[i]==p21
||   ap2[i]==p6 && ap3[i]==p3 && ap4[i]==p21 && ap5[i]==p18)

||
(ap1[i]==p18 && ap6[i]==p3)
 && (ap2[i]==p6 && ap3[i]==p13 && ap4[i]==p21 && ap5[i]==p14
||   ap2[i]==p13 && ap3[i]==p21 && ap4[i]==p14 && ap5[i]==p6
||   ap2[i]==p21 && ap3[i]==p14 && ap4[i]==p6 && ap5[i]==p13
||   ap2[i]==p14 && ap3[i]==p6 && ap4[i]==p13 && ap5[i]==p21)

||
     //12_
(ap1[i]==p5 && ap6[i]==p16)
 && (ap2[i]==p6 && ap3[i]==p12 && ap4[i]==p21 && ap5[i]==p11
||   ap2[i]==p12 && ap3[i]==p21 && ap4[i]==p11 && ap5[i]==p6
||   ap2[i]==p21 && ap3[i]==p11 && ap4[i]==p6 && ap5[i]==p12
||   ap2[i]==p11 && ap3[i]==p6 && ap4[i]==p12 && ap5[i]==p21)

||
(ap1[i]==p6 && ap6[i]==p21)
 && (ap2[i]==p5 && ap3[i]==p11 && ap4[i]==p16 && ap5[i]==p12
||   ap2[i]==p11 && ap3[i]==p16 && ap4[i]==p12 && ap5[i]==p5
||   ap2[i]==p16 && ap3[i]==p12 && ap4[i]==p5 && ap5[i]==p11
||   ap2[i]==p12 && ap3[i]==p5 && ap4[i]==p11 && ap5[i]==p16)

||
(ap1[i]==p12 && ap6[i]==p11)
 && (ap2[i]==p5 && ap3[i]==p6 && ap4[i]==p16 && ap5[i]==p21
||   ap2[i]==p6 && ap3[i]==p16 && ap4[i]==p21 && ap5[i]==p5
||   ap2[i]==p16 && ap3[i]==p21 && ap4[i]==p5 && ap5[i]==p6
||   ap2[i]==p21 && ap3[i]==p5 && ap4[i]==p6 && ap5[i]==p16)

||
(ap1[i]==p21 && ap6[i]==p6)
 && (ap2[i]==p5 && ap3[i]==p12 && ap4[i]==p16 && ap5[i]==p11
||   ap2[i]==p12 && ap3[i]==p16 && ap4[i]==p11 && ap5[i]==p5
||   ap2[i]==p16 && ap3[i]==p11 && ap4[i]==p5 && ap5[i]==p12
||   ap2[i]==p11 && ap3[i]==p5 && ap4[i]==p12 && ap5[i]==p16)

||
(ap1[i]==p11 && ap6[i]==p12)
 && (ap2[i]==p5 && ap3[i]==p21 && ap4[i]==p16 && ap5[i]==p6
||   ap2[i]==p21 && ap3[i]==p16 && ap4[i]==p6 && ap5[i]==p5
||   ap2[i]==p16 && ap3[i]==p6 && ap4[i]==p5 && ap5[i]==p21
||   ap2[i]==p6 && ap3[i]==p5 && ap4[i]==p21 && ap5[i]==p16)

||
(ap1[i]==p16 && ap6[i]==p5)
 && (ap2[i]==p6 && ap3[i]==p11 && ap4[i]==p21 && ap5[i]==p12
||   ap2[i]==p11 && ap3[i]==p21 && ap4[i]==p12 && ap5[i]==p6
||   ap2[i]==p21 && ap3[i]==p12 && ap4[i]==p6 && ap5[i]==p11
||   ap2[i]==p12 && ap3[i]==p6 && ap4[i]==p11 && ap5[i]==p21)

||
     //13_
(ap1[i]==p2 && ap6[i]==p17)
 && (ap2[i]==p1 && ap3[i]==p10 && ap4[i]==p23 && ap5[i]==p7
||   ap2[i]==p10 && ap3[i]==p23 && ap4[i]==p7 && ap5[i]==p1
||   ap2[i]==p23 && ap3[i]==p7 && ap4[i]==p1 && ap5[i]==p10
||   ap2[i]==p7 && ap3[i]==p1 && ap4[i]==p10 && ap5[i]==p23)

||
(ap1[i]==p1 && ap6[i]==p23)
 && (ap2[i]==p2 && ap3[i]==p7 && ap4[i]==p17 && ap5[i]==p10
||   ap2[i]==p7 && ap3[i]==p17 && ap4[i]==p10 && ap5[i]==p2
||   ap2[i]==p17 && ap3[i]==p10 && ap4[i]==p2 && ap5[i]==p7
||   ap2[i]==p10 && ap3[i]==p2 && ap4[i]==p7 && ap5[i]==p17)

||
(ap1[i]==p10 && ap6[i]==p7)
 && (ap2[i]==p2 && ap3[i]==p1 && ap4[i]==p17 && ap5[i]==p23
||   ap2[i]==p1 && ap3[i]==p17 && ap4[i]==p23 && ap5[i]==p2
||   ap2[i]==p17 && ap3[i]==p23 && ap4[i]==p2 && ap5[i]==p1
||   ap2[i]==p23 && ap3[i]==p2 && ap4[i]==p1 && ap5[i]==p17)

||
(ap1[i]==p23 && ap6[i]==p1)
 && (ap2[i]==p2 && ap3[i]==p10 && ap4[i]==p17 && ap5[i]==p7
||   ap2[i]==p10 && ap3[i]==p17 && ap4[i]==p7 && ap5[i]==p2
||   ap2[i]==p17 && ap3[i]==p7 && ap4[i]==p2 && ap5[i]==p10
||   ap2[i]==p7 && ap3[i]==p2 && ap4[i]==p10 && ap5[i]==p17)

||
(ap1[i]==p7 && ap6[i]==p10)
 && (ap2[i]==p2 && ap3[i]==p23 && ap4[i]==p17 && ap5[i]==p1
||   ap2[i]==p23 && ap3[i]==p17 && ap4[i]==p1 && ap5[i]==p2
||   ap2[i]==p17 && ap3[i]==p1 && ap4[i]==p2 && ap5[i]==p23
||   ap2[i]==p1 && ap3[i]==p2 && ap4[i]==p23 && ap5[i]==p17)

||
(ap1[i]==p17 && ap6[i]==p2)
 && (ap2[i]==p1 && ap3[i]==p7 && ap4[i]==p23 && ap5[i]==p10
||   ap2[i]==p7 && ap3[i]==p23 && ap4[i]==p10 && ap5[i]==p1
||   ap2[i]==p23 && ap3[i]==p10 && ap4[i]==p1 && ap5[i]==p7
||   ap2[i]==p10 && ap3[i]==p1 && ap4[i]==p7 && ap5[i]==p23)

||
     //14_
(ap1[i]==p4 && ap6[i]==p15)
 && (ap2[i]==p1 && ap3[i]==p8 && ap4[i]==p23 && ap5[i]==p9
||   ap2[i]==p8 && ap3[i]==p23 && ap4[i]==p9 && ap5[i]==p1
||   ap2[i]==p23 && ap3[i]==p9 && ap4[i]==p1 && ap5[i]==p8
||   ap2[i]==p9 && ap3[i]==p1 && ap4[i]==p8 && ap5[i]==p23)

||
(ap1[i]==p1 && ap6[i]==p23)
 && (ap2[i]==p4 && ap3[i]==p9 && ap4[i]==p15 && ap5[i]==p8
||   ap2[i]==p9 && ap3[i]==p15 && ap4[i]==p8 && ap5[i]==p4
||   ap2[i]==p15 && ap3[i]==p8 && ap4[i]==p4 && ap5[i]==p9
||   ap2[i]==p8 && ap3[i]==p4 && ap4[i]==p9 && ap5[i]==p15)

||
(ap1[i]==p8 && ap6[i]==p9)
 && (ap2[i]==p4 && ap3[i]==p1 && ap4[i]==p15 && ap5[i]==p23
||   ap2[i]==p1 && ap3[i]==p15 && ap4[i]==p23 && ap5[i]==p4
||   ap2[i]==p15 && ap3[i]==p23 && ap4[i]==p4 && ap5[i]==p1
||   ap2[i]==p23 && ap3[i]==p4 && ap4[i]==p1 && ap5[i]==p15)

||
(ap1[i]==p23 && ap6[i]==p1)
 && (ap2[i]==p4 && ap3[i]==p8 && ap4[i]==p15 && ap5[i]==p9
||   ap2[i]==p8 && ap3[i]==p15 && ap4[i]==p9 && ap5[i]==p4
||   ap2[i]==p15 && ap3[i]==p9 && ap4[i]==p4 && ap5[i]==p8
||   ap2[i]==p9 && ap3[i]==p4 && ap4[i]==p8 && ap5[i]==p15)

||
(ap1[i]==p9 && ap6[i]==p8)
 && (ap2[i]==p4 && ap3[i]==p23 && ap4[i]==p15 && ap5[i]==p1
||   ap2[i]==p23 && ap3[i]==p15 && ap4[i]==p1 && ap5[i]==p4
||   ap2[i]==p15 && ap3[i]==p1 && ap4[i]==p4 && ap5[i]==p23
||   ap2[i]==p1 && ap3[i]==p4 && ap4[i]==p23 && ap5[i]==p15)

||
(ap1[i]==p15 && ap6[i]==p4)
 && (ap2[i]==p1 && ap3[i]==p9 && ap4[i]==p23 && ap5[i]==p8
||   ap2[i]==p9 && ap3[i]==p23 && ap4[i]==p8 && ap5[i]==p1
||   ap2[i]==p23 && ap3[i]==p8 && ap4[i]==p1 && ap5[i]==p9
||   ap2[i]==p8 && ap3[i]==p1 && ap4[i]==p9 && ap5[i]==p23)

||
     //15_
(ap1[i]==p2 && ap6[i]==p17)
 && (ap2[i]==p6 && ap3[i]==p11 && ap4[i]==p25 && ap5[i]==p14
||   ap2[i]==p11 && ap3[i]==p25 && ap4[i]==p14 && ap5[i]==p6
||   ap2[i]==p25 && ap3[i]==p14 && ap4[i]==p6 && ap5[i]==p11
||   ap2[i]==p14 && ap3[i]==p6 && ap4[i]==p11 && ap5[i]==p25)

||
(ap1[i]==p6 && ap6[i]==p25)
 && (ap2[i]==p2 && ap3[i]==p14 && ap4[i]==p17 && ap5[i]==p11
||   ap2[i]==p14 && ap3[i]==p17 && ap4[i]==p11 && ap5[i]==p2
||   ap2[i]==p17 && ap3[i]==p11 && ap4[i]==p2 && ap5[i]==p14
||   ap2[i]==p11 && ap3[i]==p2 && ap4[i]==p14 && ap5[i]==p17)

||
(ap1[i]==p11 && ap6[i]==p14)
 && (ap2[i]==p2 && ap3[i]==p6 && ap4[i]==p17 && ap5[i]==p25
||   ap2[i]==p6 && ap3[i]==p17 && ap4[i]==p25 && ap5[i]==p2
||   ap2[i]==p17 && ap3[i]==p25 && ap4[i]==p2 && ap5[i]==p6
||   ap2[i]==p25 && ap3[i]==p2 && ap4[i]==p6 && ap5[i]==p17)

||
(ap1[i]==p25 && ap6[i]==p6)
 && (ap2[i]==p2 && ap3[i]==p11 && ap4[i]==p17 && ap5[i]==p14
||   ap2[i]==p11 && ap3[i]==p17 && ap4[i]==p14 && ap5[i]==p2
||   ap2[i]==p17 && ap3[i]==p14 && ap4[i]==p2 && ap5[i]==p11
||   ap2[i]==p14 && ap3[i]==p2 && ap4[i]==p11 && ap5[i]==p17)

||
(ap1[i]==p14 && ap6[i]==p11)
 && (ap2[i]==p2 && ap3[i]==p25 && ap4[i]==p17 && ap5[i]==p6
||   ap2[i]==p25 && ap3[i]==p17 && ap4[i]==p6 && ap5[i]==p2
||   ap2[i]==p17 && ap3[i]==p6 && ap4[i]==p2 && ap5[i]==p25
||   ap2[i]==p6 && ap3[i]==p2 && ap4[i]==p25 && ap5[i]==p17)

||
(ap1[i]==p17 && ap6[i]==p2)
 && (ap2[i]==p6 && ap3[i]==p14 && ap4[i]==p25 && ap5[i]==p11
||   ap2[i]==p14 && ap3[i]==p25 && ap4[i]==p11 && ap5[i]==p6
||   ap2[i]==p25 && ap3[i]==p11 && ap4[i]==p6 && ap5[i]==p14
||   ap2[i]==p11 && ap3[i]==p6 && ap4[i]==p14 && ap5[i]==p25)

||
     //16_
(ap1[i]==p4 && ap6[i]==p15)
 && (ap2[i]==p6 && ap3[i]==p13 && ap4[i]==p25 && ap5[i]==p12
||   ap2[i]==p13 && ap3[i]==p25 && ap4[i]==p12 && ap5[i]==p6
||   ap2[i]==p25 && ap3[i]==p12 && ap4[i]==p6 && ap5[i]==p13
||   ap2[i]==p12 && ap3[i]==p6 && ap4[i]==p13 && ap5[i]==p25)

||
(ap1[i]==p6 && ap6[i]==p25)
 && (ap2[i]==p4 && ap3[i]==p12 && ap4[i]==p15 && ap5[i]==p13
||   ap2[i]==p12 && ap3[i]==p15 && ap4[i]==p13 && ap5[i]==p4
||   ap2[i]==p15 && ap3[i]==p13 && ap4[i]==p4 && ap5[i]==p12
||   ap2[i]==p13 && ap3[i]==p4 && ap4[i]==p12 && ap5[i]==p15)

||
(ap1[i]==p13 && ap6[i]==p12)
 && (ap2[i]==p4 && ap3[i]==p6 && ap4[i]==p15 && ap5[i]==p25
||   ap2[i]==p6 && ap3[i]==p15 && ap4[i]==p25 && ap5[i]==p4
||   ap2[i]==p15 && ap3[i]==p25 && ap4[i]==p4 && ap5[i]==p6
||   ap2[i]==p25 && ap3[i]==p4 && ap4[i]==p6 && ap5[i]==p15)

||
(ap1[i]==p25 && ap6[i]==p6)
 && (ap2[i]==p4 && ap3[i]==p13 && ap4[i]==p15 && ap5[i]==p12
||   ap2[i]==p13 && ap3[i]==p15 && ap4[i]==p12 && ap5[i]==p4
||   ap2[i]==p15 && ap3[i]==p12 && ap4[i]==p4 && ap5[i]==p13
||   ap2[i]==p12 && ap3[i]==p4 && ap4[i]==p13 && ap5[i]==p15)

||
(ap1[i]==p12 && ap6[i]==p13)
 && (ap2[i]==p4 && ap3[i]==p25 && ap4[i]==p15 && ap5[i]==p6
||   ap2[i]==p25 && ap3[i]==p15 && ap4[i]==p6 && ap5[i]==p4
||   ap2[i]==p15 && ap3[i]==p6 && ap4[i]==p4 && ap5[i]==p25
||   ap2[i]==p6 && ap3[i]==p4 && ap4[i]==p25 && ap5[i]==p15)

||
(ap1[i]==p15 && ap6[i]==p4)
 && (ap2[i]==p6 && ap3[i]==p12 && ap4[i]==p25 && ap5[i]==p13
||   ap2[i]==p12 && ap3[i]==p25 && ap4[i]==p13 && ap5[i]==p6
||   ap2[i]==p25 && ap3[i]==p13 && ap4[i]==p6 && ap5[i]==p12
||   ap2[i]==p13 && ap3[i]==p6 && ap4[i]==p12 && ap5[i]==p25)

||
     //17_
(ap1[i]==p7 && ap6[i]==p14)
 && (ap2[i]==p2 && ap3[i]==p26 && ap4[i]==p20 && ap5[i]==p3
||   ap2[i]==p26 && ap3[i]==p20 && ap4[i]==p3 && ap5[i]==p2
||   ap2[i]==p20 && ap3[i]==p3 && ap4[i]==p2 && ap5[i]==p26
||   ap2[i]==p3 && ap3[i]==p2 && ap4[i]==p26 && ap5[i]==p20)

||
(ap1[i]==p2 && ap6[i]==p20)
 && (ap2[i]==p7 && ap3[i]==p3 && ap4[i]==p14 && ap5[i]==p26
||   ap2[i]==p3 && ap3[i]==p14 && ap4[i]==p26 && ap5[i]==p7
||   ap2[i]==p14 && ap3[i]==p26 && ap4[i]==p7 && ap5[i]==p3
||   ap2[i]==p26 && ap3[i]==p7 && ap4[i]==p3 && ap5[i]==p14)

||
(ap1[i]==p26 && ap6[i]==p3)
 && (ap2[i]==p7 && ap3[i]==p2 && ap4[i]==p14 && ap5[i]==p20
||   ap2[i]==p2 && ap3[i]==p14 && ap4[i]==p20 && ap5[i]==p7
||   ap2[i]==p14 && ap3[i]==p20 && ap4[i]==p7 && ap5[i]==p2
||   ap2[i]==p20 && ap3[i]==p7 && ap4[i]==p2 && ap5[i]==p14)

||
(ap1[i]==p20 && ap6[i]==p2)
 && (ap2[i]==p7 && ap3[i]==p26 && ap4[i]==p14 && ap5[i]==p3
||   ap2[i]==p26 && ap3[i]==p14 && ap4[i]==p3 && ap5[i]==p7
||   ap2[i]==p14 && ap3[i]==p3 && ap4[i]==p7 && ap5[i]==p26
||   ap2[i]==p3 && ap3[i]==p7 && ap4[i]==p26 && ap5[i]==p14)

||
(ap1[i]==p3 && ap6[i]==p26)
 && (ap2[i]==p7 && ap3[i]==p20 && ap4[i]==p14 && ap5[i]==p2
||   ap2[i]==p20 && ap3[i]==p14 && ap4[i]==p2 && ap5[i]==p7
||   ap2[i]==p14 && ap3[i]==p2 && ap4[i]==p7 && ap5[i]==p20
||   ap2[i]==p2 && ap3[i]==p7 && ap4[i]==p20 && ap5[i]==p14)

||
(ap1[i]==p14 && ap6[i]==p7)
 && (ap2[i]==p2 && ap3[i]==p3 && ap4[i]==p20 && ap5[i]==p26
||   ap2[i]==p3 && ap3[i]==p20 && ap4[i]==p26 && ap5[i]==p2
||   ap2[i]==p20 && ap3[i]==p26 && ap4[i]==p2 && ap5[i]==p3
||   ap2[i]==p26 && ap3[i]==p2 && ap4[i]==p3 && ap5[i]==p20)

||
     //18_
(ap1[i]==p8 && ap6[i]==p13)
 && (ap2[i]==p3 && ap3[i]==p22 && ap4[i]==p26 && ap5[i]==p4
||   ap2[i]==p22 && ap3[i]==p26 && ap4[i]==p4 && ap5[i]==p3
||   ap2[i]==p26 && ap3[i]==p4 && ap4[i]==p3 && ap5[i]==p22
||   ap2[i]==p4 && ap3[i]==p3 && ap4[i]==p22 && ap5[i]==p26)

||
(ap1[i]==p3 && ap6[i]==p26)
 && (ap2[i]==p8 && ap3[i]==p4 && ap4[i]==p13 && ap5[i]==p22
||   ap2[i]==p4 && ap3[i]==p13 && ap4[i]==p22 && ap5[i]==p8
||   ap2[i]==p13 && ap3[i]==p22 && ap4[i]==p8 && ap5[i]==p4
||   ap2[i]==p22 && ap3[i]==p8 && ap4[i]==p4 && ap5[i]==p13)

||
(ap1[i]==p22 && ap6[i]==p4)
 && (ap2[i]==p8 && ap3[i]==p3 && ap4[i]==p13 && ap5[i]==p26
||   ap2[i]==p3 && ap3[i]==p13 && ap4[i]==p26 && ap5[i]==p8
||   ap2[i]==p13 && ap3[i]==p26 && ap4[i]==p8 && ap5[i]==p3
||   ap2[i]==p26 && ap3[i]==p8 && ap4[i]==p3 && ap5[i]==p13)

||
(ap1[i]==p26 && ap6[i]==p3)
 && (ap2[i]==p8 && ap3[i]==p22 && ap4[i]==p13 && ap5[i]==p4
||   ap2[i]==p22 && ap3[i]==p13 && ap4[i]==p4 && ap5[i]==p8
||   ap2[i]==p13 && ap3[i]==p4 && ap4[i]==p8 && ap5[i]==p22
||   ap2[i]==p4 && ap3[i]==p8 && ap4[i]==p22 && ap5[i]==p13)

||
(ap1[i]==p4 && ap6[i]==p22)
 && (ap2[i]==p8 && ap3[i]==p26 && ap4[i]==p13 && ap5[i]==p3
||   ap2[i]==p26 && ap3[i]==p13 && ap4[i]==p3 && ap5[i]==p8
||   ap2[i]==p13 && ap3[i]==p3 && ap4[i]==p8 && ap5[i]==p26
||   ap2[i]==p3 && ap3[i]==p8 && ap4[i]==p26 && ap5[i]==p13)

||
(ap1[i]==p13 && ap6[i]==p8)
 && (ap2[i]==p3 && ap3[i]==p4 && ap4[i]==p26 && ap5[i]==p22
||   ap2[i]==p4 && ap3[i]==p26 && ap4[i]==p22 && ap5[i]==p3
||   ap2[i]==p26 && ap3[i]==p22 && ap4[i]==p3 && ap5[i]==p4
||   ap2[i]==p22 && ap3[i]==p3 && ap4[i]==p4 && ap5[i]==p26)

||
     //19_
(ap1[i]==p9 && ap6[i]==p12)
 && (ap2[i]==p4 && ap3[i]==p24 && ap4[i]==p22 && ap5[i]==p5
||   ap2[i]==p24 && ap3[i]==p22 && ap4[i]==p5 && ap5[i]==p4
||   ap2[i]==p22 && ap3[i]==p5 && ap4[i]==p4 && ap5[i]==p24
||   ap2[i]==p5 && ap3[i]==p4 && ap4[i]==p24 && ap5[i]==p22)

||
(ap1[i]==p4 && ap6[i]==p22)
 && (ap2[i]==p9 && ap3[i]==p5 && ap4[i]==p12 && ap5[i]==p24
||   ap2[i]==p5 && ap3[i]==p12 && ap4[i]==p24 && ap5[i]==p9
||   ap2[i]==p12 && ap3[i]==p24 && ap4[i]==p9 && ap5[i]==p5
||   ap2[i]==p24 && ap3[i]==p9 && ap4[i]==p5 && ap5[i]==p12)

||
(ap1[i]==p24 && ap6[i]==p5)
 && (ap2[i]==p9 && ap3[i]==p4 && ap4[i]==p12 && ap5[i]==p22
||   ap2[i]==p4 && ap3[i]==p12 && ap4[i]==p22 && ap5[i]==p9
||   ap2[i]==p12 && ap3[i]==p22 && ap4[i]==p9 && ap5[i]==p4
||   ap2[i]==p22 && ap3[i]==p9 && ap4[i]==p4 && ap5[i]==p12)

||
(ap1[i]==p22 && ap6[i]==p4)
 && (ap2[i]==p9 && ap3[i]==p24 && ap4[i]==p12 && ap5[i]==p5
||   ap2[i]==p24 && ap3[i]==p12 && ap4[i]==p5 && ap5[i]==p9
||   ap2[i]==p12 && ap3[i]==p5 && ap4[i]==p9 && ap5[i]==p24
||   ap2[i]==p5 && ap3[i]==p9 && ap4[i]==p24 && ap5[i]==p12)

||
(ap1[i]==p5 && ap6[i]==p24)
 && (ap2[i]==p9 && ap3[i]==p22 && ap4[i]==p12 && ap5[i]==p4
||   ap2[i]==p22 && ap3[i]==p12 && ap4[i]==p4 && ap5[i]==p9
||   ap2[i]==p12 && ap3[i]==p4 && ap4[i]==p9 && ap5[i]==p22
||   ap2[i]==p4 && ap3[i]==p9 && ap4[i]==p22 && ap5[i]==p12)

||
(ap1[i]==p12 && ap6[i]==p9)
 && (ap2[i]==p4 && ap3[i]==p5 && ap4[i]==p22 && ap5[i]==p24
||   ap2[i]==p5 && ap3[i]==p22 && ap4[i]==p24 && ap5[i]==p4
||   ap2[i]==p22 && ap3[i]==p24 && ap4[i]==p4 && ap5[i]==p5
||   ap2[i]==p24 && ap3[i]==p4 && ap4[i]==p5 && ap5[i]==p22)

||
     //20_
(ap1[i]==p10 && ap6[i]==p11)
 && (ap2[i]==p2 && ap3[i]==p5 && ap4[i]==p20 && ap5[i]==p24
||   ap2[i]==p5 && ap3[i]==p20 && ap4[i]==p24 && ap5[i]==p2
||   ap2[i]==p20 && ap3[i]==p24 && ap4[i]==p2 && ap5[i]==p5
||   ap2[i]==p24 && ap3[i]==p2 && ap4[i]==p5 && ap5[i]==p20)

||
(ap1[i]==p2 && ap6[i]==p20)
 && (ap2[i]==p10 && ap3[i]==p24 && ap4[i]==p11 && ap5[i]==p5
||   ap2[i]==p24 && ap3[i]==p11 && ap4[i]==p5 && ap5[i]==p10
||   ap2[i]==p11 && ap3[i]==p5 && ap4[i]==p10 && ap5[i]==p24
||   ap2[i]==p5 && ap3[i]==p10 && ap4[i]==p24 && ap5[i]==p11)

||
(ap1[i]==p5 && ap6[i]==p24)
 && (ap2[i]==p10 && ap3[i]==p2 && ap4[i]==p11 && ap5[i]==p20
||   ap2[i]==p2 && ap3[i]==p11 && ap4[i]==p20 && ap5[i]==p10
||   ap2[i]==p11 && ap3[i]==p20 && ap4[i]==p10 && ap5[i]==p2
||   ap2[i]==p20 && ap3[i]==p10 && ap4[i]==p2 && ap5[i]==p11)

||
(ap1[i]==p20 && ap6[i]==p2)
 && (ap2[i]==p10 && ap3[i]==p5 && ap4[i]==p11 && ap5[i]==p24
||   ap2[i]==p5 && ap3[i]==p11 && ap4[i]==p24 && ap5[i]==p10
||   ap2[i]==p11 && ap3[i]==p24 && ap4[i]==p10 && ap5[i]==p5
||   ap2[i]==p24 && ap3[i]==p10 && ap4[i]==p5 && ap5[i]==p11)

||
(ap1[i]==p24 && ap6[i]==p5)
 && (ap2[i]==p10 && ap3[i]==p20 && ap4[i]==p11 && ap5[i]==p2
||   ap2[i]==p20 && ap3[i]==p11 && ap4[i]==p2 && ap5[i]==p10
||   ap2[i]==p11 && ap3[i]==p2 && ap4[i]==p10 && ap5[i]==p20
||   ap2[i]==p2 && ap3[i]==p10 && ap4[i]==p20 && ap5[i]==p11)

||
(ap1[i]==p11 && ap6[i]==p10)
 && (ap2[i]==p2 && ap3[i]==p24 && ap4[i]==p20 && ap5[i]==p5
||   ap2[i]==p24 && ap3[i]==p20 && ap4[i]==p5 && ap5[i]==p2
||   ap2[i]==p20 && ap3[i]==p5 && ap4[i]==p2 && ap5[i]==p24
||   ap2[i]==p5 && ap3[i]==p2 && ap4[i]==p24 && ap5[i]==p20)

||
     //21_
(ap1[i]==p7 && ap6[i]==p14)
 && (ap2[i]==p17 && ap3[i]==p27 && ap4[i]==p29 && ap5[i]==p18
||   ap2[i]==p27 && ap3[i]==p29 && ap4[i]==p18 && ap5[i]==p17
||   ap2[i]==p29 && ap3[i]==p18 && ap4[i]==p17 && ap5[i]==p27
||   ap2[i]==p18 && ap3[i]==p17 && ap4[i]==p27 && ap5[i]==p29)

||
(ap1[i]==p17 && ap6[i]==p29)
 && (ap2[i]==p7 && ap3[i]==p18 && ap4[i]==p14 && ap5[i]==p27
||   ap2[i]==p18 && ap3[i]==p14 && ap4[i]==p27 && ap5[i]==p7
||   ap2[i]==p14 && ap3[i]==p27 && ap4[i]==p7 && ap5[i]==p18
||   ap2[i]==p27 && ap3[i]==p7 && ap4[i]==p18 && ap5[i]==p14)

||
(ap1[i]==p27 && ap6[i]==p18)
 && (ap2[i]==p7 && ap3[i]==p17 && ap4[i]==p14 && ap5[i]==p29
||   ap2[i]==p17 && ap3[i]==p14 && ap4[i]==p29 && ap5[i]==p7
||   ap2[i]==p14 && ap3[i]==p29 && ap4[i]==p7 && ap5[i]==p17
||   ap2[i]==p29 && ap3[i]==p7 && ap4[i]==p17 && ap5[i]==p14)

||
(ap1[i]==p29 && ap6[i]==p17)
 && (ap2[i]==p7 && ap3[i]==p27 && ap4[i]==p14 && ap5[i]==p18
||   ap2[i]==p27 && ap3[i]==p14 && ap4[i]==p18 && ap5[i]==p7
||   ap2[i]==p14 && ap3[i]==p18 && ap4[i]==p7 && ap5[i]==p27
||   ap2[i]==p18 && ap3[i]==p7 && ap4[i]==p27 && ap5[i]==p14)

||
(ap1[i]==p18 && ap6[i]==p27)
 && (ap2[i]==p7 && ap3[i]==p29 && ap4[i]==p14 && ap5[i]==p17
||   ap2[i]==p29 && ap3[i]==p14 && ap4[i]==p17 && ap5[i]==p7
||   ap2[i]==p14 && ap3[i]==p17 && ap4[i]==p7 && ap5[i]==p29
||   ap2[i]==p17 && ap3[i]==p7 && ap4[i]==p29 && ap5[i]==p14)

||
(ap1[i]==p14 && ap6[i]==p7)
 && (ap2[i]==p17 && ap3[i]==p18 && ap4[i]==p29 && ap5[i]==p27
||   ap2[i]==p18 && ap3[i]==p29 && ap4[i]==p27 && ap5[i]==p17
||   ap2[i]==p29 && ap3[i]==p27 && ap4[i]==p17 && ap5[i]==p18
||   ap2[i]==p27 && ap3[i]==p17 && ap4[i]==p18 && ap5[i]==p29)

||
     //22_
(ap1[i]==p8 && ap6[i]==p13)
 && (ap2[i]==p15 && ap3[i]==p18 && ap4[i]==p30 && ap5[i]==p27
||   ap2[i]==p18 && ap3[i]==p30 && ap4[i]==p27 && ap5[i]==p15
||   ap2[i]==p30 && ap3[i]==p27 && ap4[i]==p15 && ap5[i]==p18
||   ap2[i]==p27 && ap3[i]==p15 && ap4[i]==p18 && ap5[i]==p30)

||
(ap1[i]==p15 && ap6[i]==p30)
 && (ap2[i]==p8 && ap3[i]==p27 && ap4[i]==p13 && ap5[i]==p18
||   ap2[i]==p27 && ap3[i]==p13 && ap4[i]==p18 && ap5[i]==p8
||   ap2[i]==p13 && ap3[i]==p18 && ap4[i]==p8 && ap5[i]==p27
||   ap2[i]==p18 && ap3[i]==p8 && ap4[i]==p27 && ap5[i]==p13)

||
(ap1[i]==p18 && ap6[i]==p27)
 && (ap2[i]==p8 && ap3[i]==p15 && ap4[i]==p13 && ap5[i]==p30
||   ap2[i]==p15 && ap3[i]==p13 && ap4[i]==p30 && ap5[i]==p8
||   ap2[i]==p13 && ap3[i]==p30 && ap4[i]==p8 && ap5[i]==p15
||   ap2[i]==p30 && ap3[i]==p8 && ap4[i]==p15 && ap5[i]==p13)

||
(ap1[i]==p30 && ap6[i]==p15)
 && (ap2[i]==p8 && ap3[i]==p18 && ap4[i]==p13 && ap5[i]==p27
||   ap2[i]==p18 && ap3[i]==p13 && ap4[i]==p27 && ap5[i]==p8
||   ap2[i]==p13 && ap3[i]==p27 && ap4[i]==p8 && ap5[i]==p18
||   ap2[i]==p27 && ap3[i]==p8 && ap4[i]==p18 && ap5[i]==p13)

||
(ap1[i]==p27 && ap6[i]==p18)
 && (ap2[i]==p8 && ap3[i]==p30 && ap4[i]==p13 && ap5[i]==p15
||   ap2[i]==p30 && ap3[i]==p13 && ap4[i]==p15 && ap5[i]==p8
||   ap2[i]==p13 && ap3[i]==p15 && ap4[i]==p8 && ap5[i]==p30
||   ap2[i]==p15 && ap3[i]==p8 && ap4[i]==p30 && ap5[i]==p13)

||
(ap1[i]==p13 && ap6[i]==p8)
 && (ap2[i]==p15 && ap3[i]==p27 && ap4[i]==p30 && ap5[i]==p18
||   ap2[i]==p27 && ap3[i]==p30 && ap4[i]==p18 && ap5[i]==p15
||   ap2[i]==p30 && ap3[i]==p18 && ap4[i]==p15 && ap5[i]==p27
||   ap2[i]==p18 && ap3[i]==p15 && ap4[i]==p27 && ap5[i]==p30)

||
     //23_
(ap1[i]==p9 && ap6[i]==p12)
 && (ap2[i]==p15 && ap3[i]==p28 && ap4[i]==p30 && ap5[i]==p16
||   ap2[i]==p28 && ap3[i]==p30 && ap4[i]==p16 && ap5[i]==p15
||   ap2[i]==p30 && ap3[i]==p16 && ap4[i]==p15 && ap5[i]==p28
||   ap2[i]==p16 && ap3[i]==p15 && ap4[i]==p28 && ap5[i]==p30)

||
(ap1[i]==p15 && ap6[i]==p30)
 && (ap2[i]==p9 && ap3[i]==p16 && ap4[i]==p12 && ap5[i]==p28
||   ap2[i]==p16 && ap3[i]==p12 && ap4[i]==p28 && ap5[i]==p9
||   ap2[i]==p12 && ap3[i]==p28 && ap4[i]==p9 && ap5[i]==p16
||   ap2[i]==p28 && ap3[i]==p9 && ap4[i]==p16 && ap5[i]==p12)

||
(ap1[i]==p28 && ap6[i]==p16)
 && (ap2[i]==p9 && ap3[i]==p15 && ap4[i]==p12 && ap5[i]==p30
||   ap2[i]==p15 && ap3[i]==p12 && ap4[i]==p30 && ap5[i]==p9
||   ap2[i]==p12 && ap3[i]==p30 && ap4[i]==p9 && ap5[i]==p15
||   ap2[i]==p30 && ap3[i]==p9 && ap4[i]==p15 && ap5[i]==p12)

||
(ap1[i]==p30 && ap6[i]==p15)
 && (ap2[i]==p9 && ap3[i]==p28 && ap4[i]==p12 && ap5[i]==p16
||   ap2[i]==p28 && ap3[i]==p12 && ap4[i]==p16 && ap5[i]==p9
||   ap2[i]==p12 && ap3[i]==p16 && ap4[i]==p9 && ap5[i]==p28
||   ap2[i]==p16 && ap3[i]==p9 && ap4[i]==p28 && ap5[i]==p12)

||
(ap1[i]==p16 && ap6[i]==p28)
 && (ap2[i]==p9 && ap3[i]==p30 && ap4[i]==p12 && ap5[i]==p15
||   ap2[i]==p30 && ap3[i]==p12 && ap4[i]==p15 && ap5[i]==p9
||   ap2[i]==p12 && ap3[i]==p15 && ap4[i]==p9 && ap5[i]==p30
||   ap2[i]==p15 && ap3[i]==p9 && ap4[i]==p30 && ap5[i]==p12)

||
(ap1[i]==p12 && ap6[i]==p9)
 && (ap2[i]==p15 && ap3[i]==p16 && ap4[i]==p30 && ap5[i]==p28
||   ap2[i]==p16 && ap3[i]==p30 && ap4[i]==p28 && ap5[i]==p15
||   ap2[i]==p30 && ap3[i]==p28 && ap4[i]==p15 && ap5[i]==p16
||   ap2[i]==p28 && ap3[i]==p15 && ap4[i]==p16 && ap5[i]==p30)

||
     //24_
(ap1[i]==p10 && ap6[i]==p11)
 && (ap2[i]==p16 && ap3[i]==p29 && ap4[i]==p28 && ap5[i]==p17
||   ap2[i]==p29 && ap3[i]==p28 && ap4[i]==p17 && ap5[i]==p16
||   ap2[i]==p28 && ap3[i]==p17 && ap4[i]==p16 && ap5[i]==p29
||   ap2[i]==p17 && ap3[i]==p16 && ap4[i]==p29 && ap5[i]==p28)

||
(ap1[i]==p16 && ap6[i]==p28)
 && (ap2[i]==p10 && ap3[i]==p17 && ap4[i]==p11 && ap5[i]==p29
||   ap2[i]==p17 && ap3[i]==p11 && ap4[i]==p29 && ap5[i]==p10
||   ap2[i]==p11 && ap3[i]==p29 && ap4[i]==p10 && ap5[i]==p17
||   ap2[i]==p29 && ap3[i]==p10 && ap4[i]==p17 && ap5[i]==p11)

||
(ap1[i]==p29 && ap6[i]==p17)
 && (ap2[i]==p10 && ap3[i]==p16 && ap4[i]==p11 && ap5[i]==p28
||   ap2[i]==p16 && ap3[i]==p11 && ap4[i]==p28 && ap5[i]==p10
||   ap2[i]==p11 && ap3[i]==p28 && ap4[i]==p10 && ap5[i]==p16
||   ap2[i]==p28 && ap3[i]==p10 && ap4[i]==p16 && ap5[i]==p11)

||
(ap1[i]==p28 && ap6[i]==p16)
 && (ap2[i]==p10 && ap3[i]==p29 && ap4[i]==p11 && ap5[i]==p17
||   ap2[i]==p29 && ap3[i]==p11 && ap4[i]==p17 && ap5[i]==p10
||   ap2[i]==p11 && ap3[i]==p17 && ap4[i]==p10 && ap5[i]==p29
||   ap2[i]==p17 && ap3[i]==p10 && ap4[i]==p29 && ap5[i]==p11)

||
(ap1[i]==p17 && ap6[i]==p29)
 && (ap2[i]==p10 && ap3[i]==p28 && ap4[i]==p11 && ap5[i]==p16
||   ap2[i]==p28 && ap3[i]==p11 && ap4[i]==p16 && ap5[i]==p10
||   ap2[i]==p11 && ap3[i]==p16 && ap4[i]==p10 && ap5[i]==p28
||   ap2[i]==p16 && ap3[i]==p10 && ap4[i]==p28 && ap5[i]==p11)

||
(ap1[i]==p11 && ap6[i]==p10)
 && (ap2[i]==p16 && ap3[i]==p17 && ap4[i]==p28 && ap5[i]==p29
||   ap2[i]==p17 && ap3[i]==p28 && ap4[i]==p29 && ap5[i]==p16
||   ap2[i]==p28 && ap3[i]==p29 && ap4[i]==p16 && ap5[i]==p17
||   ap2[i]==p29 && ap3[i]==p16 && ap4[i]==p17 && ap5[i]==p28)

||
     //25_
(ap1[i]==p7 && ap6[i]==p10)
 && (ap2[i]==p19 && ap3[i]==p20 && ap4[i]==p31 && ap5[i]==p29
||   ap2[i]==p20 && ap3[i]==p31 && ap4[i]==p29 && ap5[i]==p19
||   ap2[i]==p31 && ap3[i]==p29 && ap4[i]==p19 && ap5[i]==p20
||   ap2[i]==p29 && ap3[i]==p19 && ap4[i]==p20 && ap5[i]==p31)

||
(ap1[i]==p19 && ap6[i]==p31)
 && (ap2[i]==p7 && ap3[i]==p29 && ap4[i]==p10 && ap5[i]==p20
||   ap2[i]==p29 && ap3[i]==p10 && ap4[i]==p20 && ap5[i]==p7
||   ap2[i]==p10 && ap3[i]==p20 && ap4[i]==p7 && ap5[i]==p29
||   ap2[i]==p20 && ap3[i]==p7 && ap4[i]==p29 && ap5[i]==p10)

||
(ap1[i]==p20 && ap6[i]==p29)
 && (ap2[i]==p7 && ap3[i]==p19 && ap4[i]==p10 && ap5[i]==p31
||   ap2[i]==p19 && ap3[i]==p10 && ap4[i]==p31 && ap5[i]==p7
||   ap2[i]==p10 && ap3[i]==p31 && ap4[i]==p7 && ap5[i]==p19
||   ap2[i]==p31 && ap3[i]==p7 && ap4[i]==p19 && ap5[i]==p10)

||
(ap1[i]==p31 && ap6[i]==p19)
 && (ap2[i]==p7 && ap3[i]==p20 && ap4[i]==p10 && ap5[i]==p29
||   ap2[i]==p20 && ap3[i]==p10 && ap4[i]==p29 && ap5[i]==p7
||   ap2[i]==p10 && ap3[i]==p29 && ap4[i]==p7 && ap5[i]==p20
||   ap2[i]==p29 && ap3[i]==p7 && ap4[i]==p20 && ap5[i]==p10)

||
(ap1[i]==p29 && ap6[i]==p20)
 && (ap2[i]==p7 && ap3[i]==p31 && ap4[i]==p10 && ap5[i]==p19
||   ap2[i]==p31 && ap3[i]==p10 && ap4[i]==p19 && ap5[i]==p7
||   ap2[i]==p10 && ap3[i]==p19 && ap4[i]==p7 && ap5[i]==p31
||   ap2[i]==p19 && ap3[i]==p7 && ap4[i]==p31 && ap5[i]==p10)

||
(ap1[i]==p10 && ap6[i]==p7)
 && (ap2[i]==p19 && ap3[i]==p29 && ap4[i]==p31 && ap5[i]==p20
||   ap2[i]==p29 && ap3[i]==p31 && ap4[i]==p20 && ap5[i]==p19
||   ap2[i]==p31 && ap3[i]==p20 && ap4[i]==p19 && ap5[i]==p29
||   ap2[i]==p20 && ap3[i]==p19 && ap4[i]==p29 && ap5[i]==p31)

||
     //26_
(ap1[i]==p8 && ap6[i]==p9)
 && (ap2[i]==p19 && ap3[i]==p30 && ap4[i]==p31 && ap5[i]==p22
||   ap2[i]==p30 && ap3[i]==p31 && ap4[i]==p22 && ap5[i]==p19
||   ap2[i]==p31 && ap3[i]==p22 && ap4[i]==p19 && ap5[i]==p30
||   ap2[i]==p22 && ap3[i]==p19 && ap4[i]==p30 && ap5[i]==p31)

||
(ap1[i]==p19 && ap6[i]==p31)
 && (ap2[i]==p8 && ap3[i]==p22 && ap4[i]==p9 && ap5[i]==p30
||   ap2[i]==p22 && ap3[i]==p9 && ap4[i]==p30 && ap5[i]==p8
||   ap2[i]==p9 && ap3[i]==p30 && ap4[i]==p8 && ap5[i]==p22
||   ap2[i]==p30 && ap3[i]==p8 && ap4[i]==p22 && ap5[i]==p9)

||
(ap1[i]==p30 && ap6[i]==p22)
 && (ap2[i]==p8 && ap3[i]==p19 && ap4[i]==p9 && ap5[i]==p31
||   ap2[i]==p19 && ap3[i]==p9 && ap4[i]==p31 && ap5[i]==p8
||   ap2[i]==p9 && ap3[i]==p31 && ap4[i]==p8 && ap5[i]==p19
||   ap2[i]==p31 && ap3[i]==p8 && ap4[i]==p19 && ap5[i]==p9)

||
(ap1[i]==p31 && ap6[i]==p19)
 && (ap2[i]==p8 && ap3[i]==p30 && ap4[i]==p9 && ap5[i]==p22
||   ap2[i]==p30 && ap3[i]==p9 && ap4[i]==p22 && ap5[i]==p8
||   ap2[i]==p9 && ap3[i]==p22 && ap4[i]==p8 && ap5[i]==p30
||   ap2[i]==p22 && ap3[i]==p8 && ap4[i]==p30 && ap5[i]==p9)

||
(ap1[i]==p22 && ap6[i]==p30)
 && (ap2[i]==p8 && ap3[i]==p31 && ap4[i]==p9 && ap5[i]==p19
||   ap2[i]==p31 && ap3[i]==p9 && ap4[i]==p19 && ap5[i]==p8
||   ap2[i]==p9 && ap3[i]==p19 && ap4[i]==p8 && ap5[i]==p31
||   ap2[i]==p19 && ap3[i]==p8 && ap4[i]==p31 && ap5[i]==p9)

||
(ap1[i]==p9 && ap6[i]==p8)
 && (ap2[i]==p19 && ap3[i]==p22 && ap4[i]==p31 && ap5[i]==p30
||   ap2[i]==p22 && ap3[i]==p31 && ap4[i]==p30 && ap5[i]==p19
||   ap2[i]==p31 && ap3[i]==p30 && ap4[i]==p19 && ap5[i]==p22
||   ap2[i]==p30 && ap3[i]==p19 && ap4[i]==p22 && ap5[i]==p31)

||
     //27_
(ap1[i]==p12 && ap6[i]==p13)
 && (ap2[i]==p21 && ap3[i]==p22 && ap4[i]==p32 && ap5[i]==p30
||   ap2[i]==p22 && ap3[i]==p32 && ap4[i]==p30 && ap5[i]==p21
||   ap2[i]==p32 && ap3[i]==p30 && ap4[i]==p21 && ap5[i]==p22
||   ap2[i]==p30 && ap3[i]==p21 && ap4[i]==p22 && ap5[i]==p32)

||
(ap1[i]==p21 && ap6[i]==p32)
 && (ap2[i]==p12 && ap3[i]==p30 && ap4[i]==p13 && ap5[i]==p22
||   ap2[i]==p30 && ap3[i]==p13 && ap4[i]==p22 && ap5[i]==p12
||   ap2[i]==p13 && ap3[i]==p22 && ap4[i]==p12 && ap5[i]==p30
||   ap2[i]==p22 && ap3[i]==p12 && ap4[i]==p30 && ap5[i]==p13)

||
(ap1[i]==p22 && ap6[i]==p30)
 && (ap2[i]==p12 && ap3[i]==p21 && ap4[i]==p13 && ap5[i]==p32
||   ap2[i]==p21 && ap3[i]==p13 && ap4[i]==p32 && ap5[i]==p12
||   ap2[i]==p13 && ap3[i]==p32 && ap4[i]==p12 && ap5[i]==p21
||   ap2[i]==p32 && ap3[i]==p12 && ap4[i]==p21 && ap5[i]==p13)

||
(ap1[i]==p32 && ap6[i]==p21)
 && (ap2[i]==p12 && ap3[i]==p22 && ap4[i]==p13 && ap5[i]==p30
||   ap2[i]==p22 && ap3[i]==p13 && ap4[i]==p30 && ap5[i]==p12
||   ap2[i]==p13 && ap3[i]==p30 && ap4[i]==p12 && ap5[i]==p22
||   ap2[i]==p30 && ap3[i]==p12 && ap4[i]==p22 && ap5[i]==p13)

||
(ap1[i]==p30 && ap6[i]==p22)
 && (ap2[i]==p12 && ap3[i]==p32 && ap4[i]==p13 && ap5[i]==p21
||   ap2[i]==p32 && ap3[i]==p13 && ap4[i]==p21 && ap5[i]==p12
||   ap2[i]==p13 && ap3[i]==p21 && ap4[i]==p12 && ap5[i]==p32
||   ap2[i]==p21 && ap3[i]==p12 && ap4[i]==p32 && ap5[i]==p13)

||
(ap1[i]==p13 && ap6[i]==p12)
 && (ap2[i]==p21 && ap3[i]==p30 && ap4[i]==p32 && ap5[i]==p22
||   ap2[i]==p30 && ap3[i]==p32 && ap4[i]==p22 && ap5[i]==p21
||   ap2[i]==p32 && ap3[i]==p22 && ap4[i]==p21 && ap5[i]==p30
||   ap2[i]==p22 && ap3[i]==p21 && ap4[i]==p30 && ap5[i]==p32)

||
     //28_
(ap1[i]==p11 && ap6[i]==p14)
 && (ap2[i]==p20 && ap3[i]==p21 && ap4[i]==p29 && ap5[i]==p32
||   ap2[i]==p21 && ap3[i]==p29 && ap4[i]==p32 && ap5[i]==p20
||   ap2[i]==p29 && ap3[i]==p32 && ap4[i]==p20 && ap5[i]==p21
||   ap2[i]==p32 && ap3[i]==p20 && ap4[i]==p21 && ap5[i]==p29)

||
(ap1[i]==p20 && ap6[i]==p29)
 && (ap2[i]==p11 && ap3[i]==p32 && ap4[i]==p14 && ap5[i]==p21
||   ap2[i]==p32 && ap3[i]==p14 && ap4[i]==p21 && ap5[i]==p11
||   ap2[i]==p14 && ap3[i]==p21 && ap4[i]==p11 && ap5[i]==p32
||   ap2[i]==p21 && ap3[i]==p11 && ap4[i]==p32 && ap5[i]==p14)

||
(ap1[i]==p21 && ap6[i]==p32)
 && (ap2[i]==p11 && ap3[i]==p20 && ap4[i]==p14 && ap5[i]==p29
||   ap2[i]==p20 && ap3[i]==p14 && ap4[i]==p29 && ap5[i]==p11
||   ap2[i]==p14 && ap3[i]==p29 && ap4[i]==p11 && ap5[i]==p20
||   ap2[i]==p29 && ap3[i]==p11 && ap4[i]==p20 && ap5[i]==p14)

||
(ap1[i]==p29 && ap6[i]==p20)
 && (ap2[i]==p11 && ap3[i]==p21 && ap4[i]==p14 && ap5[i]==p32
||   ap2[i]==p21 && ap3[i]==p14 && ap4[i]==p32 && ap5[i]==p11
||   ap2[i]==p14 && ap3[i]==p32 && ap4[i]==p11 && ap5[i]==p21
||   ap2[i]==p32 && ap3[i]==p11 && ap4[i]==p21 && ap5[i]==p14)

||
(ap1[i]==p32 && ap6[i]==p21)
 && (ap2[i]==p11 && ap3[i]==p29 && ap4[i]==p14 && ap5[i]==p20
||   ap2[i]==p29 && ap3[i]==p14 && ap4[i]==p20 && ap5[i]==p11
||   ap2[i]==p14 && ap3[i]==p20 && ap4[i]==p11 && ap5[i]==p29
||   ap2[i]==p20 && ap3[i]==p11 && ap4[i]==p29 && ap5[i]==p14)

||
(ap1[i]==p14 && ap6[i]==p11)
 && (ap2[i]==p20 && ap3[i]==p32 && ap4[i]==p29 && ap5[i]==p21
||   ap2[i]==p32 && ap3[i]==p29 && ap4[i]==p21 && ap5[i]==p20
||   ap2[i]==p29 && ap3[i]==p21 && ap4[i]==p20 && ap5[i]==p32
||   ap2[i]==p21 && ap3[i]==p20 && ap4[i]==p32 && ap5[i]==p29)

||
     //29_
(ap1[i]==p7 && ap6[i]==p8)
 && (ap2[i]==p23 && ap3[i]==p26 && ap4[i]==p31 && ap5[i]==p27
||   ap2[i]==p26 && ap3[i]==p31 && ap4[i]==p27 && ap5[i]==p23
||   ap2[i]==p31 && ap3[i]==p27 && ap4[i]==p23 && ap5[i]==p26
||   ap2[i]==p27 && ap3[i]==p23 && ap4[i]==p26 && ap5[i]==p31)

||
(ap1[i]==p23 && ap6[i]==p31)
 && (ap2[i]==p7 && ap3[i]==p27 && ap4[i]==p8 && ap5[i]==p26
||   ap2[i]==p27 && ap3[i]==p8 && ap4[i]==p26 && ap5[i]==p7
||   ap2[i]==p8 && ap3[i]==p26 && ap4[i]==p7 && ap5[i]==p27
||   ap2[i]==p26 && ap3[i]==p7 && ap4[i]==p27 && ap5[i]==p8)

||
(ap1[i]==p26 && ap6[i]==p27)
 && (ap2[i]==p7 && ap3[i]==p23 && ap4[i]==p8 && ap5[i]==p31
||   ap2[i]==p23 && ap3[i]==p8 && ap4[i]==p31 && ap5[i]==p7
||   ap2[i]==p8 && ap3[i]==p31 && ap4[i]==p7 && ap5[i]==p23
||   ap2[i]==p31 && ap3[i]==p7 && ap4[i]==p23 && ap5[i]==p8)

||
(ap1[i]==p31 && ap6[i]==p23)
 && (ap2[i]==p7 && ap3[i]==p26 && ap4[i]==p8 && ap5[i]==p27
||   ap2[i]==p26 && ap3[i]==p8 && ap4[i]==p27 && ap5[i]==p7
||   ap2[i]==p8 && ap3[i]==p27 && ap4[i]==p7 && ap5[i]==p26
||   ap2[i]==p27 && ap3[i]==p7 && ap4[i]==p26 && ap5[i]==p8)

||
(ap1[i]==p27 && ap6[i]==p26)
 && (ap2[i]==p7 && ap3[i]==p31 && ap4[i]==p8 && ap5[i]==p23
||   ap2[i]==p31 && ap3[i]==p8 && ap4[i]==p23 && ap5[i]==p7
||   ap2[i]==p8 && ap3[i]==p23 && ap4[i]==p7 && ap5[i]==p31
||   ap2[i]==p23 && ap3[i]==p7 && ap4[i]==p31 && ap5[i]==p8)

||
(ap1[i]==p8 && ap6[i]==p7)
 && (ap2[i]==p23 && ap3[i]==p27 && ap4[i]==p31 && ap5[i]==p26
||   ap2[i]==p27 && ap3[i]==p31 && ap4[i]==p26 && ap5[i]==p23
||   ap2[i]==p31 && ap3[i]==p26 && ap4[i]==p23 && ap5[i]==p27
||   ap2[i]==p26 && ap3[i]==p23 && ap4[i]==p27 && ap5[i]==p31)

||
     //30_
(ap1[i]==p9 && ap6[i]==p10)
 && (ap2[i]==p23 && ap3[i]==p28 && ap4[i]==p31 && ap5[i]==p24
||   ap2[i]==p28 && ap3[i]==p31 && ap4[i]==p24 && ap5[i]==p23
||   ap2[i]==p31 && ap3[i]==p24 && ap4[i]==p23 && ap5[i]==p28
||   ap2[i]==p24 && ap3[i]==p23 && ap4[i]==p28 && ap5[i]==p31)

||
(ap1[i]==p23 && ap6[i]==p31)
 && (ap2[i]==p9 && ap3[i]==p24 && ap4[i]==p10 && ap5[i]==p28
||   ap2[i]==p24 && ap3[i]==p10 && ap4[i]==p28 && ap5[i]==p9
||   ap2[i]==p10 && ap3[i]==p28 && ap4[i]==p9 && ap5[i]==p24
||   ap2[i]==p28 && ap3[i]==p9 && ap4[i]==p24 && ap5[i]==p10)

||
(ap1[i]==p28 && ap6[i]==p24)
 && (ap2[i]==p9 && ap3[i]==p23 && ap4[i]==p10 && ap5[i]==p31
||   ap2[i]==p23 && ap3[i]==p10 && ap4[i]==p31 && ap5[i]==p9
||   ap2[i]==p10 && ap3[i]==p31 && ap4[i]==p9 && ap5[i]==p23
||   ap2[i]==p31 && ap3[i]==p9 && ap4[i]==p23 && ap5[i]==p10)

||
(ap1[i]==p31 && ap6[i]==p23)
 && (ap2[i]==p9 && ap3[i]==p28 && ap4[i]==p10 && ap5[i]==p24
||   ap2[i]==p28 && ap3[i]==p10 && ap4[i]==p24 && ap5[i]==p9
||   ap2[i]==p10 && ap3[i]==p24 && ap4[i]==p9 && ap5[i]==p28
||   ap2[i]==p24 && ap3[i]==p9 && ap4[i]==p28 && ap5[i]==p10)

||
(ap1[i]==p24 && ap6[i]==p28)
 && (ap2[i]==p9 && ap3[i]==p31 && ap4[i]==p10 && ap5[i]==p23
||   ap2[i]==p31 && ap3[i]==p10 && ap4[i]==p23 && ap5[i]==p9
||   ap2[i]==p10 && ap3[i]==p23 && ap4[i]==p9 && ap5[i]==p31
||   ap2[i]==p23 && ap3[i]==p9 && ap4[i]==p31 && ap5[i]==p10)

||
(ap1[i]==p10 && ap6[i]==p9)
 && (ap2[i]==p23 && ap3[i]==p24 && ap4[i]==p31 && ap5[i]==p28
||   ap2[i]==p24 && ap3[i]==p31 && ap4[i]==p28 && ap5[i]==p23
||   ap2[i]==p31 && ap3[i]==p28 && ap4[i]==p23 && ap5[i]==p24
||   ap2[i]==p28 && ap3[i]==p23 && ap4[i]==p24 && ap5[i]==p31)

||
     //31_
(ap1[i]==p13 && ap6[i]==p14)
 && (ap2[i]==p25 && ap3[i]==p27 && ap4[i]==p32 && ap5[i]==p26
||   ap2[i]==p27 && ap3[i]==p32 && ap4[i]==p26 && ap5[i]==p25
||   ap2[i]==p32 && ap3[i]==p26 && ap4[i]==p25 && ap5[i]==p27
||   ap2[i]==p26 && ap3[i]==p25 && ap4[i]==p27 && ap5[i]==p32)

||
(ap1[i]==p25 && ap6[i]==p32)
 && (ap2[i]==p13 && ap3[i]==p26 && ap4[i]==p14 && ap5[i]==p27
||   ap2[i]==p26 && ap3[i]==p14 && ap4[i]==p27 && ap5[i]==p13
||   ap2[i]==p14 && ap3[i]==p27 && ap4[i]==p13 && ap5[i]==p26
||   ap2[i]==p27 && ap3[i]==p13 && ap4[i]==p26 && ap5[i]==p14)

||
(ap1[i]==p27 && ap6[i]==p26)
 && (ap2[i]==p13 && ap3[i]==p25 && ap4[i]==p14 && ap5[i]==p32
||   ap2[i]==p25 && ap3[i]==p14 && ap4[i]==p32 && ap5[i]==p13
||   ap2[i]==p14 && ap3[i]==p32 && ap4[i]==p13 && ap5[i]==p25
||   ap2[i]==p32 && ap3[i]==p13 && ap4[i]==p25 && ap5[i]==p14)

||
(ap1[i]==p32 && ap6[i]==p25)
 && (ap2[i]==p13 && ap3[i]==p27 && ap4[i]==p14 && ap5[i]==p26
||   ap2[i]==p27 && ap3[i]==p14 && ap4[i]==p26 && ap5[i]==p13
||   ap2[i]==p14 && ap3[i]==p26 && ap4[i]==p13 && ap5[i]==p27
||   ap2[i]==p26 && ap3[i]==p13 && ap4[i]==p27 && ap5[i]==p14)

||
(ap1[i]==p26 && ap6[i]==p27)
 && (ap2[i]==p13 && ap3[i]==p32 && ap4[i]==p14 && ap5[i]==p25
||   ap2[i]==p32 && ap3[i]==p14 && ap4[i]==p25 && ap5[i]==p13
||   ap2[i]==p14 && ap3[i]==p25 && ap4[i]==p13 && ap5[i]==p32
||   ap2[i]==p25 && ap3[i]==p13 && ap4[i]==p32 && ap5[i]==p14)

||
(ap1[i]==p14 && ap6[i]==p13)
 && (ap2[i]==p25 && ap3[i]==p26 && ap4[i]==p32 && ap5[i]==p27
||   ap2[i]==p26 && ap3[i]==p32 && ap4[i]==p27 && ap5[i]==p25
||   ap2[i]==p32 && ap3[i]==p27 && ap4[i]==p25 && ap5[i]==p26
||   ap2[i]==p27 && ap3[i]==p25 && ap4[i]==p26 && ap5[i]==p32)

||
     //32_
(ap1[i]==p11 && ap6[i]==p12)
 && (ap2[i]==p24 && ap3[i]==p32 && ap4[i]==p28 && ap5[i]==p25
||   ap2[i]==p32 && ap3[i]==p28 && ap4[i]==p25 && ap5[i]==p24
||   ap2[i]==p28 && ap3[i]==p25 && ap4[i]==p24 && ap5[i]==p32
||   ap2[i]==p25 && ap3[i]==p24 && ap4[i]==p32 && ap5[i]==p28)

||
(ap1[i]==p24 && ap6[i]==p28)
 && (ap2[i]==p11 && ap3[i]==p25 && ap4[i]==p12 && ap5[i]==p32
||   ap2[i]==p25 && ap3[i]==p12 && ap4[i]==p32 && ap5[i]==p11
||   ap2[i]==p12 && ap3[i]==p32 && ap4[i]==p11 && ap5[i]==p25
||   ap2[i]==p32 && ap3[i]==p11 && ap4[i]==p25 && ap5[i]==p12)

||
(ap1[i]==p32 && ap6[i]==p25)
 && (ap2[i]==p11 && ap3[i]==p24 && ap4[i]==p12 && ap5[i]==p28
||   ap2[i]==p24 && ap3[i]==p12 && ap4[i]==p28 && ap5[i]==p11
||   ap2[i]==p12 && ap3[i]==p28 && ap4[i]==p11 && ap5[i]==p24
||   ap2[i]==p28 && ap3[i]==p11 && ap4[i]==p24 && ap5[i]==p12)

||
(ap1[i]==p28 && ap6[i]==p24)
 && (ap2[i]==p11 && ap3[i]==p32 && ap4[i]==p12 && ap5[i]==p25
||   ap2[i]==p32 && ap3[i]==p12 && ap4[i]==p25 && ap5[i]==p11
||   ap2[i]==p12 && ap3[i]==p25 && ap4[i]==p11 && ap5[i]==p32
||   ap2[i]==p25 && ap3[i]==p11 && ap4[i]==p32 && ap5[i]==p12)

||
(ap1[i]==p25 && ap6[i]==p32)
 && (ap2[i]==p11 && ap3[i]==p28 && ap4[i]==p12 && ap5[i]==p24
||   ap2[i]==p28 && ap3[i]==p12 && ap4[i]==p24 && ap5[i]==p11
||   ap2[i]==p12 && ap3[i]==p24 && ap4[i]==p11 && ap5[i]==p28
||   ap2[i]==p24 && ap3[i]==p11 && ap4[i]==p28 && ap5[i]==p12)

||
(ap1[i]==p12 && ap6[i]==p11)
 && (ap2[i]==p24 && ap3[i]==p25 && ap4[i]==p28 && ap5[i]==p32
||   ap2[i]==p25 && ap3[i]==p28 && ap4[i]==p32 && ap5[i]==p24
||   ap2[i]==p28 && ap3[i]==p32 && ap4[i]==p24 && ap5[i]==p25
||   ap2[i]==p32 && ap3[i]==p24 && ap4[i]==p25 && ap5[i]==p28)

)

{if (p1==0) {tmp_p1=p1; tmp_p2=p2; tmp_p3=p3; tmp_p4=p4; tmp_p5=p5;} tmp_p6=p6; bb=1; break;}
}

  // for w
if (bb==0)   { ii++;
ap1[ii]=p1; ap2[ii]=p2; ap3[ii]=p3; ap4[ii]=p4; ap5[ii]=p5; ap6[ii]=p6; ap7[ii]=p7; ap8[ii]=p8; ap9[ii]=p9;
ap10[ii]=p10; ap11[ii]=p11; ap12[ii]=p12; ap13[ii]=p13; ap14[ii]=p14; ap15[ii]=p15;
ap16[ii]=p16; ap17[ii]=p17; ap18[ii]=p18; ap19[ii]=p19; ap20[ii]=p20; ap21[ii]=p21;
ap22[ii]=p22; ap23[ii]=p23; ap24[ii]=p24; ap25[ii]=p25; ap26[ii]=p26; ap27[ii]=p27;
ap28[ii]=p28; ap29[ii]=p29; ap30[ii]=p30; ap31[ii]=p31; ap32[ii]=p32;

tmp_p1=0; tmp_p2=0; tmp_p3=0; tmp_p4=0; tmp_p5=0; tmp_p6=0;
}
}                         //**

fclose(Fpdat);
FILE*fp;
fp=fopen("fgsovm.txt","w");
for (i=1; i<=ii; i++)
{   fprintf(fp,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",
ap1[i], ap2[i], ap3[i], ap4[i], ap5[i], ap6[i], ap7[i], ap8[i], ap9[i], ap10[i], ap11[i], ap12[i], ap13[i],
ap14[i], ap15[i], ap16[i], ap17[i], ap18[i], ap19[i], ap20[i], ap21[i], ap22[i], ap23[i], ap24[i], ap25[i],
ap26[i], ap27[i], ap28[i], ap29[i], ap30[i], ap31[i], ap32[i]);
}

fclose(fp);

std::cout << "Время выполнения программы = "
            << (time(NULL)-seconds) << std::endl;

   return 0;
}              //*
//---------------------------------------------------------------------------


