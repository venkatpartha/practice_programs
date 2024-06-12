//to find the number of digit
#include<stdio.h>
int main()
{
int num,count=0;
printf("enter the number\n");
scanf("%d",&num);
while(num!=0)
{
count++;
num/=10;
}
printf("Count is %d \n",count);
return 0;
}
