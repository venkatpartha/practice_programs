//Bubble sorting program
#include<stdio.h>
int main()
{
int arr[]={8,7,3,5,2,1,6,4};
int size=sizeof(arr)/sizeof(arr[0]);
int i,j,temp;
printf("Size of Array: %d\n",size);
printf("before sorting\n");
for(i=0;i<size;i++)
{
printf("%d\n",arr[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("after sorting\n");
for(i=0;i<size;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}
