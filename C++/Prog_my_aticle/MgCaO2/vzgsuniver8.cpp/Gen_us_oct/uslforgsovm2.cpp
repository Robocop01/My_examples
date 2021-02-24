
            //---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define A 32
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{

FILE*fp;
int a, b;
char   //1    2     3     4     5     6     7     8     9     10    11    12    13    14    15    16    17    18    19    20    21    22    23    24    25    26    27    28    29    30    31    32
p1[][A]={"p1","p3", "p1", "p2", "p27","p16","p15","p20","p3", "p5", "p3", "p5", "p2", "p4", "p2", "p4", "p7", "p8", "p9", "p10","p7", "p8", "p9", "p10","p7", "p8", "p12","p11","p7", "p9", "p13","p11"},
p6[][A]={"p6","p5", "p6", "p4", "p28","p18","p17","p22","p18","p16","p18","p16","p17","p15","p17","p15","p14","p13","p12","p11","p14","p13","p12","p11","p10","p9", "p13","p14","p8", "p10","p14","p12"},
p2[][A]={"p2","p19","p15","p23","p29","p19","p23","p24","p1", "p1", "p6", "p6", "p1", "p1", "p6", "p6", "p2", "p3", "p4", "p2", "p17","p15","p15","p16","p19","p19","p21","p20","p23","p23","p25","p24"},
p3[][A]={"p3","p20","p16","p24","p31","p29","p27","p31","p7", "p9", "p14","p12","p10","p8", "p11","p13","p26","p22","p24","p5", "p27","p18","p28","p29","p20","p30","p22","p21","p26","p28","p27","p32"},
p4[][A]={"p4","p21","p17","p25","p30","p21","p25","p26","p19","p19","p21","p21","p23","p23","p25","p25","p20","p26","p22","p20","p29","p30","p30","p28","p31","p31","p32","p29","p31","p31","p32","p28"},
p5[][A]={"p5","p22","p18","p26","p32","p30","p28","p32","p8", "p10","p13","p11","p7", "p9", "p14","p12","p3", "p4", "p5", "p24","p18","p27","p16","p17","p29","p22","p30","p32","p27","p24","p26","p25"};



fp=fopen("uslov.txt","w");

//if
//(
fprintf(fp,"if\n(\n");

for (b=0; b<=31; b++)
{
fprintf(fp,"     //%d_\n", b+1);

//**************1
//(ap1[i]==p1 && ap6[i]==p6)
fprintf(fp,"(ap1[i]==%s && ap6[i]==%s)\n",
p1[b], p6[b]);

// && ( ap2[i]==p2 && ap3[i]==p3 && ap4[i]==p4 && ap5[i]==p5
fprintf(fp," && (ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p2[b], p3[b], p4[b], p5[b]);

// ||     ap2[i]==p3 && ap3[i]==p4 && ap4[i]==p5 && ap5[i]==p2
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p3[b], p4[b], p5[b], p2[b]);

// ||     ap2[i]==p4 && ap3[i]==p5 && ap4[i]==p2 && ap5[i]==p3
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p4[b], p5[b], p2[b], p3[b]);

// ||     ap2[i]==p5 && ap3[i]==p2 && ap4[i]==p3 && ap5[i]==p4)
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s)\n",
p5[b], p2[b], p3[b], p4[b]);
// ||
fprintf(fp,"\n||\n");

//**************2
//(ap1[i]==p2 && ap6[i]==p4)
fprintf(fp,"(ap1[i]==%s && ap6[i]==%s)\n",
p2[b], p4[b]);

// && ( ap2[i]==p1 && ap3[i]==p5 && ap4[i]==p6 && ap5[i]==p3
fprintf(fp," && (ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p1[b], p5[b], p6[b], p3[b]);

// ||     ap2[i]==p5 && ap3[i]==p6 && ap4[i]==p3 && ap5[i]==p1
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p5[b], p6[b], p3[b], p1[b]);

// ||     ap2[i]==p6 && ap3[i]==p3 && ap4[i]==p1 && ap5[i]==p5
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p6[b], p3[b], p1[b], p5[b]);

// ||     ap2[i]==p3 && ap3[i]==p1 && ap4[i]==p5 && ap5[i]==p6
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s)\n",
p3[b], p1[b], p5[b], p6[b]);
// ||
fprintf(fp,"\n||\n");

//**************3
//(ap1[i]==p3 && ap6[i]==p5)
fprintf(fp,"(ap1[i]==%s && ap6[i]==%s)\n",
p3[b], p5[b]);

// && ( ap2[i]==p1 && ap3[i]==p2 && ap4[i]==p6 && ap5[i]==p4
fprintf(fp," && (ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p1[b], p2[b], p6[b], p4[b]);

// ||     ap2[i]==p2 && ap3[i]==p6 && ap4[i]==p4 && ap5[i]==p1
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p2[b], p6[b], p4[b], p1[b]);

// ||     ap2[i]==p6 && ap3[i]==p4 && ap4[i]==p1 && ap5[i]==p2
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p6[b], p4[b], p1[b], p2[b]);

// ||     ap2[i]==p4 && ap3[i]==p1 && ap4[i]==p2 && ap5[i]==p6
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s)\n",
p4[b], p1[b], p2[b], p6[b]);
// ||
fprintf(fp,"\n||\n");

//**************4
//(ap1[i]==p4 && ap6[i]==p2)
fprintf(fp,"(ap1[i]==%s && ap6[i]==%s)\n",
p4[b], p2[b]);

// && ( ap2[i]==p1 && ap3[i]==p3 && ap4[i]==p6 && ap5[i]==p5
fprintf(fp," && (ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p1[b], p3[b], p6[b], p5[b]);

// ||     ap2[i]==p3 && ap3[i]==p6 && ap4[i]==p5 && ap5[i]==p1
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p3[b], p6[b], p5[b], p1[b]);

// ||    ap2[i]==p6 && ap3[i]==p5 && ap4[i]==p1 && ap5[i]==p3
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p6[b], p5[b], p1[b], p3[b]);

// ||    ap2[i]==p5 && ap3[i]==p1 && ap4[i]==p3 && ap5[i]==p6
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s)\n",
p5[b], p1[b], p3[b], p6[b]);
// ||
fprintf(fp,"\n||\n");

//**************5
//(ap1[i]==p5 && ap6[i]==p3)
fprintf(fp,"(ap1[i]==%s && ap6[i]==%s)\n",
p5[b], p3[b]);

// && ( ap2[i]==p1 && ap3[i]==p4 && ap4[i]==p6 && ap5[i]==p2
fprintf(fp," && (ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p1[b], p4[b], p6[b], p2[b]);

// ||         ap2[i]==p4 && ap3[i]==p6 && ap4[i]==p2 && ap5[i]==p1
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p4[b], p6[b], p2[b], p1[b]);

// ||     ap2[i]==p6 && ap3[i]==p2 && ap4[i]==p1 && ap5[i]==p4
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p6[b], p2[b], p1[b], p4[b]);

// ||     ap2[i]==p2 && ap3[i]==p1 && ap4[i]==p4 && ap5[i]==p6
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s)\n",
p2[b], p1[b], p4[b], p6[b]);
// ||
fprintf(fp,"\n||\n");

//**************6
//(ap1[i]==p6 && ap6[i]==p1)
fprintf(fp,"(ap1[i]==%s && ap6[i]==%s)\n",
p6[b], p1[b]);

// && ( ap2[i]==p2 && ap3[i]==p5 && ap4[i]==p3 && ap5[i]==p3)
fprintf(fp," && (ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p2[b], p5[b], p4[b], p3[b]);

// ||     ap2[i]==p5 && ap3[i]==p4 && ap4[i]==p3 && ap5[i]==p2
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p5[b], p4[b], p3[b], p2[b]);

// ||     ap2[i]==p4 && ap3[i]==p3 && ap4[i]==p2 && ap5[i]==p5
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s\n",
p4[b], p3[b], p2[b], p5[b]);

// ||     ap2[i]==p3 && ap3[i]==p2 && ap4[i]==p5 && ap5[i]==p4
fprintf(fp,"||   ap2[i]==%s && ap3[i]==%s && ap4[i]==%s && ap5[i]==%s)\n",
p3[b], p2[b], p5[b], p4[b]);
// ||
fprintf(fp,"\n||\n");
}

fprintf(fp,")\n");

fclose(fp);
puts("end");
        return 0;
}
//---------------------------------------------------------------------------
