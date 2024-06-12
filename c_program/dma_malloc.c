#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *dyn_array;
	int n,i;
	printf("Enter the size of the array");
	scanf("%d",&n);
	dyn_array=(int*)malloc(n*sizeof(int));
	printf("Values in dynamically allocated array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",dyn_array[i]);
	}
	if(dyn_array==NULL){
		printf("Memory allocated failed.\n");
		return 1;
	}
	printf("Enter %d integers:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&dyn_array[i]);
	}
	printf("Values in dynamically allocated array: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",dyn_array[i]);
	}
	printf("\n");
	free(dyn_array);
	return 0;
}
