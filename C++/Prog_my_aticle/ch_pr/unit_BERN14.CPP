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
zk[1]=1; zk[2]=2; zk[3]=3; zk[4]=4; zk[5]=5; zk[6]=6; zk[7]=0; zk[8]=0; // ������

printf ("COLOURS:");
scanf ("%d",&col);

for (p16=1; p16<=col; p16++)
for (p18=1; p18<=col; p18++)
for (p19=1; p19<=col; p19++)
for (p29=1; p29<=col; p29++)
for (p21=1; p21<=col; p21++)
for (p30=1; p30<=col; p30++)
{
for (i=1; i<=ii; i++)         //     zk[p16]+zk[p18]+zk[p19]+zk[p29]+zk[p21]+zk[p30]
if
(
(zk[p16]==ap1[i] && zk[p30]==ap6[i])
 && (( zk[p18]==ap2[i] && zk[p19]==ap3[i] && zk[p29]==ap4[i] && zk[p21]==ap5[i])
||   ( zk[p18]==ap3[i] && zk[p19]==ap4[i] && zk[p29]==ap5[i] && zk[p21]==ap2[i])
||   ( zk[p18]==ap4[i] && zk[p19]==ap5[i] && zk[p29]==ap2[i] && zk[p21]==ap3[i])
||   ( zk[p18]==ap5[i] && zk[p19]==ap2[i] && zk[p29]==ap3[i] && zk[p21]==ap4[i]))

||
 (zk[p16]==ap2[i] && zk[p30]==ap4[i])
 && (( zk[p18]==ap1[i] && zk[p19]==ap5[i] && zk[p29]==ap6[i] && zk[p21]==ap3[i])
||   ( zk[p18]==ap5[i] && zk[p19]==ap6[i] && zk[p29]==ap3[i] && zk[p21]==ap1[i])
||   ( zk[p18]==ap6[i] && zk[p19]==ap3[i] && zk[p29]==ap1[i] && zk[p21]==ap5[i])
||   ( zk[p18]==ap3[i] && zk[p19]==ap1[i] && zk[p29]==ap5[i] && zk[p21]==ap6[i]))

||
 (zk[p16]==ap3[i] && zk[p30]==ap5[i])
 && (( zk[p18]==ap1[i] && zk[p19]==ap2[i] && zk[p29]==ap6[i] && zk[p21]==ap4[i])
||   ( zk[p18]==ap2[i] && zk[p19]==ap6[i] && zk[p29]==ap4[i] && zk[p21]==ap1[i])
||   ( zk[p18]==ap6[i] && zk[p19]==ap4[i] && zk[p29]==ap1[i] && zk[p21]==ap2[i])
||   ( zk[p18]==ap4[i] && zk[p19]==ap1[i] && zk[p29]==ap2[i] && zk[p21]==ap6[i]))

||
 (zk[p16]==ap4[i] && zk[p30]==ap2[i])
 && (( zk[p18]==ap1[i] && zk[p19]==ap3[i] && zk[p29]==ap6[i] && zk[p21]==ap5[i])
||   ( zk[p18]==ap3[i] && zk[p19]==ap6[i] && zk[p29]==ap5[i] && zk[p21]==ap1[i])
||   ( zk[p18]==ap6[i] && zk[p19]==ap5[i] && zk[p29]==ap1[i] && zk[p21]==ap3[i])
||   ( zk[p18]==ap5[i] && zk[p19]==ap1[i] && zk[p29]==ap3[i] && zk[p21]==ap6[i]))

||
 (zk[p16]==ap5[i] && zk[p30]==ap3[i])
 && (( zk[p18]==ap1[i] && zk[p19]==ap4[i] && zk[p29]==ap6[i] && zk[p21]==ap2[i])
||   ( zk[p18]==ap4[i] && zk[p19]==ap6[i] && zk[p29]==ap2[i] && zk[p21]==ap1[i])
||   ( zk[p18]==ap6[i] && zk[p19]==ap2[i] && zk[p29]==ap1[i] && zk[p21]==ap4[i])
||   ( zk[p18]==ap2[i] && zk[p19]==ap1[i] && zk[p29]==ap4[i] && zk[p21]==ap6[i]))

||
 (zk[p16]==ap6[i] && zk[p30]==ap1[i])
 && (( zk[p18]==ap2[i] && zk[p19]==ap5[i] && zk[p29]==ap4[i] && zk[p21]==ap3[i])
||   ( zk[p18]==ap5[i] && zk[p19]==ap4[i] && zk[p29]==ap3[i] && zk[p21]==ap2[i])
||   ( zk[p18]==ap4[i] && zk[p19]==ap3[i] && zk[p29]==ap2[i] && zk[p21]==ap5[i])
||   ( zk[p18]==ap3[i] && zk[p19]==ap2[i] && zk[p29]==ap5[i] && zk[p21]==ap4[i]))

  ) { i=0; break;}
if (i==0) continue;
ap1[ii]=zk[p16]; ap2[ii]=zk[p18]; ap3[ii]=zk[p19]; ap4[ii]=zk[p29]; ap5[ii]=zk[p21]; ap6[ii]=zk[p30];
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
