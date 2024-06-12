#include<stdio.h>
int main()
{
int a,b,i,hcf=0;
printf("Enter the value of two number\t");
scanf("%d %d",&a,&b);
for(i=1;i<=a && i<=b;i++)
{
if(a%i==0 && b%i==0)
hcf=i;
}
printf("\nHCF is %d\n",hcf);
return 0;
}
