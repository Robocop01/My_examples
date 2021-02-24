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
int i, d=0, itog=1, i1, i2, i3, i4, i5, i6;
clock_t t1, t2;
long double t3, tt, tt1;
cout << "N cikl (100000000-5sek)" << endl;
cin >> d;


// пустой цикл
t1=clock();
fp=fopen("raz.txt","w");

for ( i1=1; i1<=32; i1++)
for ( i2=1; i2<=32; i2++)
{
if (i1>=i2 && i1+i2==32)
{

for ( i=1; i<=d; i++)
{
   itoa(i,string[1],10);
if (
  i>9
 && string[1][0]!='0' && string[1][0]!='8' && string[1][0]!='9'
 && string[1][1]!='0' && string[1][1]!='8' && string[1][1]!='9'

 && string[1][0]!=string[1][1]
 )

  {
i4=i/10; i5=i-i4*10;
   //  printf("%d\n", i5);

if (i1==i2 && i4>i5) continue;

if (i1*i4+i2*i5==64)

  { printf("A%d+%c B%d+%c\n",i1, string[1][0], i2, string[1][1]);
   fprintf(fp,"A%d+%c B%d+%c\n",i1, string[1][0], i2, string[1][1]);} }

}

}
}


fclose(fp);

t2=clock();
tt=(t2-t1)/CLK_TCK;
cout << "[cikl] "<< "Time cikle:" << tt <<endl;



cin >> b;
	return 0;
}
//---------------------------------------------------------------------------
