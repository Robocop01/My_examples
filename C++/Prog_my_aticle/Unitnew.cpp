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
//---------------------------------------------------------------------------
USERES("cikl.res");
//---------------------------------------------------------------------------
int main(int argc, char **argv)
{
FILE*fp;
char string[10][10], sss;
float b=123;
int i, d=0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, pr=1, yyy[6000], ib[6000], in[6000];
clock_t t1, t2;
long double t3, tt, tt1;

for ( i=1234567; i<=7654321; i++)
{             //**
   itoa(i,string[1],10);
if (
    string[1][0]!='0' && string[1][0]!='8' && string[1][0]!='9'
 && string[1][1]!='0' && string[1][1]!='8' && string[1][1]!='9'
 && string[1][2]!='0' && string[1][2]!='8' && string[1][2]!='9'
 && string[1][3]!='0' && string[1][3]!='8' && string[1][3]!='9'
 && string[1][4]!='0' && string[1][4]!='8' && string[1][4]!='9'
 && string[1][5]!='0' && string[1][5]!='8' && string[1][5]!='9'
 && string[1][6]!='0' && string[1][6]!='8' && string[1][6]!='9'

 && string[1][0]!=string[1][1] && string[1][0]!=string[1][2] && string[1][0]!=string[1][3] && string[1][0]!=string[1][4]
 && string[1][0]!=string[1][5] && string[1][0]!=string[1][6]

 && string[1][1]!=string[1][2] && string[1][1]!=string[1][3] && string[1][1]!=string[1][4]
 && string[1][1]!=string[1][5] && string[1][1]!=string[1][6]

 && string[1][2]!=string[1][3] && string[1][2]!=string[1][4] && string[1][2]!=string[1][5] && string[1][2]!=string[1][6]

 && string[1][3]!=string[1][4] && string[1][3]!=string[1][5] && string[1][3]!=string[1][6]

 && string[1][4]!=string[1][5]  && string[1][4]!=string[1][6]

 && string[1][5]!=string[1][6]
 )

  {
yyy[++d]=i;
ib[d]=yyy[d]/1000000;
in[d]=(yyy[d]-ib[d]*1000000)/100000;
printf("%d -- %d\n", yyy[d], d);
   }


}


cout << "N cikl (100000000-5sek)" << endl;
cin >> d;

// пустой цикл
t1=clock();
fp=fopen("raz.txt","w");

for ( i1=0; i1<=50; i1++)
{   printf("c %d\n", i1);                                //****
for ( i2=1; i2<=i1; i2++)
{   //printf("c %d\n", i2);
for ( i3=1; i3<=i2; i3++)
for ( i4=1; i4<=i3; i4++)
if (i1+i2+i3+i4<254)
for ( i5=1; i5<=i4; i5++)
if (i1+i2+i3+i4+i5<255)
for ( i6=1; i6<=i5; i6++)
for ( i7=1; i7<=i6; i7++)

{                  //****
if (i1+i2+i3+i4+i5+i6+i7==256)
{                  //***

for ( i=1; i<=5040; i++)
{             //**

i8=ib[i];
i9=in[i];

if (i1==i2 && i8>i9) continue;
i10=(yyy[i]-i8*1000000-i9*100000)/10000;

if (i1==i3 && i8>i10) continue;
i11=(yyy[i]-i8*1000000-i9*100000-i10*10000)/1000;

if (i1==i4 && i8>i11) continue;
i12=(yyy[i]-i8*1000000-i9*100000-i10*10000-i11*1000)/100;

if (i1==i5 && i8>i12) continue;
i13=(yyy[i]-i8*1000000-i9*100000-i10*10000-i11*1000-i12*100)/10;

if (i1==i6 && i8>i13) continue;
i14=yyy[i]-i8*1000000-i9*100000-i10*10000-i11*1000-i12*100-i13*10;

if ((i1==i7 && i8>i14)
|| (i2==i3 && i9>i10)
|| (i2==i4 && i9>i11)
|| (i2==i5 && i9>i12)
|| (i2==i6 && i9>i13)
|| (i2==i7 && i9>i14)
|| (i3==i4 && i10>i11)
|| (i3==i5 && i10>i12)
|| (i3==i6 && i10>i13)
|| (i3==i7 && i10>i14)
|| (i4==i5 && i11>i12)
|| (i4==i6 && i11>i13)
|| (i4==i7 && i11>i14)
|| (i5==i6 && i12>i13)
|| (i5==i7 && i12>i14)
|| (i6==i7 && i13>i14) ) continue;

if (i1*i8+i2*i9+i3*i10+i4*i11+i5*i12+i6*i13+i7*i14==512)

  {    itoa(yyy[i],string[1],10);
  printf("A%d+%c B%d+%c C%d+%c D%d+%c I%d+%c F%d+%c J%d+%c %d\n",i1, string[1][0], i2, string[1][1], i3, string[1][2], i4, string[1][3], i5, string[1][4], i6, string[1][5], i7, string[1][6], pr++);
 //  fprintf(fp,"A%d+%c B%d+%c C%d+%c D%d+%c I%d+%c F%d+%c J%d+%c %d\n",i1, string[1][0], i2, string[1][1], i3, string[1][2], i4, string[1][3], i5, string[1][4], i6, string[1][5], i7, string[1][6], pr-1);}
   fprintf(fp,"%c+%d %c+%d %c+%d %c+%d %c+%d %c+%d %c+%d\n",string[1][0], i1, string[1][1], i2, string[1][2], i3, string[1][3], i4, string[1][4], i5, string[1][5], i6, string[1][6], i7);}

}      //**
}      //***
}      //****
}
}      //*****

fclose(fp);

t2=clock();
tt=(t2-t1)/CLK_TCK;
cout << "[cikl] "<< "Time cikle:" << tt <<endl;



cin >> b;
	return 0;
}