//Conditional macros
#include<stdio.h>
#define MAX(X,Y) if(a>b)\
printf("a is greater");\
else \
printf("b is greater"); 
int main()
{
int a,b;
printf("Enter number \"a\" : ");
scanf("%d",&a);
printf("Enter number \"b\" : ");
scanf("%d",&b);
MAX(a,b);
return 0;
}
