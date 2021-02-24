//---------------------------------------------------------------------------
// #include <vcl\condefs.h>

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

float b=123;
int i, d=0, itog=1, i1, i2, i3, i4, i5, i6, pr=1;
clock_t t1, t2;
long double t3, tt, tt1;

//---------------------------------------------------------------------------
int main(int argc, char **argv)
{
FILE*fp;

std::cout << "N cikl (100000000-5sek)" << std::endl;
std::cin >> d;

// ïóñòîé öèêë
time_t seconds = time(NULL); // получить текущую дату, выраженную в секундах
fp=fopen("raz.txt","w");

for ( i1=1; i1<=32; i1++)
for ( i2=1; i2<=32; i2++)
for ( i3=1; i3<=32; i3++)
{
if (i1>=i2 && i2>=i3 && i1+i2+i3==32)
{

for ( i=1; i<=d; i++)
{
 //  itoa(i,string[1],10);

QString string = QString::number(i);

if (
  i>100
 && string[0]!='8' && string[0]!='9'
 && string[2]!='8' && string[2]!='9'
 && string[1]!='8' && string[1]!='9'
 && (string[0]=='0' || string[1]=='0' || string[2]=='0')

 && string[0]!=string[1] && string[0]!=string[2] && string[0]!=string[3]

 && string[1]!=string[2] && string[1]!=string[3]
 && string[2]!=string[3]
 )

  {
i4=i/100; i5=(i-i4*100)/10; i6=i-i4*100-i5*10;
    // printf("%d", i6);

if (i1==i2 && i4>i5) continue;
if (i1==i3 && i4>i6) continue;
if (i2==i3 && i5>i6) continue;
if (i1*i4+i2*i5+i3*i6==64)

if (i1==i1) {
 printf("A%d+%c B%d+%c C%d+%c %d\n", i1, string.toStdString ().at (0), i2, string.toStdString ().at (1), i3, string.toStdString ().at (2), pr++);
 fprintf(fp,"%c %d  %c %d  %c %d\n",  i1, string.toStdString ().at (0), i2, string.toStdString ().at (1), i3, string.toStdString ().at (2));
}

}}}}

fclose(fp);

std::cout << "[cikl] " << (time(NULL)-seconds) << std::endl;

std::cin >> b;
    return 0;
}
//---------------------------------------------------------------------------
