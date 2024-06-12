#include<stdio.h>
#define bitsize sizeof(int) * 8
int main()
{
int num,msb;
printf("Enter the Number: ");
scanf("%d",&num);
msb=1<<(bitsize-1);
if(num & msb)
printf("MSB of %d is set(1).\n",num);
else
printf("MSB of %d is reset(0).\n",num);
return 0;
}
