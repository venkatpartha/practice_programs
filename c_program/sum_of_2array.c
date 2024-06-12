//Sum of minor diagonal program
#include<stdio.h>
int main()
{
int arr[10][10],a[10][10];

int i,j;
printf("Enter the 1'st Array elements:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&arr[i][j]);
}
}
printf("Enter the 2'nd Array elements:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nThe 1'st array elemants are \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",arr[i][j]);
}
printf("\n");
}
printf("\nThe 2'nd array elemants are \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",a[i][j]);
}
printf("\n");
}
int sum[10][10];
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{

sum[i][j]=a[i][j]+arr[i][j];

}
}
printf("sum of 2 arrays\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",sum[i][j]);
}
printf("\n");
}
return 0;
}
