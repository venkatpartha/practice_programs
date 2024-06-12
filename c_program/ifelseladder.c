#include<stdio.h>
int main()
{
float a;
printf("Enter the mark of \"a\" ");
scanf("%f",&a);
if(a>90 && a<=100)
printf("\nS Grade");
else if(a>80 && a<=90)
printf("\nA+ Grade");
else if(a>70 && a<=80)
printf("\nA Grade");
else if(a>60 && a<=70)
printf("\nB+ Grade");
else if(a>=50 && a<=60)
printf("\nB Grade");
else if(a>100)
printf("\nInvalid mark");
else
printf("\nFail");
return 0;
}
