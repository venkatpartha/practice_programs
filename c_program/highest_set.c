#include<stdio.h>
#define bitsize sizeof(int) * 8
int main()
{
int num,order = 0,i;
printf("Enter the Number: ");
scanf("%d",&num);
for(i=0;i<bitsize;i++)
{
if((num>>i)&1)
order=i;
}
if(order != -1)
printf("Highest order set bit in %d is %d\n",num,order);
else
printf("0 has NO set bits.\n");
return 0;
}
