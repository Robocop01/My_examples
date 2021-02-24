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

for (p8=1; p8<=col; p8++)
for (p13=1; p13<=col; p13++)
for (p3=1; p3<=col; p3++)
for (p4=1; p4<=col; p4++)
for (p22=1; p22<=col; p22++)
for (p26=1; p26<=col; p26++)
{
for (i=1; i<=ii; i++)         //  zk[p8]+zk[p13]+zk[p3]+zk[p22]+zk[p26]+zk[p4]
if
(
(zk[p8]==ap1[i] && zk[p4]==ap6[i])
 && (( zk[p13]==ap2[i] && zk[p3]==ap3[i] && zk[p22]==ap4[i] && zk[p26]==ap5[i])
||   ( zk[p13]==ap3[i] && zk[p3]==ap4[i] && zk[p22]==ap5[i] && zk[p26]==ap2[i])
||   ( zk[p13]==ap4[i] && zk[p3]==ap5[i] && zk[p22]==ap2[i] && zk[p26]==ap3[i])
||   ( zk[p13]==ap5[i] && zk[p3]==ap2[i] && zk[p22]==ap3[i] && zk[p26]==ap4[i]))

||
 (zk[p8]==ap2[i] && zk[p4]==ap4[i])
 && (( zk[p13]==ap1[i] && zk[p3]==ap5[i] && zk[p22]==ap6[i] && zk[p26]==ap3[i])
||   ( zk[p13]==ap5[i] && zk[p3]==ap6[i] && zk[p22]==ap3[i] && zk[p26]==ap1[i])
||   ( zk[p13]==ap6[i] && zk[p3]==ap3[i] && zk[p22]==ap1[i] && zk[p26]==ap5[i])
||   ( zk[p13]==ap3[i] && zk[p3]==ap1[i] && zk[p22]==ap5[i] && zk[p26]==ap6[i]))

||
 (zk[p8]==ap3[i] && zk[p4]==ap5[i])
 && (( zk[p13]==ap1[i] && zk[p3]==ap2[i] && zk[p22]==ap6[i] && zk[p26]==ap4[i])
||   ( zk[p13]==ap2[i] && zk[p3]==ap6[i] && zk[p22]==ap4[i] && zk[p26]==ap1[i])
||   ( zk[p13]==ap6[i] && zk[p3]==ap4[i] && zk[p22]==ap1[i] && zk[p26]==ap2[i])
||   ( zk[p13]==ap4[i] && zk[p3]==ap1[i] && zk[p22]==ap2[i] && zk[p26]==ap6[i]))

||
 (zk[p8]==ap4[i] && zk[p4]==ap2[i])
 && (( zk[p13]==ap1[i] && zk[p3]==ap3[i] && zk[p22]==ap6[i] && zk[p26]==ap5[i])
||   ( zk[p13]==ap3[i] && zk[p3]==ap6[i] && zk[p22]==ap5[i] && zk[p26]==ap1[i])
||   ( zk[p13]==ap6[i] && zk[p3]==ap5[i] && zk[p22]==ap1[i] && zk[p26]==ap3[i])
||   ( zk[p13]==ap5[i] && zk[p3]==ap1[i] && zk[p22]==ap3[i] && zk[p26]==ap6[i]))

||
 (zk[p8]==ap5[i] && zk[p4]==ap3[i])
 && (( zk[p13]==ap1[i] && zk[p3]==ap4[i] && zk[p22]==ap6[i] && zk[p26]==ap2[i])
||   ( zk[p13]==ap4[i] && zk[p3]==ap6[i] && zk[p22]==ap2[i] && zk[p26]==ap1[i])
||   ( zk[p13]==ap6[i] && zk[p3]==ap2[i] && zk[p22]==ap1[i] && zk[p26]==ap4[i])
||   ( zk[p13]==ap2[i] && zk[p3]==ap1[i] && zk[p22]==ap4[i] && zk[p26]==ap6[i]))

||
 (zk[p8]==ap6[i] && zk[p4]==ap1[i])
 && (( zk[p13]==ap2[i] && zk[p3]==ap5[i] && zk[p22]==ap4[i] && zk[p26]==ap3[i])
||   ( zk[p13]==ap5[i] && zk[p3]==ap4[i] && zk[p22]==ap3[i] && zk[p26]==ap2[i])
||   ( zk[p13]==ap4[i] && zk[p3]==ap3[i] && zk[p22]==ap2[i] && zk[p26]==ap5[i])
||   ( zk[p13]==ap3[i] && zk[p3]==ap2[i] && zk[p22]==ap5[i] && zk[p26]==ap4[i]))

  ) { i=0; break;}
if (i==0) continue;
ap1[ii]=zk[p8]; ap2[ii]=zk[p13]; ap3[ii]=zk[p3]; ap4[ii]=zk[p22]; ap5[ii]=zk[p26]; ap6[ii]=zk[p4];
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
