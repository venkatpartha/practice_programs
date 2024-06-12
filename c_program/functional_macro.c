//Functional macros
#include<stdio.h>
#define SUM(X,Y) X+Y
#define MUL(X,Y) X*Y 
int main()
{
int a,b;
printf("Enter number \"a\" : ");
scanf("%d",&a);
printf("Enter number \"b\" : ");
scanf("%d",&b);

printf("\n%d",SUM(a,b));//a+b
printf("\n%d",MUL(a,b));//a*b
printf("\n%d\n",MUL(a+2,b-4));//a+2*b-4
return 0;
}
