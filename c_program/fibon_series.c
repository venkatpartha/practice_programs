//Fibonacci series
#include<stdio.h>
int main()
{
int n,i,n1=0,n2=1,ln;
printf("Enter the value of n\n");
scanf("%d", &n);
printf("%d\n%d\n", n1,n2);
for(i=2;i<n;i++)
{
ln=n1+n2;
printf("%d\n", ln);
n1=n2;
n2=ln;
}
return 0;
}
