//2D Array program
#include<stdio.h>
int main()
{
int arr[10][10];
int size=sizeof(arr)/sizeof(arr[0][0]);
int i,j;
printf("Size of Array: %d\n",size);
for(i=0;i<3;i++)
{
for(j=0;j<3;j++){
scanf("%d",&arr[i][j]);
}
}
printf("The array elemants are \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",arr[i][j]);
}
printf("\n");
}
return 0;
}
