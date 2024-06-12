#include<stdio.h>
int main()
{
int a;
printf("Enter the value of \"a\" ");
scanf("%d",&a);
if(a<50)
printf("\nA is less then 50");
else
{
if(a<100)
printf("\nA is greater then 50 and less then 100");
else
printf("\nA is greater then 100");
}
return 0;
}
