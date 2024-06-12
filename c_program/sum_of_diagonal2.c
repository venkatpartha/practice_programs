//Sum of minor diagonal program
#include<stdio.h>
int main()
{
int arr[10][10];

int i,j;
printf("Enter the Array elements:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&arr[i][j]);
}
}
printf("\nThe array elemants are \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",arr[i][j]);
}
printf("\n");
}
int sum=0;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i+j==3-1)//if((i==1&j==1)|(i==2&j==0)|(i==0&j==2)) /*here "3-1" is either row mines one or column mines one*/
{
sum=sum+arr[i][j];
}
}
}
printf("Sum of minor diagonal is : %d\n",sum);
return 0;
}
