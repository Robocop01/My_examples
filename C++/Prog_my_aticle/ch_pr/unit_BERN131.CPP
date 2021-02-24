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

for (p10=1; p10<=col; p10++)
for (p11=1; p11<=col; p11++)
for (p16=1; p16<=col; p16++)
for (p29=1; p29<=col; p29++)
for (p28=1; p28<=col; p28++)
for (p17=1; p17<=col; p17++)
{
for (i=1; i<=ii; i++)        //   zk[p10]+zk[p11]+zk[p16]+zk[p29]+zk[p28]+zk[p17]
if
(
(zk[p10]==ap1[i] && zk[p17]==ap6[i])
 && (( zk[p11]==ap2[i] && zk[p16]==ap3[i] && zk[p29]==ap4[i] && zk[p28]==ap5[i])
||   ( zk[p11]==ap3[i] && zk[p16]==ap4[i] && zk[p29]==ap5[i] && zk[p28]==ap2[i])
||   ( zk[p11]==ap4[i] && zk[p16]==ap5[i] && zk[p29]==ap2[i] && zk[p28]==ap3[i])
||   ( zk[p11]==ap5[i] && zk[p16]==ap2[i] && zk[p29]==ap3[i] && zk[p28]==ap4[i]))

||
 (zk[p10]==ap2[i] && zk[p17]==ap4[i])
 && (( zk[p11]==ap1[i] && zk[p16]==ap5[i] && zk[p29]==ap6[i] && zk[p28]==ap3[i])
||   ( zk[p11]==ap5[i] && zk[p16]==ap6[i] && zk[p29]==ap3[i] && zk[p28]==ap1[i])
||   ( zk[p11]==ap6[i] && zk[p16]==ap3[i] && zk[p29]==ap1[i] && zk[p28]==ap5[i])
||   ( zk[p11]==ap3[i] && zk[p16]==ap1[i] && zk[p29]==ap5[i] && zk[p28]==ap6[i]))

||
 (zk[p10]==ap3[i] && zk[p17]==ap5[i])
 && (( zk[p11]==ap1[i] && zk[p16]==ap2[i] && zk[p29]==ap6[i] && zk[p28]==ap4[i])
||   ( zk[p11]==ap2[i] && zk[p16]==ap6[i] && zk[p29]==ap4[i] && zk[p28]==ap1[i])
||   ( zk[p11]==ap6[i] && zk[p16]==ap4[i] && zk[p29]==ap1[i] && zk[p28]==ap2[i])
||   ( zk[p11]==ap4[i] && zk[p16]==ap1[i] && zk[p29]==ap2[i] && zk[p28]==ap6[i]))

||
 (zk[p10]==ap4[i] && zk[p17]==ap2[i])
 && (( zk[p11]==ap1[i] && zk[p16]==ap3[i] && zk[p29]==ap6[i] && zk[p28]==ap5[i])
||   ( zk[p11]==ap3[i] && zk[p16]==ap6[i] && zk[p29]==ap5[i] && zk[p28]==ap1[i])
||   ( zk[p11]==ap6[i] && zk[p16]==ap5[i] && zk[p29]==ap1[i] && zk[p28]==ap3[i])
||   ( zk[p11]==ap5[i] && zk[p16]==ap1[i] && zk[p29]==ap3[i] && zk[p28]==ap6[i]))

||
 (zk[p10]==ap5[i] && zk[p17]==ap3[i])
 && (( zk[p11]==ap1[i] && zk[p16]==ap4[i] && zk[p29]==ap6[i] && zk[p28]==ap2[i])
||   ( zk[p11]==ap4[i] && zk[p16]==ap6[i] && zk[p29]==ap2[i] && zk[p28]==ap1[i])
||   ( zk[p11]==ap6[i] && zk[p16]==ap2[i] && zk[p29]==ap1[i] && zk[p28]==ap4[i])
||   ( zk[p11]==ap2[i] && zk[p16]==ap1[i] && zk[p29]==ap4[i] && zk[p28]==ap6[i]))

||
 (zk[p10]==ap6[i] && zk[p17]==ap1[i])
 && (( zk[p11]==ap2[i] && zk[p16]==ap5[i] && zk[p29]==ap4[i] && zk[p28]==ap3[i])
||   ( zk[p11]==ap5[i] && zk[p16]==ap4[i] && zk[p29]==ap3[i] && zk[p28]==ap2[i])
||   ( zk[p11]==ap4[i] && zk[p16]==ap3[i] && zk[p29]==ap2[i] && zk[p28]==ap5[i])
||   ( zk[p11]==ap3[i] && zk[p16]==ap2[i] && zk[p29]==ap5[i] && zk[p28]==ap4[i]))

  ) { i=0; break;}
if (i==0) continue;
ap1[ii]=zk[p10]; ap2[ii]=zk[p11]; ap3[ii]=zk[p16]; ap4[ii]=zk[p29]; ap5[ii]=zk[p28]; ap6[ii]=zk[p17];
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
