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
int i, d=0, itog=1, i1, i2, i3, i4, i5, i6, i7, i8, pr=1;
clock_t t1, t2;
long double t3, tt, tt1;
cout << "N cikl (100000000-5sek)" << endl;
cin >> d;


// ������ ����
t1=clock();
fp=fopen("raz.txt","w");

for ( i1=1; i1<=32; i1++)
for ( i2=1; i2<=32; i2++)
for ( i3=1; i3<=32; i3++)
for ( i4=1; i4<=32; i4++)
{                  //****
if (i1>=i2 && i2>=i3 && i3>=i4 && i1+i2+i3+i4==32)
{                  //***

for ( i=1; i<=d; i++)
{             //**
   itoa(i,string[1],10);
if (
  i>1000

 && string[1][0]!='0' && string[1][0]!='8' && string[1][0]!='9'
 && string[1][2]!='0' && string[1][2]!='8' && string[1][2]!='9'
 && string[1][1]!='0' && string[1][1]!='8' && string[1][1]!='9'
 && string[1][3]!='0' && string[1][3]!='8' && string[1][3]!='9'

 && string[1][0]!=string[1][1] && string[1][0]!=string[1][2] && string[1][0]!=string[1][3]

 && string[1][1]!=string[1][2] && string[1][1]!=string[1][3]

 && string[1][2]!=string[1][3]
 )

  {  //*

i5=i/1000;
i6=(i-i5*1000)/100;
i7=(i-i5*1000-i6*100)/10;
i8=i-i5*1000-i6*100-i7*10;

if (i1==i2 && i5>i6) continue;
if (i1==i3 && i5>i7) continue;
if (i1==i4 && i5>i8) continue;
if (i2==i3 && i6>i7) continue;
if (i2==i4 && i6>i8) continue;
if (i3==i4 && i7>i8) continue;

   //  printf("%d\n", i);

if (i1*i5+i2*i6+i3*i7+i4*i8==64)

  { printf("A%d+%c B%d+%c C%d+%c D%d+%c %d\n",i1, string[1][0], i2, string[1][1], i3, string[1][2], i4, string[1][3], pr++);
 //  fprintf(fp,"A%d+%c B%d+%c C%d+%c D%d+%c %d\n",i1, string[1][0], i2, string[1][1], i3, string[1][2], i4, string[1][3], pr-1);
   fprintf(fp,"%c %d %c %d %c %d %c %d\n",string[1][0], i1, string[1][1], i2, string[1][2], i3, string[1][3], i4);}

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
