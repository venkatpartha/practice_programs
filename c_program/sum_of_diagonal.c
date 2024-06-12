//Sum of major diagonal program
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
if(i==j)
{
sum=sum+arr[i][j];
}
}
}
printf("Sum of major diagonal is : %d\n",sum);
return 0;
}
