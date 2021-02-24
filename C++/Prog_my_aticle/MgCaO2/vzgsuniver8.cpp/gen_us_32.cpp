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
#include <QString>
#define A 6000000


int w, rows, bb, i=1, ii=1;
int ap1[A], ap2[A], ap3[A], ap4[A], ap5[A], ap6[A], ap7[A], ap8[A], ap9[A], ap10[A],
ap11[A], ap12[A], ap13[A], ap14[A], ap15[A], ap16[A], ap17[A], ap18[A], ap19[A],
ap20[A], ap21[A], ap22[A], ap23[A], ap24[A], ap25[A], ap26[A], ap27[A], ap28[A],
ap29[A], ap30[A], ap31[A], ap32[A],

ix, iy, iz,

p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17,
p18, p19, p20, p21, p22, p23, p24, p25, p26, p27, p28, p29, p30, p31, p32,

px1, px2, px3, px4, px5, px6, px7, px8, px9, px10, px11, px12, px13, px14, px15, px16, px17,
px18, px19, px20, px21, px22, px23, px24, px25, px26, px27, px28, px29, px30, px31, px32,

py1, py2, py3, py4, py5, py6, py7, py8, py9, py10, py11, py12, py13, py14, py15, py16, py17,
py18, py19, py20, py21, py22, py23, py24, py25, py26, py27, py28, py29, py30, py31, py32,

pz1, pz2, pz3, pz4, pz5, pz6, pz7, pz8, pz9, pz10, pz11, pz12, pz13, pz14, pz15, pz16, pz17,
pz18, pz19, pz20, pz21, pz22, pz23, pz24, pz25, pz26, pz27, pz28, pz29, pz30, pz31, pz32,

v, u=0, ppx[35], ppy[35], ppz[35],

tmp_p1=0, tmp_p2=0, tmp_p3=0, tmp_p4=0, tmp_p5=0, tmp_p6=0;


QString vrp[33];

/*
p32 001
p31 003
p29 010
p20 012
p21 021
p19 023
p30 030
p22 032
p27 100
p26 102
p14 111
p7 113
p18 120
p3 122
p13 131
p8 133
p25 201
p23 203
p17 210
p2 212
p6 221
p1 223
p15 230
p4 232
p28 300
p24 302
p11 311
p12 313
p16 320
p5 322
p12 331
p9 333

p1 223
p2 212
p3 122
p4 232
p5 322
p6 221
p7 113
p8 133
p9 333
p10 313
p11 311
p12 331
p13 131
p14 111
p15 230
p16 320
p17 210
p18 120
p19 023
p20 012
p21 021
p22 032
p23 203
p24 302
p25 201
p26 102
p27 100
p28 300
p29 010
p30 030
p31 003
p32 001
*/

int main()

{
// for anions
/*    ix=0; iy=0; iz=0;
    ix=0; iy=0; iz=2;
    ix=0; iy=1; iz=1;
    ix=0; iy=1; iz=3;
    ix=0; iy=2; iz=0;
    ix=0; iy=2; iz=2;
    ix=0; iy=3; iz=1;
    ix=0; iy=3; iz=3;
    ix=1; iy=0; iz=1;
    ix=1; iy=0; iz=3;
    ix=1; iy=1; iz=0;
    ix=1; iy=1; iz=2;
    ix=1; iy=2; iz=1;
    ix=1; iy=2; iz=3;
    ix=1; iy=3; iz=0;
    ix=1; iy=3; iz=2;
    ix=2; iy=0; iz=0;
    ix=2; iy=0; iz=2;
    ix=2; iy=1; iz=1;
    ix=2; iy=1; iz=3;
    ix=2; iy=2; iz=0;
    ix=2; iy=2; iz=2;
    ix=2; iy=3; iz=1;
    ix=2; iy=3; iz=3;
    ix=3; iy=0; iz=1;
    ix=3; iy=0; iz=3;
    ix=3; iy=1; iz=0;
    ix=3; iy=1; iz=2;
    ix=3; iy=2; iz=1;
    ix=3; iy=2; iz=3;
    ix=3; iy=3; iz=0;
    ix=3; iy=3; iz=2; */
   
// for cations

    px1=2; py1=2; pz1=3;
    px2=2; py2=1; pz2=2;
    px3=1; py3=2; pz3=2;
    px4=2; py4=3; pz4=2;
    px5=3; py5=2; pz5=2;
    px6=2; py6=2; pz6=1;
    px7=1; py7=1; pz7=3;
    px8=1; py8=3; pz8=3;
    px9=3; py9=3; pz9=3;
    px10=3; py10=1; pz10=3;
    px11=3; py11=1; pz11=1;
    px12=3; py12=3; pz12=1;
    px13=1; py13=3; pz13=1;
    px14=1; py14=1; pz14=1;
    px15=2; py15=3; pz15=0;
    px16=3; py16=2; pz16=0;
    px17=2; py17=1; pz17=0;
    px18=1; py18=2; pz18=0;
    px19=0; py19=2; pz19=3;
    px20=0; py20=1; pz20=2;
    px21=0; py21=2; pz21=1;
    px22=0; py22=3; pz22=2;
    px23=2; py23=0; pz23=3;
    px24=3; py24=0; pz24=2;
    px25=2; py25=0; pz25=1;
    px26=1; py26=0; pz26=2;
    px27=1; py27=0; pz27=0;
    px28=3; py28=0; pz28=0;
    px29=0; py29=1; pz29=0;
    px30=0; py30=3; pz30=0;
    px31=0; py31=0; pz31=3;
    px32=0; py32=0; pz32=1;


    //*
time_t seconds = time(NULL); // получить текущую дату, выраженную в секундах

   for (ix=0; ix<=3; ix++)
   for (iy=0; iy<=3; iy++)
   for (iz=0; iz<=3; iz++)
{
   if ( (ix+iy+iz)%2!=0 ) continue;
//if ( (ix+iy+iz)%2!=0 )

   ppx[1]=px1+ix; ppy[1]=py1+iy; ppz[1]=pz1+iz;
   ppx[2]=px2+ix; ppy[2]=py2+iy; ppz[2]=pz2+iz;
   ppx[3]=px3+ix; ppy[3]=py3+iy; ppz[3]=pz3+iz;
   ppx[4]=px4+ix; ppy[4]=py4+iy; ppz[4]=pz4+iz;
   ppx[5]=px5+ix; ppy[5]=py5+iy; ppz[5]=pz5+iz;
   ppx[6]=px6+ix; ppy[6]=py6+iy; ppz[6]=pz6+iz;
   ppx[7]=px7+ix; ppy[7]=py7+iy; ppz[7]=pz7+iz;
   ppx[8]=px8+ix; ppy[8]=py8+iy; ppz[8]=pz8+iz;
   ppx[9]=px9+ix; ppy[9]=py9+iy; ppz[9]=pz9+iz;
   ppx[10]=px10+ix; ppy[10]=py10+iy; ppz[10]=pz10+iz;
   ppx[11]=px11+ix; ppy[11]=py11+iy; ppz[11]=pz11+iz;
   ppx[12]=px12+ix; ppy[12]=py12+iy; ppz[12]=pz12+iz;
   ppx[13]=px13+ix; ppy[13]=py13+iy; ppz[13]=pz13+iz;
   ppx[14]=px14+ix; ppy[14]=py14+iy; ppz[14]=pz14+iz;
   ppx[15]=px15+ix; ppy[15]=py15+iy; ppz[15]=pz15+iz;
   ppx[16]=px16+ix; ppy[16]=py16+iy; ppz[16]=pz16+iz;
   ppx[17]=px17+ix; ppy[17]=py17+iy; ppz[17]=pz17+iz;
   ppx[18]=px18+ix; ppy[18]=py18+iy; ppz[18]=pz18+iz;
   ppx[19]=px19+ix; ppy[19]=py19+iy; ppz[19]=pz19+iz;
   ppx[20]=px20+ix; ppy[20]=py20+iy; ppz[20]=pz20+iz;
   ppx[21]=px21+ix; ppy[21]=py21+iy; ppz[21]=pz21+iz;
   ppx[22]=px22+ix; ppy[22]=py22+iy; ppz[22]=pz22+iz;
   ppx[23]=px23+ix; ppy[23]=py23+iy; ppz[23]=pz23+iz;
   ppx[24]=px24+ix; ppy[24]=py24+iy; ppz[24]=pz24+iz;
   ppx[25]=px25+ix; ppy[25]=py25+iy; ppz[25]=pz25+iz;
   ppx[26]=px26+ix; ppy[26]=py26+iy; ppz[26]=pz26+iz;
   ppx[27]=px27+ix; ppy[27]=py27+iy; ppz[27]=pz27+iz;
   ppx[28]=px28+ix; ppy[28]=py28+iy; ppz[28]=pz28+iz;
   ppx[29]=px29+ix; ppy[29]=py29+iy; ppz[29]=pz29+iz;
   ppx[30]=px30+ix; ppy[30]=py30+iy; ppz[30]=pz30+iz;
   ppx[31]=px31+ix; ppy[31]=py31+iy; ppz[31]=pz31+iz;
   ppx[32]=px32+ix; ppy[32]=py32+iy; ppz[32]=pz32+iz;


     for (v=1; v<=32; v++)
     {
         if ((ppx[v]==px1 && ppy[v]==py1 && ppz[v]==pz1) || (ppx[v]-4==px1 && ppy[v]==py1 && ppz[v]==pz1) ||
                (ppx[v]==px1 && ppy[v]-4==py1 && ppz[v]==pz1) || (ppx[v]==px1 && ppy[v]==py1 && ppz[v]-4==pz1) ||
                (ppx[v]-4==px1 && ppy[v]-4==py1 && ppz[v]==pz1) || (ppx[v]==px1 && ppy[v]-4==py1 && ppz[v]-4==pz1) ||
                (ppx[v]-4==px1 && ppy[v]==py1 && ppz[v]-4==pz1) || (ppx[v]-4==px1 && ppy[v]-4==py1 && ppz[v]-4==pz1) )
                vrp[v]="p1";

         if ((ppx[v]==px2 && ppy[v]==py2 && ppz[v]==pz2) || (ppx[v]-4==px2 && ppy[v]==py2 && ppz[v]==pz2) ||
                (ppx[v]==px2 && ppy[v]-4==py2 && ppz[v]==pz2) || (ppx[v]==px2 && ppy[v]==py2 && ppz[v]-4==pz2) ||
                (ppx[v]-4==px2 && ppy[v]-4==py2 && ppz[v]==pz2) || (ppx[v]==px2 && ppy[v]-4==py2 && ppz[v]-4==pz2) ||
                (ppx[v]-4==px2 && ppy[v]==py2 && ppz[v]-4==pz2) || (ppx[v]-4==px2 && ppy[v]-4==py2 && ppz[v]-4==pz2) )
                 vrp[v]="p2";

         if ((ppx[v]==px3 && ppy[v]==py3 && ppz[v]==pz3) || (ppx[v]-4==px3 && ppy[v]==py3 && ppz[v]==pz3) ||
                (ppx[v]==px3 && ppy[v]-4==py3 && ppz[v]==pz3) || (ppx[v]==px3 && ppy[v]==py3 && ppz[v]-4==pz3) ||
                (ppx[v]-4==px3 && ppy[v]-4==py3 && ppz[v]==pz3) || (ppx[v]==px3 && ppy[v]-4==py3 && ppz[v]-4==pz3) ||
                (ppx[v]-4==px3 && ppy[v]==py3 && ppz[v]-4==pz3) || (ppx[v]-4==px3 && ppy[v]-4==py3 && ppz[v]-4==pz3) )
                 vrp[v]="p3";

         if ((ppx[v]==px4 && ppy[v]==py4 && ppz[v]==pz4) || (ppx[v]-4==px4 && ppy[v]==py4 && ppz[v]==pz4) ||
                (ppx[v]==px4 && ppy[v]-4==py4 && ppz[v]==pz4) || (ppx[v]==px4 && ppy[v]==py4 && ppz[v]-4==pz4) ||
                (ppx[v]-4==px4 && ppy[v]-4==py4 && ppz[v]==pz4) || (ppx[v]==px4 && ppy[v]-4==py4 && ppz[v]-4==pz4) ||
                (ppx[v]-4==px4 && ppy[v]==py4 && ppz[v]-4==pz4) || (ppx[v]-4==px4 && ppy[v]-4==py4 && ppz[v]-4==pz4) )
                 vrp[v]="p4";

         if ((ppx[v]==px5 && ppy[v]==py5 && ppz[v]==pz5) || (ppx[v]-4==px5 && ppy[v]==py5 && ppz[v]==pz5) ||
                (ppx[v]==px5 && ppy[v]-4==py5 && ppz[v]==pz5) || (ppx[v]==px5 && ppy[v]==py5 && ppz[v]-4==pz5) ||
                (ppx[v]-4==px5 && ppy[v]-4==py5 && ppz[v]==pz5) || (ppx[v]==px5 && ppy[v]-4==py5 && ppz[v]-4==pz5) ||
                (ppx[v]-4==px5 && ppy[v]==py5 && ppz[v]-4==pz5) || (ppx[v]-4==px5 && ppy[v]-4==py5 && ppz[v]-4==pz5) )
                 vrp[v]="p5";

         if ((ppx[v]==px6 && ppy[v]==py6 && ppz[v]==pz6) || (ppx[v]-4==px6 && ppy[v]==py6 && ppz[v]==pz6) ||
                (ppx[v]==px6 && ppy[v]-4==py6 && ppz[v]==pz6) || (ppx[v]==px6 && ppy[v]==py6 && ppz[v]-4==pz6) ||
                (ppx[v]-4==px6 && ppy[v]-4==py6 && ppz[v]==pz6) || (ppx[v]==px6 && ppy[v]-4==py6 && ppz[v]-4==pz6) ||
                (ppx[v]-4==px6 && ppy[v]==py6 && ppz[v]-4==pz6) || (ppx[v]-4==px6 && ppy[v]-4==py6 && ppz[v]-4==pz6) )
                 vrp[v]="p6";

         if ((ppx[v]==px7 && ppy[v]==py7 && ppz[v]==pz7) || (ppx[v]-4==px7 && ppy[v]==py7 && ppz[v]==pz7) ||
                (ppx[v]==px7 && ppy[v]-4==py7 && ppz[v]==pz7) || (ppx[v]==px7 && ppy[v]==py7 && ppz[v]-4==pz7) ||
                (ppx[v]-4==px7 && ppy[v]-4==py7 && ppz[v]==pz7) || (ppx[v]==px7 && ppy[v]-4==py7 && ppz[v]-4==pz7) ||
                (ppx[v]-4==px7 && ppy[v]==py7 && ppz[v]-4==pz7) || (ppx[v]-4==px7 && ppy[v]-4==py7 && ppz[v]-4==pz7) )
                 vrp[v]="p7";

         if ((ppx[v]==px8 && ppy[v]==py8 && ppz[v]==pz8) || (ppx[v]-4==px8 && ppy[v]==py8 && ppz[v]==pz8) ||
                (ppx[v]==px8 && ppy[v]-4==py8 && ppz[v]==pz8) || (ppx[v]==px8 && ppy[v]==py8 && ppz[v]-4==pz8) ||
                (ppx[v]-4==px8 && ppy[v]-4==py8 && ppz[v]==pz8) || (ppx[v]==px8 && ppy[v]-4==py8 && ppz[v]-4==pz8) ||
                (ppx[v]-4==px8 && ppy[v]==py8 && ppz[v]-4==pz8) || (ppx[v]-4==px8 && ppy[v]-4==py8 && ppz[v]-4==pz8) )
                 vrp[v]="p8";

         if ((ppx[v]==px9 && ppy[v]==py9 && ppz[v]==pz9) || (ppx[v]-4==px9 && ppy[v]==py9 && ppz[v]==pz9) ||
                (ppx[v]==px9 && ppy[v]-4==py9 && ppz[v]==pz9) || (ppx[v]==px9 && ppy[v]==py9 && ppz[v]-4==pz9) ||
                (ppx[v]-4==px9 && ppy[v]-4==py9 && ppz[v]==pz9) || (ppx[v]==px9 && ppy[v]-4==py9 && ppz[v]-4==pz9) ||
                (ppx[v]-4==px9 && ppy[v]==py9 && ppz[v]-4==pz9) || (ppx[v]-4==px9 && ppy[v]-4==py9 && ppz[v]-4==pz9) )
                 vrp[v]="p9";

         if ((ppx[v]==px10 && ppy[v]==py10 && ppz[v]==pz10) || (ppx[v]-4==px10 && ppy[v]==py10 && ppz[v]==pz10) ||
                (ppx[v]==px10 && ppy[v]-4==py10 && ppz[v]==pz10) || (ppx[v]==px10 && ppy[v]==py10 && ppz[v]-4==pz10) ||
                (ppx[v]-4==px10 && ppy[v]-4==py10 && ppz[v]==pz10) || (ppx[v]==px10 && ppy[v]-4==py10 && ppz[v]-4==pz10) ||
                (ppx[v]-4==px10 && ppy[v]==py10 && ppz[v]-4==pz10) || (ppx[v]-4==px10 && ppy[v]-4==py10 && ppz[v]-4==pz10) )
                 vrp[v]="p10";

         if ((ppx[v]==px11 && ppy[v]==py11 && ppz[v]==pz11) || (ppx[v]-4==px11 && ppy[v]==py11 && ppz[v]==pz11) ||
                (ppx[v]==px11 && ppy[v]-4==py11 && ppz[v]==pz11) || (ppx[v]==px11 && ppy[v]==py11 && ppz[v]-4==pz11) ||
                (ppx[v]-4==px11 && ppy[v]-4==py11 && ppz[v]==pz11) || (ppx[v]==px11 && ppy[v]-4==py11 && ppz[v]-4==pz11) ||
                (ppx[v]-4==px11 && ppy[v]==py11 && ppz[v]-4==pz11) || (ppx[v]-4==px11 && ppy[v]-4==py11 && ppz[v]-4==pz11) )
                 vrp[v]="p11";

         if ((ppx[v]==px12 && ppy[v]==py12 && ppz[v]==pz12) || (ppx[v]-4==px12 && ppy[v]==py12 && ppz[v]==pz12) ||
                (ppx[v]==px12 && ppy[v]-4==py12 && ppz[v]==pz12) || (ppx[v]==px12 && ppy[v]==py12 && ppz[v]-4==pz12) ||
                (ppx[v]-4==px12 && ppy[v]-4==py12 && ppz[v]==pz12) || (ppx[v]==px12 && ppy[v]-4==py12 && ppz[v]-4==pz12) ||
                (ppx[v]-4==px12 && ppy[v]==py12 && ppz[v]-4==pz12) || (ppx[v]-4==px12 && ppy[v]-4==py12 && ppz[v]-4==pz12) )
                 vrp[v]="p12";

         if ((ppx[v]==px13 && ppy[v]==py13 && ppz[v]==pz13) || (ppx[v]-4==px13 && ppy[v]==py13 && ppz[v]==pz13) ||
                (ppx[v]==px13 && ppy[v]-4==py13 && ppz[v]==pz13) || (ppx[v]==px13 && ppy[v]==py13 && ppz[v]-4==pz13) ||
                (ppx[v]-4==px13 && ppy[v]-4==py13 && ppz[v]==pz13) || (ppx[v]==px13 && ppy[v]-4==py13 && ppz[v]-4==pz13) ||
                (ppx[v]-4==px13 && ppy[v]==py13 && ppz[v]-4==pz13) || (ppx[v]-4==px13 && ppy[v]-4==py13 && ppz[v]-4==pz13) )
                 vrp[v]="p13";

         if ((ppx[v]==px14 && ppy[v]==py14 && ppz[v]==pz14) || (ppx[v]-4==px14 && ppy[v]==py14 && ppz[v]==pz14) ||
                (ppx[v]==px14 && ppy[v]-4==py14 && ppz[v]==pz14) || (ppx[v]==px14 && ppy[v]==py14 && ppz[v]-4==pz14) ||
                (ppx[v]-4==px14 && ppy[v]-4==py14 && ppz[v]==pz14) || (ppx[v]==px14 && ppy[v]-4==py14 && ppz[v]-4==pz14) ||
                (ppx[v]-4==px14 && ppy[v]==py14 && ppz[v]-4==pz14) || (ppx[v]-4==px14 && ppy[v]-4==py14 && ppz[v]-4==pz14) )
                 vrp[v]="p14";

         if ((ppx[v]==px15 && ppy[v]==py15 && ppz[v]==pz15) || (ppx[v]-4==px15 && ppy[v]==py15 && ppz[v]==pz15) ||
                (ppx[v]==px15 && ppy[v]-4==py15 && ppz[v]==pz15) || (ppx[v]==px15 && ppy[v]==py15 && ppz[v]-4==pz15) ||
                (ppx[v]-4==px15 && ppy[v]-4==py15 && ppz[v]==pz15) || (ppx[v]==px15 && ppy[v]-4==py15 && ppz[v]-4==pz15) ||
                (ppx[v]-4==px15 && ppy[v]==py15 && ppz[v]-4==pz15) || (ppx[v]-4==px15 && ppy[v]-4==py15 && ppz[v]-4==pz15) )
                 vrp[v]="p15";

         if ((ppx[v]==px16 && ppy[v]==py16 && ppz[v]==pz16) || (ppx[v]-4==px16 && ppy[v]==py16 && ppz[v]==pz16) ||
                (ppx[v]==px16 && ppy[v]-4==py16 && ppz[v]==pz16) || (ppx[v]==px16 && ppy[v]==py16 && ppz[v]-4==pz16) ||
                (ppx[v]-4==px16 && ppy[v]-4==py16 && ppz[v]==pz16) || (ppx[v]==px16 && ppy[v]-4==py16 && ppz[v]-4==pz16) ||
                (ppx[v]-4==px16 && ppy[v]==py16 && ppz[v]-4==pz16) || (ppx[v]-4==px16 && ppy[v]-4==py16 && ppz[v]-4==pz16) )
                 vrp[v]="p16";

         if ((ppx[v]==px17 && ppy[v]==py17 && ppz[v]==pz17) || (ppx[v]-4==px17 && ppy[v]==py17 && ppz[v]==pz17) ||
                (ppx[v]==px17 && ppy[v]-4==py17 && ppz[v]==pz17) || (ppx[v]==px17 && ppy[v]==py17 && ppz[v]-4==pz17) ||
                (ppx[v]-4==px17 && ppy[v]-4==py17 && ppz[v]==pz17) || (ppx[v]==px17 && ppy[v]-4==py17 && ppz[v]-4==pz17) ||
                (ppx[v]-4==px17 && ppy[v]==py17 && ppz[v]-4==pz17) || (ppx[v]-4==px17 && ppy[v]-4==py17 && ppz[v]-4==pz17) )
                 vrp[v]="p17";

         if ((ppx[v]==px18 && ppy[v]==py18 && ppz[v]==pz18) || (ppx[v]-4==px18 && ppy[v]==py18 && ppz[v]==pz18) ||
                (ppx[v]==px18 && ppy[v]-4==py18 && ppz[v]==pz18) || (ppx[v]==px18 && ppy[v]==py18 && ppz[v]-4==pz18) ||
                (ppx[v]-4==px18 && ppy[v]-4==py18 && ppz[v]==pz18) || (ppx[v]==px18 && ppy[v]-4==py18 && ppz[v]-4==pz18) ||
                (ppx[v]-4==px18 && ppy[v]==py18 && ppz[v]-4==pz18) || (ppx[v]-4==px18 && ppy[v]-4==py18 && ppz[v]-4==pz18) )
                 vrp[v]="p18";

         if ((ppx[v]==px19 && ppy[v]==py19 && ppz[v]==pz19) || (ppx[v]-4==px19 && ppy[v]==py19 && ppz[v]==pz19) ||
                (ppx[v]==px19 && ppy[v]-4==py19 && ppz[v]==pz19) || (ppx[v]==px19 && ppy[v]==py19 && ppz[v]-4==pz19) ||
                (ppx[v]-4==px19 && ppy[v]-4==py19 && ppz[v]==pz19) || (ppx[v]==px19 && ppy[v]-4==py19 && ppz[v]-4==pz19) ||
                (ppx[v]-4==px19 && ppy[v]==py19 && ppz[v]-4==pz19) || (ppx[v]-4==px19 && ppy[v]-4==py19 && ppz[v]-4==pz19) )
                 vrp[v]="p19";

         if ((ppx[v]==px20 && ppy[v]==py20 && ppz[v]==pz20) || (ppx[v]-4==px20 && ppy[v]==py20 && ppz[v]==pz20) ||
                (ppx[v]==px20 && ppy[v]-4==py20 && ppz[v]==pz20) || (ppx[v]==px20 && ppy[v]==py20 && ppz[v]-4==pz20) ||
                (ppx[v]-4==px20 && ppy[v]-4==py20 && ppz[v]==pz20) || (ppx[v]==px20 && ppy[v]-4==py20 && ppz[v]-4==pz20) ||
                (ppx[v]-4==px20 && ppy[v]==py20 && ppz[v]-4==pz20) || (ppx[v]-4==px20 && ppy[v]-4==py20 && ppz[v]-4==pz20) )
                 vrp[v]="p20";

          if ((ppx[v]==px21 && ppy[v]==py21 && ppz[v]==pz21) || (ppx[v]-4==px21 && ppy[v]==py21 && ppz[v]==pz21) ||
                 (ppx[v]==px21 && ppy[v]-4==py21 && ppz[v]==pz21) || (ppx[v]==px21 && ppy[v]==py21 && ppz[v]-4==pz21) ||
                 (ppx[v]-4==px21 && ppy[v]-4==py21 && ppz[v]==pz21) || (ppx[v]==px21 && ppy[v]-4==py21 && ppz[v]-4==pz21) ||
                 (ppx[v]-4==px21 && ppy[v]==py21 && ppz[v]-4==pz21) || (ppx[v]-4==px21 && ppy[v]-4==py21 && ppz[v]-4==pz21) )
                  vrp[v]="p21";

          if ((ppx[v]==px22 && ppy[v]==py22 && ppz[v]==pz22) || (ppx[v]-4==px22 && ppy[v]==py22 && ppz[v]==pz22) ||
                 (ppx[v]==px22 && ppy[v]-4==py22 && ppz[v]==pz22) || (ppx[v]==px22 && ppy[v]==py22 && ppz[v]-4==pz22) ||
                 (ppx[v]-4==px22 && ppy[v]-4==py22 && ppz[v]==pz22) || (ppx[v]==px22 && ppy[v]-4==py22 && ppz[v]-4==pz22) ||
                 (ppx[v]-4==px22 && ppy[v]==py22 && ppz[v]-4==pz22) || (ppx[v]-4==px22 && ppy[v]-4==py22 && ppz[v]-4==pz22) )
                  vrp[v]="p22";

          if ((ppx[v]==px23 && ppy[v]==py23 && ppz[v]==pz23) || (ppx[v]-4==px23 && ppy[v]==py23 && ppz[v]==pz23) ||
                 (ppx[v]==px23 && ppy[v]-4==py23 && ppz[v]==pz23) || (ppx[v]==px23 && ppy[v]==py23 && ppz[v]-4==pz23) ||
                 (ppx[v]-4==px23 && ppy[v]-4==py23 && ppz[v]==pz23) || (ppx[v]==px23 && ppy[v]-4==py23 && ppz[v]-4==pz23) ||
                 (ppx[v]-4==px23 && ppy[v]==py23 && ppz[v]-4==pz23) || (ppx[v]-4==px23 && ppy[v]-4==py23 && ppz[v]-4==pz23) )
                  vrp[v]="p23";

          if ((ppx[v]==px24 && ppy[v]==py24 && ppz[v]==pz24) || (ppx[v]-4==px24 && ppy[v]==py24 && ppz[v]==pz24) ||
                 (ppx[v]==px24 && ppy[v]-4==py24 && ppz[v]==pz24) || (ppx[v]==px24 && ppy[v]==py24 && ppz[v]-4==pz24) ||
                 (ppx[v]-4==px24 && ppy[v]-4==py24 && ppz[v]==pz24) || (ppx[v]==px24 && ppy[v]-4==py24 && ppz[v]-4==pz24) ||
                 (ppx[v]-4==px24 && ppy[v]==py24 && ppz[v]-4==pz24) || (ppx[v]-4==px24 && ppy[v]-4==py24 && ppz[v]-4==pz24) )
                  vrp[v]="p24";

          if ((ppx[v]==px25 && ppy[v]==py25 && ppz[v]==pz25) || (ppx[v]-4==px25 && ppy[v]==py25 && ppz[v]==pz25) ||
                 (ppx[v]==px25 && ppy[v]-4==py25 && ppz[v]==pz25) || (ppx[v]==px25 && ppy[v]==py25 && ppz[v]-4==pz25) ||
                 (ppx[v]-4==px25 && ppy[v]-4==py25 && ppz[v]==pz25) || (ppx[v]==px25 && ppy[v]-4==py25 && ppz[v]-4==pz25) ||
                 (ppx[v]-4==px25 && ppy[v]==py25 && ppz[v]-4==pz25) || (ppx[v]-4==px25 && ppy[v]-4==py25 && ppz[v]-4==pz25) )
                  vrp[v]="p25";

          if ((ppx[v]==px26 && ppy[v]==py26 && ppz[v]==pz26) || (ppx[v]-4==px26 && ppy[v]==py26 && ppz[v]==pz26) ||
                 (ppx[v]==px26 && ppy[v]-4==py26 && ppz[v]==pz26) || (ppx[v]==px26 && ppy[v]==py26 && ppz[v]-4==pz26) ||
                 (ppx[v]-4==px26 && ppy[v]-4==py26 && ppz[v]==pz26) || (ppx[v]==px26 && ppy[v]-4==py26 && ppz[v]-4==pz26) ||
                 (ppx[v]-4==px26 && ppy[v]==py26 && ppz[v]-4==pz26) || (ppx[v]-4==px26 && ppy[v]-4==py26 && ppz[v]-4==pz26) )
                  vrp[v]="p26";

          if ((ppx[v]==px27 && ppy[v]==py27 && ppz[v]==pz27) || (ppx[v]-4==px27 && ppy[v]==py27 && ppz[v]==pz27) ||
                 (ppx[v]==px27 && ppy[v]-4==py27 && ppz[v]==pz27) || (ppx[v]==px27 && ppy[v]==py27 && ppz[v]-4==pz27) ||
                 (ppx[v]-4==px27 && ppy[v]-4==py27 && ppz[v]==pz27) || (ppx[v]==px27 && ppy[v]-4==py27 && ppz[v]-4==pz27) ||
                 (ppx[v]-4==px27 && ppy[v]==py27 && ppz[v]-4==pz27) || (ppx[v]-4==px27 && ppy[v]-4==py27 && ppz[v]-4==pz27) )
                  vrp[v]="p27";

          if ((ppx[v]==px28 && ppy[v]==py28 && ppz[v]==pz28) || (ppx[v]-4==px28 && ppy[v]==py28 && ppz[v]==pz28) ||
                 (ppx[v]==px28 && ppy[v]-4==py28 && ppz[v]==pz28) || (ppx[v]==px28 && ppy[v]==py28 && ppz[v]-4==pz28) ||
                 (ppx[v]-4==px28 && ppy[v]-4==py28 && ppz[v]==pz28) || (ppx[v]==px28 && ppy[v]-4==py28 && ppz[v]-4==pz28) ||
                 (ppx[v]-4==px28 && ppy[v]==py28 && ppz[v]-4==pz28) || (ppx[v]-4==px28 && ppy[v]-4==py28 && ppz[v]-4==pz28) )
                  vrp[v]="p28";

          if ((ppx[v]==px29 && ppy[v]==py29 && ppz[v]==pz29) || (ppx[v]-4==px29 && ppy[v]==py29 && ppz[v]==pz29) ||
                 (ppx[v]==px29 && ppy[v]-4==py29 && ppz[v]==pz29) || (ppx[v]==px29 && ppy[v]==py29 && ppz[v]-4==pz29) ||
                 (ppx[v]-4==px29 && ppy[v]-4==py29 && ppz[v]==pz29) || (ppx[v]==px29 && ppy[v]-4==py29 && ppz[v]-4==pz29) ||
                 (ppx[v]-4==px29 && ppy[v]==py29 && ppz[v]-4==pz29) || (ppx[v]-4==px29 && ppy[v]-4==py29 && ppz[v]-4==pz29) )
                  vrp[v]="p29";

          if ((ppx[v]==px30 && ppy[v]==py30 && ppz[v]==pz30) || (ppx[v]-4==px30 && ppy[v]==py30 && ppz[v]==pz30) ||
                 (ppx[v]==px30 && ppy[v]-4==py30 && ppz[v]==pz30) || (ppx[v]==px30 && ppy[v]==py30 && ppz[v]-4==pz30) ||
                 (ppx[v]-4==px30 && ppy[v]-4==py30 && ppz[v]==pz30) || (ppx[v]==px30 && ppy[v]-4==py30 && ppz[v]-4==pz30) ||
                 (ppx[v]-4==px30 && ppy[v]==py30 && ppz[v]-4==pz30) || (ppx[v]-4==px30 && ppy[v]-4==py30 && ppz[v]-4==pz30) )
                  vrp[v]="p30";

          if ((ppx[v]==px31 && ppy[v]==py31 && ppz[v]==pz31) || (ppx[v]-4==px31 && ppy[v]==py31 && ppz[v]==pz31) ||
                 (ppx[v]==px31 && ppy[v]-4==py31 && ppz[v]==pz31) || (ppx[v]==px31 && ppy[v]==py31 && ppz[v]-4==pz31) ||
                 (ppx[v]-4==px31 && ppy[v]-4==py31 && ppz[v]==pz31) || (ppx[v]==px31 && ppy[v]-4==py31 && ppz[v]-4==pz31) ||
                 (ppx[v]-4==px31 && ppy[v]==py31 && ppz[v]-4==pz31) || (ppx[v]-4==px31 && ppy[v]-4==py31 && ppz[v]-4==pz31) )
                  vrp[v]="p31";

          if ((ppx[v]==px32 && ppy[v]==py32 && ppz[v]==pz32) || (ppx[v]-4==px32 && ppy[v]==py32 && ppz[v]==pz32) ||
                 (ppx[v]==px32 && ppy[v]-4==py32 && ppz[v]==pz32) || (ppx[v]==px32 && ppy[v]==py32 && ppz[v]-4==pz32) ||
                 (ppx[v]-4==px32 && ppy[v]-4==py32 && ppz[v]==pz32) || (ppx[v]==px32 && ppy[v]-4==py32 && ppz[v]-4==pz32) ||
                 (ppx[v]-4==px32 && ppy[v]==py32 && ppz[v]-4==pz32) || (ppx[v]-4==px32 && ppy[v]-4==py32 && ppz[v]-4==pz32) )
                  vrp[v]="p32";
}
/*
     std::cout << "v" << vrp[1].toStdString () << vrp[2].toStdString () << vrp[3].toStdString () << vrp[4].toStdString () <<
                         vrp[5].toStdString () << vrp[6].toStdString () << vrp[7].toStdString () << vrp[8].toStdString () <<
                         vrp[9].toStdString () << vrp[10].toStdString () << vrp[11].toStdString () << vrp[12].toStdString () <<
                         vrp[13].toStdString () << vrp[14].toStdString () << vrp[15].toStdString () << vrp[16].toStdString () <<
                         vrp[17].toStdString () << vrp[18].toStdString () << vrp[19].toStdString () << vrp[20].toStdString () <<
                         vrp[21].toStdString () << vrp[22].toStdString () << vrp[23].toStdString () << vrp[24].toStdString () <<
                         vrp[25].toStdString () << vrp[26].toStdString () << vrp[27].toStdString () << vrp[28].toStdString () <<
                         vrp[29].toStdString () << vrp[30].toStdString () << vrp[31].toStdString () << vrp[32].toStdString () << std::endl;
*/
u++;

if (u>14)
{ if (u>1) std::cout << " || " << std::endl;

    std::cout << "                                    // " << u << std::endl;
     std::cout << "(ap1[i]==" << vrp[1].toStdString () << " && ap6[i]==" << vrp[6].toStdString () << ")" << std::endl;
     std::cout << " && (ap2[i]==" << vrp[2].toStdString () << " && ap5[i]==" << vrp[5].toStdString () << " && ap4[i]==" << vrp[4].toStdString () << " && ap3[i]==" << vrp[3].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[7].toStdString () << " && ap10[i]==" << vrp[10].toStdString () << " && ap9[i]==" << vrp[9].toStdString () << " && ap8[i]==" << vrp[8].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[14].toStdString () << " && ap11[i]==" << vrp[11].toStdString () << " && ap12[i]==" << vrp[12].toStdString () << " && ap13[i]==" << vrp[13].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[17].toStdString () << " && ap16[i]==" << vrp[16].toStdString () << " && ap15[i]==" << vrp[15].toStdString () << " && ap18[i]==" << vrp[18].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[23].toStdString () << " && ap19[i]==" << vrp[19].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[26].toStdString () << " && ap24[i]==" << vrp[24].toStdString () << " && ap20[i]==" << vrp[20].toStdString () << " && ap22[i]==" << vrp[22].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[25].toStdString () << " && ap21[i]==" << vrp[21].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[27].toStdString () << " && ap28[i]==" << vrp[28].toStdString () << " && ap29[i]==" << vrp[29].toStdString () << " && ap30[i]==" << vrp[30].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[31].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[32].toStdString () << std::endl;
       std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[5].toStdString () << " && ap5[i]==" << vrp[4].toStdString () << " && ap4[i]==" << vrp[3].toStdString () << " && ap3[i]==" << vrp[2].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[10].toStdString () << " && ap10[i]==" << vrp[9].toStdString () << " && ap9[i]==" << vrp[8].toStdString () << " && ap8[i]==" << vrp[7].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[11].toStdString () << " && ap11[i]==" << vrp[12].toStdString () << " && ap12[i]==" << vrp[13].toStdString () << " && ap13[i]==" << vrp[14].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[16].toStdString () << " && ap16[i]==" << vrp[15].toStdString () << " && ap15[i]==" << vrp[18].toStdString () << " && ap18[i]==" << vrp[17].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[19].toStdString () << " && ap19[i]==" << vrp[23].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[20].toStdString () << " && ap24[i]==" << vrp[22].toStdString () << " && ap20[i]==" << vrp[24].toStdString () << " && ap22[i]==" << vrp[26].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[21].toStdString () << " && ap21[i]==" << vrp[25].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[29].toStdString () << " && ap28[i]==" << vrp[30].toStdString () << " && ap29[i]==" << vrp[28].toStdString () << " && ap30[i]==" << vrp[27].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[31].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[32].toStdString () << std::endl;
       std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[4].toStdString () << " && ap5[i]==" << vrp[3].toStdString () << " && ap4[i]==" << vrp[2].toStdString () << " && ap3[i]==" << vrp[5].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[9].toStdString () << " && ap10[i]==" << vrp[8].toStdString () << " && ap9[i]==" << vrp[7].toStdString () << " && ap8[i]==" << vrp[10].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[12].toStdString () << " && ap11[i]==" << vrp[13].toStdString () << " && ap12[i]==" << vrp[14].toStdString () << " && ap13[i]==" << vrp[11].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[15].toStdString () << " && ap16[i]==" << vrp[18].toStdString () << " && ap15[i]==" << vrp[17].toStdString () << " && ap18[i]==" << vrp[16].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[23].toStdString () << " && ap19[i]==" << vrp[19].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[24].toStdString () << " && ap24[i]==" << vrp[26].toStdString () << " && ap20[i]==" << vrp[22].toStdString () << " && ap22[i]==" << vrp[20].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[25].toStdString () << " && ap21[i]==" << vrp[21].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[28].toStdString () << " && ap28[i]==" << vrp[27].toStdString () << " && ap29[i]==" << vrp[30].toStdString () << " && ap30[i]==" << vrp[29].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[31].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[32].toStdString () << std::endl;
       std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[3].toStdString () << " && ap5[i]==" << vrp[2].toStdString () << " && ap4[i]==" << vrp[5].toStdString () << " && ap3[i]==" << vrp[4].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[8].toStdString () << " && ap10[i]==" << vrp[7].toStdString () << " && ap9[i]==" << vrp[10].toStdString () << " && ap8[i]==" << vrp[9].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[13].toStdString () << " && ap11[i]==" << vrp[14].toStdString () << " && ap12[i]==" << vrp[11].toStdString () << " && ap13[i]==" << vrp[12].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[18].toStdString () << " && ap16[i]==" << vrp[17].toStdString () << " && ap15[i]==" << vrp[16].toStdString () << " && ap18[i]==" << vrp[15].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[19].toStdString () << " && ap19[i]==" << vrp[23].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[22].toStdString () << " && ap24[i]==" << vrp[20].toStdString () << " && ap20[i]==" << vrp[26].toStdString () << " && ap22[i]==" << vrp[24].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[21].toStdString () << " && ap21[i]==" << vrp[25].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[30].toStdString () << " && ap28[i]==" << vrp[29].toStdString () << " && ap29[i]==" << vrp[27].toStdString () << " && ap30[i]==" << vrp[28].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[31].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[32].toStdString () << ")" << std::endl;
       std::cout << "||" << std::endl;
                                                           // 1-??? ?????????
     std::cout << "(ap1[i]==" << vrp[6].toStdString () << " && ap6[i]==" << vrp[1].toStdString () << ")" << std::endl;
     std::cout << " && (ap2[i]==" << vrp[2].toStdString () << " && ap5[i]==" << vrp[3].toStdString () << " && ap4[i]==" << vrp[4].toStdString () << " && ap3[i]==" << vrp[5].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[11].toStdString () << " && ap10[i]==" << vrp[14].toStdString () << " && ap9[i]==" << vrp[13].toStdString () << " && ap8[i]==" << vrp[12].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[10].toStdString () << " && ap11[i]==" << vrp[7].toStdString () << " && ap12[i]==" << vrp[8].toStdString () << " && ap13[i]==" << vrp[9].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[17].toStdString () << " && ap16[i]==" << vrp[18].toStdString () << " && ap15[i]==" << vrp[15].toStdString () << " && ap18[i]==" << vrp[16].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[25].toStdString () << " && ap19[i]==" << vrp[21].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[24].toStdString () << " && ap24[i]==" << vrp[26].toStdString () << " && ap20[i]==" << vrp[20].toStdString () << " && ap22[i]==" << vrp[22].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[23].toStdString () << " && ap21[i]==" << vrp[19].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[28].toStdString () << " && ap28[i]==" << vrp[27].toStdString () << " && ap29[i]==" << vrp[29].toStdString () << " && ap30[i]==" << vrp[30].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[32].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[31].toStdString () << std::endl;
       std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[3].toStdString () << " && ap5[i]==" << vrp[4].toStdString () << " && ap4[i]==" << vrp[5].toStdString () << " && ap3[i]==" << vrp[2].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[14].toStdString () << " && ap10[i]==" << vrp[13].toStdString () << " && ap9[i]==" << vrp[12].toStdString () << " && ap8[i]==" << vrp[11].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[7].toStdString () << " && ap11[i]==" << vrp[8].toStdString () << " && ap12[i]==" << vrp[9].toStdString () << " && ap13[i]==" << vrp[10].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[18].toStdString () << " && ap16[i]==" << vrp[15].toStdString () << " && ap15[i]==" << vrp[16].toStdString () << " && ap18[i]==" << vrp[17].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[21].toStdString () << " && ap19[i]==" << vrp[25].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[20].toStdString () << " && ap24[i]==" << vrp[22].toStdString () << " && ap20[i]==" << vrp[26].toStdString () << " && ap22[i]==" << vrp[24].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[19].toStdString () << " && ap21[i]==" << vrp[23].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[29].toStdString () << " && ap28[i]==" << vrp[30].toStdString () << " && ap29[i]==" << vrp[27].toStdString () << " && ap30[i]==" << vrp[28].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[32].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[31].toStdString () << std::endl;
       std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[4].toStdString () << " && ap5[i]==" << vrp[5].toStdString () << " && ap4[i]==" << vrp[2].toStdString () << " && ap3[i]==" << vrp[3].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[13].toStdString () << " && ap10[i]==" << vrp[12].toStdString () << " && ap9[i]==" << vrp[11].toStdString () << " && ap8[i]==" << vrp[14].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[8].toStdString () << " && ap11[i]==" << vrp[9].toStdString () << " && ap12[i]==" << vrp[10].toStdString () << " && ap13[i]==" << vrp[7].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[15].toStdString () << " && ap16[i]==" << vrp[16].toStdString () << " && ap15[i]==" << vrp[17].toStdString () << " && ap18[i]==" << vrp[18].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[25].toStdString () << " && ap19[i]==" << vrp[21].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[26].toStdString () << " && ap24[i]==" << vrp[24].toStdString () << " && ap20[i]==" << vrp[22].toStdString () << " && ap22[i]==" << vrp[20].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[23].toStdString () << " && ap21[i]==" << vrp[19].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[27].toStdString () << " && ap28[i]==" << vrp[28].toStdString () << " && ap29[i]==" << vrp[30].toStdString () << " && ap30[i]==" << vrp[29].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[32].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[31].toStdString () << std::endl;
       std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[5].toStdString () << " && ap5[i]==" << vrp[2].toStdString () << " && ap4[i]==" << vrp[3].toStdString () << " && ap3[i]==" << vrp[4].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[12].toStdString () << " && ap10[i]==" << vrp[11].toStdString () << " && ap9[i]==" << vrp[14].toStdString () << " && ap8[i]==" << vrp[13].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[9].toStdString () << " && ap11[i]==" << vrp[10].toStdString () << " && ap12[i]==" << vrp[7].toStdString () << " && ap13[i]==" << vrp[8].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[16].toStdString () << " && ap16[i]==" << vrp[17].toStdString () << " && ap15[i]==" << vrp[18].toStdString () << " && ap18[i]==" << vrp[15].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[21].toStdString () << " && ap19[i]==" << vrp[25].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[22].toStdString () << " && ap24[i]==" << vrp[20].toStdString () << " && ap20[i]==" << vrp[24].toStdString () << " && ap22[i]==" << vrp[26].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[19].toStdString () << " && ap21[i]==" << vrp[23].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[30].toStdString () << " && ap28[i]==" << vrp[29].toStdString () << " && ap29[i]==" << vrp[28].toStdString () << " && ap30[i]==" << vrp[27].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[32].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[31].toStdString () << ")" << std::endl;
       std::cout << "||" << std::endl;
                                                     // 2 ???
     std::cout << "(ap1[i]==" << vrp[2].toStdString () << " && ap6[i]==" << vrp[4].toStdString () << ")" << std::endl;
     std::cout << " && (ap2[i]==" << vrp[1].toStdString () << " && ap5[i]==" << vrp[3].toStdString () << " && ap4[i]==" << vrp[6].toStdString () << " && ap3[i]==" << vrp[5].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[10].toStdString () << " && ap10[i]==" << vrp[7].toStdString () << " && ap9[i]==" << vrp[14].toStdString () << " && ap8[i]==" << vrp[11].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[9].toStdString () << " && ap11[i]==" << vrp[8].toStdString () << " && ap12[i]==" << vrp[13].toStdString () << " && ap13[i]==" << vrp[12].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[23].toStdString () << " && ap16[i]==" << vrp[26].toStdString () << " && ap15[i]==" << vrp[25].toStdString () << " && ap18[i]==" << vrp[24].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[17].toStdString () << " && ap19[i]==" << vrp[20].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[16].toStdString () << " && ap24[i]==" << vrp[18].toStdString () << " && ap20[i]==" << vrp[19].toStdString () << " && ap22[i]==" << vrp[21].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[15].toStdString () << " && ap21[i]==" << vrp[22].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[28].toStdString () << " && ap28[i]==" << vrp[27].toStdString () << " && ap29[i]==" << vrp[31].toStdString () << " && ap30[i]==" << vrp[32].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[29].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[30].toStdString () << std::endl;
       std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[3].toStdString () << " && ap5[i]==" << vrp[6].toStdString () << " && ap4[i]==" << vrp[5].toStdString () << " && ap3[i]==" << vrp[1].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[7].toStdString () << " && ap10[i]==" << vrp[14].toStdString () << " && ap9[i]==" << vrp[11].toStdString () << " && ap8[i]==" << vrp[10].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[8].toStdString () << " && ap11[i]==" << vrp[13].toStdString () << " && ap12[i]==" << vrp[12].toStdString () << " && ap13[i]==" << vrp[9].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[26].toStdString () << " && ap16[i]==" << vrp[25].toStdString () << " && ap15[i]==" << vrp[24].toStdString () << " && ap18[i]==" << vrp[23].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[20].toStdString () << " && ap19[i]==" << vrp[17].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[19].toStdString () << " && ap24[i]==" << vrp[21].toStdString () << " && ap20[i]==" << vrp[18].toStdString () << " && ap22[i]==" << vrp[16].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[22].toStdString () << " && ap21[i]==" << vrp[15].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[31].toStdString () << " && ap28[i]==" << vrp[32].toStdString () << " && ap29[i]==" << vrp[27].toStdString () << " && ap30[i]==" << vrp[28].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[29].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[30].toStdString () << std::endl;
       std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[6].toStdString () << " && ap5[i]==" << vrp[5].toStdString () << " && ap4[i]==" << vrp[1].toStdString () << " && ap3[i]==" << vrp[3].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[14].toStdString () << " && ap10[i]==" << vrp[11].toStdString () << " && ap9[i]==" << vrp[10].toStdString () << " && ap8[i]==" << vrp[7].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[13].toStdString () << " && ap11[i]==" << vrp[12].toStdString () << " && ap12[i]==" << vrp[9].toStdString () << " && ap13[i]==" << vrp[8].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[25].toStdString () << " && ap16[i]==" << vrp[24].toStdString () << " && ap15[i]==" << vrp[23].toStdString () << " && ap18[i]==" << vrp[26].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[17].toStdString () << " && ap19[i]==" << vrp[20].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[18].toStdString () << " && ap24[i]==" << vrp[16].toStdString () << " && ap20[i]==" << vrp[21].toStdString () << " && ap22[i]==" << vrp[19].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[15].toStdString () << " && ap21[i]==" << vrp[22].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[27].toStdString () << " && ap28[i]==" << vrp[28].toStdString () << " && ap29[i]==" << vrp[32].toStdString () << " && ap30[i]==" << vrp[31].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[29].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[30].toStdString () << std::endl;
       std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[5].toStdString () << " && ap5[i]==" << vrp[1].toStdString () << " && ap4[i]==" << vrp[3].toStdString () << " && ap3[i]==" << vrp[6].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[11].toStdString () << " && ap10[i]==" << vrp[10].toStdString () << " && ap9[i]==" << vrp[7].toStdString () << " && ap8[i]==" << vrp[14].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[12].toStdString () << " && ap11[i]==" << vrp[9].toStdString () << " && ap12[i]==" << vrp[8].toStdString () << " && ap13[i]==" << vrp[13].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[24].toStdString () << " && ap16[i]==" << vrp[23].toStdString () << " && ap15[i]==" << vrp[26].toStdString () << " && ap18[i]==" << vrp[25].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[20].toStdString () << " && ap19[i]==" << vrp[17].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[21].toStdString () << " && ap24[i]==" << vrp[19].toStdString () << " && ap20[i]==" << vrp[16].toStdString () << " && ap22[i]==" << vrp[18].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[22].toStdString () << " && ap21[i]==" << vrp[15].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[32].toStdString () << " && ap28[i]==" << vrp[31].toStdString () << " && ap29[i]==" << vrp[28].toStdString () << " && ap30[i]==" << vrp[27].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[29].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[30].toStdString () << ")" << std::endl;
                                                  // 2 ??? ?????????
       std::cout << "||" << std::endl;

     std::cout << "(ap1[i]==" << vrp[4].toStdString () << " && ap6[i]==" << vrp[2].toStdString () << ")" << std::endl;
     std::cout << " && (ap2[i]==" << vrp[1].toStdString () << " && ap5[i]==" << vrp[5].toStdString () << " && ap4[i]==" << vrp[6].toStdString () << " && ap3[i]==" << vrp[3].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[8].toStdString () << " && ap10[i]==" << vrp[9].toStdString () << " && ap9[i]==" << vrp[12].toStdString () << " && ap8[i]==" << vrp[13].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[7].toStdString () << " && ap11[i]==" << vrp[10].toStdString () << " && ap12[i]==" << vrp[11].toStdString () << " && ap13[i]==" << vrp[14].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[23].toStdString () << " && ap16[i]==" << vrp[24].toStdString () << " && ap15[i]==" << vrp[25].toStdString () << " && ap18[i]==" << vrp[26].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[15].toStdString () << " && ap19[i]==" << vrp[22].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[18].toStdString () << " && ap24[i]==" << vrp[16].toStdString () << " && ap20[i]==" << vrp[19].toStdString () << " && ap22[i]==" << vrp[21].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[17].toStdString () << " && ap21[i]==" << vrp[20].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[27].toStdString () << " && ap28[i]==" << vrp[28].toStdString () << " && ap29[i]==" << vrp[31].toStdString () << " && ap30[i]==" << vrp[32].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[30].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[29].toStdString () << std::endl;
       std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[5].toStdString () << " && ap5[i]==" << vrp[6].toStdString () << " && ap4[i]==" << vrp[3].toStdString () << " && ap3[i]==" << vrp[1].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[9].toStdString () << " && ap10[i]==" << vrp[12].toStdString () << " && ap9[i]==" << vrp[13].toStdString () << " && ap8[i]==" << vrp[8].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[10].toStdString () << " && ap11[i]==" << vrp[11].toStdString () << " && ap12[i]==" << vrp[14].toStdString () << " && ap13[i]==" << vrp[7].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[24].toStdString () << " && ap16[i]==" << vrp[25].toStdString () << " && ap15[i]==" << vrp[26].toStdString () << " && ap18[i]==" << vrp[23].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[22].toStdString () << " && ap19[i]==" << vrp[15].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[19].toStdString () << " && ap24[i]==" << vrp[21].toStdString () << " && ap20[i]==" << vrp[16].toStdString () << " && ap22[i]==" << vrp[18].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[20].toStdString () << " && ap21[i]==" << vrp[17].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[31].toStdString () << " && ap28[i]==" << vrp[32].toStdString () << " && ap29[i]==" << vrp[28].toStdString () << " && ap30[i]==" << vrp[27].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[30].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[29].toStdString () << std::endl;
       std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[6].toStdString () << " && ap5[i]==" << vrp[3].toStdString () << " && ap4[i]==" << vrp[1].toStdString () << " && ap3[i]==" << vrp[5].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[12].toStdString () << " && ap10[i]==" << vrp[13].toStdString () << " && ap9[i]==" << vrp[8].toStdString () << " && ap8[i]==" << vrp[9].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[11].toStdString () << " && ap11[i]==" << vrp[14].toStdString () << " && ap12[i]==" << vrp[7].toStdString () << " && ap13[i]==" << vrp[10].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[25].toStdString () << " && ap16[i]==" << vrp[26].toStdString () << " && ap15[i]==" << vrp[23].toStdString () << " && ap18[i]==" << vrp[24].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[15].toStdString () << " && ap19[i]==" << vrp[22].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[16].toStdString () << " && ap24[i]==" << vrp[18].toStdString () << " && ap20[i]==" << vrp[21].toStdString () << " && ap22[i]==" << vrp[19].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[17].toStdString () << " && ap21[i]==" << vrp[20].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[28].toStdString () << " && ap28[i]==" << vrp[27].toStdString () << " && ap29[i]==" << vrp[32].toStdString () << " && ap30[i]==" << vrp[31].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[30].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[29].toStdString () << std::endl;
       std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[3].toStdString () << " && ap5[i]==" << vrp[1].toStdString () << " && ap4[i]==" << vrp[5].toStdString () << " && ap3[i]==" << vrp[6].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[13].toStdString () << " && ap10[i]==" << vrp[8].toStdString () << " && ap9[i]==" << vrp[9].toStdString () << " && ap8[i]==" << vrp[12].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[14].toStdString () << " && ap11[i]==" << vrp[7].toStdString () << " && ap12[i]==" << vrp[10].toStdString () << " && ap13[i]==" << vrp[11].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[26].toStdString () << " && ap16[i]==" << vrp[23].toStdString () << " && ap15[i]==" << vrp[24].toStdString () << " && ap18[i]==" << vrp[25].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[22].toStdString () << " && ap19[i]==" << vrp[15].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[21].toStdString () << " && ap24[i]==" << vrp[19].toStdString () << " && ap20[i]==" << vrp[18].toStdString () << " && ap22[i]==" << vrp[16].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[20].toStdString () << " && ap21[i]==" << vrp[17].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[32].toStdString () << " && ap28[i]==" << vrp[31].toStdString () << " && ap29[i]==" << vrp[27].toStdString () << " && ap30[i]==" << vrp[28].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[30].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[29].toStdString () << ")" << std::endl;
                                         // 3 ???
        std::cout << "||" << std::endl;

     std::cout << "(ap1[i]==" << vrp[3].toStdString () << " && ap6[i]==" << vrp[5].toStdString () << ")" << std::endl;
     std::cout << " && (ap2[i]==" << vrp[1].toStdString () << " && ap5[i]==" << vrp[4].toStdString () << " && ap4[i]==" << vrp[6].toStdString () << " && ap3[i]==" << vrp[2].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[7].toStdString () << " && ap10[i]==" << vrp[8].toStdString () << " && ap9[i]==" << vrp[13].toStdString () << " && ap8[i]==" << vrp[14].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[10].toStdString () << " && ap11[i]==" << vrp[9].toStdString () << " && ap12[i]==" << vrp[12].toStdString () << " && ap13[i]==" << vrp[11].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[19].toStdString () << " && ap16[i]==" << vrp[22].toStdString () << " && ap15[i]==" << vrp[21].toStdString () << " && ap18[i]==" << vrp[20].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[18].toStdString () << " && ap19[i]==" << vrp[26].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[17].toStdString () << " && ap24[i]==" << vrp[15].toStdString () << " && ap20[i]==" << vrp[23].toStdString () << " && ap22[i]==" << vrp[25].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[16].toStdString () << " && ap21[i]==" << vrp[24].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[29].toStdString () << " && ap28[i]==" << vrp[30].toStdString () << " && ap29[i]==" << vrp[31].toStdString () << " && ap30[i]==" << vrp[32].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[27].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[28].toStdString () << std::endl;
        std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[4].toStdString () << " && ap5[i]==" << vrp[6].toStdString () << " && ap4[i]==" << vrp[2].toStdString () << " && ap3[i]==" << vrp[1].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[8].toStdString () << " && ap10[i]==" << vrp[13].toStdString () << " && ap9[i]==" << vrp[14].toStdString () << " && ap8[i]==" << vrp[7].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[9].toStdString () << " && ap11[i]==" << vrp[12].toStdString () << " && ap12[i]==" << vrp[11].toStdString () << " && ap13[i]==" << vrp[10].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[22].toStdString () << " && ap16[i]==" << vrp[21].toStdString () << " && ap15[i]==" << vrp[20].toStdString () << " && ap18[i]==" << vrp[19].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[26].toStdString () << " && ap19[i]==" << vrp[18].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[23].toStdString () << " && ap24[i]==" << vrp[25].toStdString () << " && ap20[i]==" << vrp[15].toStdString () << " && ap22[i]==" << vrp[17].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[24].toStdString () << " && ap21[i]==" << vrp[16].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[31].toStdString () << " && ap28[i]==" << vrp[32].toStdString () << " && ap29[i]==" << vrp[30].toStdString () << " && ap30[i]==" << vrp[29].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[27].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[28].toStdString () << std::endl;
        std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[6].toStdString () << " && ap5[i]==" << vrp[2].toStdString () << " && ap4[i]==" << vrp[1].toStdString () << " && ap3[i]==" << vrp[4].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[13].toStdString () << " && ap10[i]==" << vrp[14].toStdString () << " && ap9[i]==" << vrp[7].toStdString () << " && ap8[i]==" << vrp[8].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[12].toStdString () << " && ap11[i]==" << vrp[11].toStdString () << " && ap12[i]==" << vrp[10].toStdString () << " && ap13[i]==" << vrp[9].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[21].toStdString () << " && ap16[i]==" << vrp[20].toStdString () << " && ap15[i]==" << vrp[19].toStdString () << " && ap18[i]==" << vrp[22].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[18].toStdString () << " && ap19[i]==" << vrp[26].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[15].toStdString () << " && ap24[i]==" << vrp[17].toStdString () << " && ap20[i]==" << vrp[25].toStdString () << " && ap22[i]==" << vrp[23].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[16].toStdString () << " && ap21[i]==" << vrp[24].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[30].toStdString () << " && ap28[i]==" << vrp[29].toStdString () << " && ap29[i]==" << vrp[32].toStdString () << " && ap30[i]==" << vrp[31].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[27].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[28].toStdString () << std::endl;
        std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[2].toStdString () << " && ap5[i]==" << vrp[1].toStdString () << " && ap4[i]==" << vrp[4].toStdString () << " && ap3[i]==" << vrp[6].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[14].toStdString () << " && ap10[i]==" << vrp[7].toStdString () << " && ap9[i]==" << vrp[8].toStdString () << " && ap8[i]==" << vrp[13].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[11].toStdString () << " && ap11[i]==" << vrp[10].toStdString () << " && ap12[i]==" << vrp[9].toStdString () << " && ap13[i]==" << vrp[12].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[20].toStdString () << " && ap16[i]==" << vrp[19].toStdString () << " && ap15[i]==" << vrp[22].toStdString () << " && ap18[i]==" << vrp[21].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[26].toStdString () << " && ap19[i]==" << vrp[18].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[25].toStdString () << " && ap24[i]==" << vrp[23].toStdString () << " && ap20[i]==" << vrp[17].toStdString () << " && ap22[i]==" << vrp[15].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[24].toStdString () << " && ap21[i]==" << vrp[16].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[32].toStdString () << " && ap28[i]==" << vrp[31].toStdString () << " && ap29[i]==" << vrp[29].toStdString () << " && ap30[i]==" << vrp[30].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[27].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[28].toStdString () << ")" << std::endl;
        std::cout << "||" << std::endl;
                                           // 3 ??? ?????????
     std::cout << "(ap1[i]==" << vrp[5].toStdString () << " && ap6[i]==" << vrp[3].toStdString () << ")" << std::endl;
     std::cout << " && (ap2[i]==" << vrp[1].toStdString () << " && ap5[i]==" << vrp[2].toStdString () << " && ap4[i]==" << vrp[6].toStdString () << " && ap3[i]==" << vrp[4].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[9].toStdString () << " && ap10[i]==" << vrp[10].toStdString () << " && ap9[i]==" << vrp[11].toStdString () << " && ap8[i]==" << vrp[12].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[8].toStdString () << " && ap11[i]==" << vrp[7].toStdString () << " && ap12[i]==" << vrp[14].toStdString () << " && ap13[i]==" << vrp[13].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[19].toStdString () << " && ap16[i]==" << vrp[20].toStdString () << " && ap15[i]==" << vrp[21].toStdString () << " && ap18[i]==" << vrp[22].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[16].toStdString () << " && ap19[i]==" << vrp[24].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[15].toStdString () << " && ap24[i]==" << vrp[17].toStdString () << " && ap20[i]==" << vrp[23].toStdString () << " && ap22[i]==" << vrp[25].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[18].toStdString () << " && ap21[i]==" << vrp[26].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[30].toStdString () << " && ap28[i]==" << vrp[29].toStdString () << " && ap29[i]==" << vrp[31].toStdString () << " && ap30[i]==" << vrp[32].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[28].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[27].toStdString () << std::endl;
        std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[2].toStdString () << " && ap5[i]==" << vrp[6].toStdString () << " && ap4[i]==" << vrp[4].toStdString () << " && ap3[i]==" << vrp[1].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[10].toStdString () << " && ap10[i]==" << vrp[11].toStdString () << " && ap9[i]==" << vrp[12].toStdString () << " && ap8[i]==" << vrp[9].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[7].toStdString () << " && ap11[i]==" << vrp[14].toStdString () << " && ap12[i]==" << vrp[13].toStdString () << " && ap13[i]==" << vrp[8].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[20].toStdString () << " && ap16[i]==" << vrp[21].toStdString () << " && ap15[i]==" << vrp[22].toStdString () << " && ap18[i]==" << vrp[19].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[24].toStdString () << " && ap19[i]==" << vrp[16].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[23].toStdString () << " && ap24[i]==" << vrp[25].toStdString () << " && ap20[i]==" << vrp[17].toStdString () << " && ap22[i]==" << vrp[15].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[26].toStdString () << " && ap21[i]==" << vrp[18].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[31].toStdString () << " && ap28[i]==" << vrp[32].toStdString () << " && ap29[i]==" << vrp[29].toStdString () << " && ap30[i]==" << vrp[30].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[28].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[27].toStdString () << std::endl;
        std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[6].toStdString () << " && ap5[i]==" << vrp[4].toStdString () << " && ap4[i]==" << vrp[1].toStdString () << " && ap3[i]==" << vrp[2].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[11].toStdString () << " && ap10[i]==" << vrp[12].toStdString () << " && ap9[i]==" << vrp[9].toStdString () << " && ap8[i]==" << vrp[10].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[14].toStdString () << " && ap11[i]==" << vrp[13].toStdString () << " && ap12[i]==" << vrp[8].toStdString () << " && ap13[i]==" << vrp[7].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[21].toStdString () << " && ap16[i]==" << vrp[22].toStdString () << " && ap15[i]==" << vrp[19].toStdString () << " && ap18[i]==" << vrp[20].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[16].toStdString () << " && ap19[i]==" << vrp[24].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[17].toStdString () << " && ap24[i]==" << vrp[15].toStdString () << " && ap20[i]==" << vrp[25].toStdString () << " && ap22[i]==" << vrp[23].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[18].toStdString () << " && ap21[i]==" << vrp[26].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[29].toStdString () << " && ap28[i]==" << vrp[30].toStdString () << " && ap29[i]==" << vrp[32].toStdString () << " && ap30[i]==" << vrp[31].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[28].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[27].toStdString () << std::endl;
        std::cout << "||" << std::endl;

     std::cout << "ap2[i]==" << vrp[4].toStdString () << " && ap5[i]==" << vrp[1].toStdString () << " && ap4[i]==" << vrp[2].toStdString () << " && ap3[i]==" << vrp[6].toStdString () << " &&" << std::endl;
     std::cout << "ap7[i]==" << vrp[12].toStdString () << " && ap10[i]==" << vrp[9].toStdString () << " && ap9[i]==" << vrp[10].toStdString () << " && ap8[i]==" << vrp[11].toStdString () << " &&" << std::endl;
     std::cout << "ap14[i]==" << vrp[13].toStdString () << " && ap11[i]==" << vrp[8].toStdString () << " && ap12[i]==" << vrp[7].toStdString () << " && ap13[i]==" << vrp[14].toStdString () << " &&" << std::endl;
     std::cout << "ap17[i]==" << vrp[22].toStdString () << " && ap16[i]==" << vrp[19].toStdString () << " && ap15[i]==" << vrp[20].toStdString () << " && ap18[i]==" << vrp[21].toStdString () << " &&" << std::endl;
     std::cout << "ap23[i]==" << vrp[24].toStdString () << " && ap19[i]==" << vrp[16].toStdString () << " &&" << std::endl;
     std::cout << "ap26[i]==" << vrp[25].toStdString () << " && ap24[i]==" << vrp[23].toStdString () << " && ap20[i]==" << vrp[15].toStdString () << " && ap22[i]==" << vrp[17].toStdString () << " &&" << std::endl;
     std::cout << "ap25[i]==" << vrp[26].toStdString () << " && ap21[i]==" << vrp[18].toStdString () << " &&" << std::endl;
     std::cout << "ap27[i]==" << vrp[32].toStdString () << " && ap28[i]==" << vrp[31].toStdString () << " && ap29[i]==" << vrp[30].toStdString () << " && ap30[i]==" << vrp[29].toStdString () << " &&" << std::endl;
     std::cout << "ap31[i]==" << vrp[28].toStdString () << " &&" << std::endl;
     std::cout << "ap32[i]==" << vrp[27].toStdString () << ")" << std::endl;
}

}

std::cout << "Время выполнения программы = "
            << (time(NULL)-seconds) << std::endl;

   return 0;
}              //*
//---------------------------------------------------------------------------


