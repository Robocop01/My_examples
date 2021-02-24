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
int i, d=0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, pr=1;
clock_t t1, t2;
long double t3, tt, tt1;
cout << "N cikl (100000000-5sek)" << endl;
cin >> d;


// пустой цикл
t1=clock();
fp=fopen("raz.txt","w");

for ( i1=1; i1<=32; i1++)
for ( i2=1; i2<=32; i2++)
for ( i3=1; i3<=32; i3++)
for ( i4=1; i4<=32; i4++)
for ( i5=1; i5<=32; i5++)
for ( i6=1; i6<=32; i6++)
{                  //****
if (i1>=i2 && i2>=i3 && i3>=i4 && i4>i5 && i5>i6 && i1+i2+i3+i4+i5+i6==32)
{                  //***

for ( i=100000; i<=d; i++)
{             //**
   itoa(i,string[1],10);
if (

    string[1][0]!='0' && string[1][0]!='8' && string[1][0]!='9'
 && string[1][2]!='0' && string[1][2]!='8' && string[1][2]!='9'
 && string[1][1]!='0' && string[1][1]!='8' && string[1][1]!='9'
 && string[1][3]!='0' && string[1][3]!='8' && string[1][3]!='9'
 && string[1][4]!='0' && string[1][4]!='8' && string[1][4]!='9'
 && string[1][5]!='0' && string[1][5]!='8' && string[1][5]!='9'

 && string[1][0]!=string[1][1] && string[1][0]!=string[1][2] && string[1][0]!=string[1][3] && string[1][0]!=string[1][4] && string[1][0]!=string[1][5]

 && string[1][1]!=string[1][2] && string[1][1]!=string[1][3] && string[1][1]!=string[1][4] && string[1][1]!=string[1][5]

 && string[1][2]!=string[1][3] && string[1][2]!=string[1][4] && string[1][2]!=string[1][5]
 
 && string[1][3]!=string[1][4] && string[1][3]!=string[1][5]

 && string[1][4]!=string[1][5]
 )

  {  //*

i7=i/100000;
i8=(i-i7*100000)/10000;
i9=(i-i7*100000-i8*10000)/1000;
i10=(i-i7*100000-i8*10000-i9*1000)/100;
i11=(i-i7*100000-i8*10000-i9*1000-i10*100)/10;
i12=i-i7*100000-i8*10000-i9*1000-i10*100-i11*10;

if (i1==i2 && i7>i8) continue;
if (i1==i3 && i7>i9) continue;
if (i1==i4 && i7>i10) continue;
if (i1==i5 && i7>i11) continue;
if (i1==i6 && i7>i12) continue;
if (i2==i3 && i8>i9) continue;
if (i2==i4 && i8>i10) continue;
if (i2==i5 && i8>i11) continue;
if (i2==i6 && i8>i12) continue;
if (i3==i4 && i9>i10) continue;
if (i3==i5 && i9>i11) continue;
if (i3==i6 && i9>i12) continue;
if (i4==i5 && i10>i11) continue;
if (i4==i6 && i10>i12) continue;
if (i5==i6 && i11>i12) continue;

   //  printf("%d\n", pr++);

if (i1*i7+i2*i8+i3*i9+i4*i10+i5*i11+i6*i12==64)

  {    printf("A%d+%c B%d+%c C%d+%c D%d+%c E%d+%c I%d+%c %d\n",i1, string[1][0], i2, string[1][1], i3, string[1][2], i4, string[1][3], i5, string[1][4], i6, string[1][5], pr++);
   fprintf(fp,"A%d+%c B%d+%c C%d+%c D%d+%c E%d+%c I%d+%c %d\n",i1, string[1][0], i2, string[1][1], i3, string[1][2], i4, string[1][3], i5, string[1][4], i6, string[1][5], pr-1);}

 }  //*

}      //**
}      //***
}      //****


fclose(fp);

t2=clock();
tt=(t2-t1)/CLK_TCK;
cout << "[cikl] "<< "Time cikle:" << tt <<endl;



cin >> b;
	return 0;
}
//---------------------------------------------------------------------------
