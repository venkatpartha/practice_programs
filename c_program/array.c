//Array program
#include<stdio.h>

int main()
{
int i,n;

scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
printf("\nEnter the value of %d : ",i);
scanf("%d",&arr[i]);
}
for(int j=0;j<n;j++)
{
printf("\nPrint the value of %d : %d\n",j,arr[j]);
}
return 0;
}
