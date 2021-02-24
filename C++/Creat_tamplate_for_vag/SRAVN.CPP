//---------------------------------------------------------------------------

#include <stdio.h>
#include <string.h>
#include <dos.h>
#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused

int main(int argc, char* argv[])
{
char sim[100];
int a, b, c, d, eatt=0, num1=0,num2=0;
char number1[2000][10];
char number2[2000][10];

struct date D;
getdate(&D);
struct time I;
gettime(&I);


   FILE*fp1;

if ((fp1=fopen("139700", "r"))==NULL)
{
 printf ("файл 139700 не удаётcя открыть");
 return 0;
}

while(!feof(fp1))
{
do
{
fscanf(fp1, "%c", &sim[eatt]);
if (sim[eatt]=='\n') break;

do
{
if    ( sim[eatt]=='0' || sim[eatt]=='1' ||
        sim[eatt]=='2' || sim[eatt]=='3' ||
        sim[eatt]=='4' || sim[eatt]=='5' ||
        sim[eatt]=='6' || sim[eatt]=='7' ||
        sim[eatt]=='8' || sim[eatt]=='9')
      { eatt++; fscanf(fp1, "%c", &sim[eatt]); } else break;
} while (true);
if (eatt==8)  {strcpy(number1[num1],sim); num1++;}  else {}
eatt=0;
} while (!feof(fp1));
fscanf(fp1, "\n");
}
  fclose(fp1);

 // Їрщы 2
 FILE*fp2;

if ((fp2=fopen("arenda", "r"))==NULL)
{
 printf ("файл arenda не удаётcя открыть");
 return 0;
}

 while(!feof(fp2))
{
do
{
fscanf(fp2, "%c", &sim[eatt]);
if (sim[eatt]=='\n') break;

do
{
if    ( sim[eatt]=='0' || sim[eatt]=='1' ||
        sim[eatt]=='2' || sim[eatt]=='3' ||
        sim[eatt]=='4' || sim[eatt]=='5' ||
        sim[eatt]=='6' || sim[eatt]=='7' ||
        sim[eatt]=='8' || sim[eatt]=='9')
      { eatt++; fscanf(fp2, "%c", &sim[eatt]); } else break;
} while (true);
if (eatt==8)  {strcpy(number2[num2],sim); num2++;}  else {}
eatt=0;
} while (!feof(fp2));
fscanf(fp2, "\n");
}
  fclose(fp2);

num1=num1-1;
num2=num2-1;
FILE*fp;
fp=fopen("139700", "w");

fprintf (fp,"(:1397 51041 1 ");
if (D.da_day<10) fprintf (fp,"0");
fprintf (fp,"%d ",D.da_day);
if (D.da_mon<10) fprintf (fp,"0");
fprintf (fp,"%d ",D.da_mon);
if (I.ti_hour<10) fprintf (fp,"0");
fprintf (fp,"%d ",I.ti_hour);
if (I.ti_min<10) fprintf (fp,"0");
fprintf (fp,"%d ",I.ti_min);
fprintf (fp," 1/1:");

for (a=0; a<=num1; a++)
{
d=0;
for (c=0; c<=num2; c++)
{
if ((number1[a][0]==number2[c][0] &&
    number1[a][1]==number2[c][1] &&
    number1[a][2]==number2[c][2] &&
    number1[a][3]==number2[c][3] &&
    number1[a][4]==number2[c][4] &&
    number1[a][5]==number2[c][5] &&
    number1[a][6]==number2[c][6] &&
    number1[a][7]==number2[c][7]) ||
     (number1[a][0]=='5' &&
     (number2[c][0]=='5' && number2[c][1]=='0' &&
      number2[c][2]=='0' && number2[c][3]=='0' &&
      number2[c][4]=='0' && number2[c][5]=='0' &&
      number2[c][6]=='0' && number2[c][7]=='0'))) {d++;} else {}
}
if (d==0)

{
fprintf (fp,"\n");
if (a<9)  fprintf (fp,"0");
fprintf (fp,"%d ",a+1);
for (b=0; b<=7; b++)
 {
  fprintf (fp,"%c",number1[a][b]);
  if (b==7) fprintf (fp,":");}
}

else
{
  fprintf (fp,"\n");
  if (a<9)  fprintf (fp,"0");
  fprintf (fp,"%d ",a+1);
  for (b=0; b<=7; b++)
  {
  fprintf (fp,"%c",number1[a][b]);
  if (b==7)fprintf (fp," 1:");}
}

}
fprintf (fp,")");
fclose(fp);

        return 0;
}
//---------------------------------------------------------------------------
 
