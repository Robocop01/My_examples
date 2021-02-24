//---------------------------------------------------------------------------
#include <vcl\condefs.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <alloc.h>
#define A 32768
#pragma hdrstop

main()
{
FILE*fp;
short int p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15,p16,p17,
p18,p19,p20,p21,p22,p23,p24,p25,p26,p27,p28,p29,p30,p31,p32;
int i,fig,col,ii=1;
short int
ap1[A],ap2[A],ap3[A],ap4[A],ap5[A],ap6[A],
ap7[A],ap8[A],ap9[A],ap10[A],ap11[A],ap12[A];
int zk[10];
zk[1]=1; zk[2]=2; zk[3]=3; zk[4]=4; zk[5]=5; zk[6]=6; zk[7]=0; zk[8]=0; // заряды

printf ("COLOURS:");
scanf ("%d",&col);

for (p15=1; p15<=col; p15++)
for (p17=1; p17<=col; p17++)
for (p23=1; p23<=col; p23++)
for (p27=1; p27<=col; p27++)
for (p25=1; p25<=col; p25++)
for (p28=1; p28<=col; p28++)
{
for (i=1; i<=ii; i++)        //     zk[p15]+zk[p17]+zk[p23]+zk[p27]+zk[p25]+zk[p28]
if
(
(zk[p15]==ap1[i] && zk[p28]==ap6[i])
 && (( zk[p17]==ap2[i] && zk[p23]==ap3[i] && zk[p27]==ap4[i] && zk[p25]==ap5[i])
||   ( zk[p17]==ap3[i] && zk[p23]==ap4[i] && zk[p27]==ap5[i] && zk[p25]==ap2[i])
||   ( zk[p17]==ap4[i] && zk[p23]==ap5[i] && zk[p27]==ap2[i] && zk[p25]==ap3[i])
||   ( zk[p17]==ap5[i] && zk[p23]==ap2[i] && zk[p27]==ap3[i] && zk[p25]==ap4[i]))

||
 (zk[p15]==ap2[i] && zk[p28]==ap4[i])
 && (( zk[p17]==ap1[i] && zk[p23]==ap5[i] && zk[p27]==ap6[i] && zk[p25]==ap3[i])
||   ( zk[p17]==ap5[i] && zk[p23]==ap6[i] && zk[p27]==ap3[i] && zk[p25]==ap1[i])
||   ( zk[p17]==ap6[i] && zk[p23]==ap3[i] && zk[p27]==ap1[i] && zk[p25]==ap5[i])
||   ( zk[p17]==ap3[i] && zk[p23]==ap1[i] && zk[p27]==ap5[i] && zk[p25]==ap6[i]))

||
 (zk[p15]==ap3[i] && zk[p28]==ap5[i])
 && (( zk[p17]==ap1[i] && zk[p23]==ap2[i] && zk[p27]==ap6[i] && zk[p25]==ap4[i])
||   ( zk[p17]==ap2[i] && zk[p23]==ap6[i] && zk[p27]==ap4[i] && zk[p25]==ap1[i])
||   ( zk[p17]==ap6[i] && zk[p23]==ap4[i] && zk[p27]==ap1[i] && zk[p25]==ap2[i])
||   ( zk[p17]==ap4[i] && zk[p23]==ap1[i] && zk[p27]==ap2[i] && zk[p25]==ap6[i]))

||
 (zk[p15]==ap4[i] && zk[p28]==ap2[i])
 && (( zk[p17]==ap1[i] && zk[p23]==ap3[i] && zk[p27]==ap6[i] && zk[p25]==ap5[i])
||   ( zk[p17]==ap3[i] && zk[p23]==ap6[i] && zk[p27]==ap5[i] && zk[p25]==ap1[i])
||   ( zk[p17]==ap6[i] && zk[p23]==ap5[i] && zk[p27]==ap1[i] && zk[p25]==ap3[i])
||   ( zk[p17]==ap5[i] && zk[p23]==ap1[i] && zk[p27]==ap3[i] && zk[p25]==ap6[i]))

||
 (zk[p15]==ap5[i] && zk[p28]==ap3[i])
 && (( zk[p17]==ap1[i] && zk[p23]==ap4[i] && zk[p27]==ap6[i] && zk[p25]==ap2[i])
||   ( zk[p17]==ap4[i] && zk[p23]==ap6[i] && zk[p27]==ap2[i] && zk[p25]==ap1[i])
||   ( zk[p17]==ap6[i] && zk[p23]==ap2[i] && zk[p27]==ap1[i] && zk[p25]==ap4[i])
||   ( zk[p17]==ap2[i] && zk[p23]==ap1[i] && zk[p27]==ap4[i] && zk[p25]==ap6[i]))

||
 (zk[p15]==ap6[i] && zk[p28]==ap1[i])
 && (( zk[p17]==ap2[i] && zk[p23]==ap5[i] && zk[p27]==ap4[i] && zk[p25]==ap3[i])
||   ( zk[p17]==ap5[i] && zk[p23]==ap4[i] && zk[p27]==ap3[i] && zk[p25]==ap2[i])
||   ( zk[p17]==ap4[i] && zk[p23]==ap3[i] && zk[p27]==ap2[i] && zk[p25]==ap5[i])
||   ( zk[p17]==ap3[i] && zk[p23]==ap2[i] && zk[p27]==ap5[i] && zk[p25]==ap4[i]))

  ) { i=0; break;}
if (i==0) continue;
ap1[ii]=zk[p15]; ap2[ii]=zk[p17]; ap3[ii]=zk[p23]; ap4[ii]=zk[p27]; ap5[ii]=zk[p25]; ap6[ii]=zk[p28];
ii++;
}

fp=fopen("oct.txt","w");
ii--;

fprintf(fp,"1 2 3 4 5 6\n\n");
for (i=1; i<=ii; i++)
fprintf(fp,"%d %d %d %d %d %d\n",
ap1[i], ap2[i], ap3[i], ap4[i], ap5[i], ap6[i]);
fclose(fp);

        return 0;
}
//---------------------------------------------------------------------------
