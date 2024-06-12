//Pointer of Array
#include<stdio.h>
int main()
{
	int x[10];
	int *p;
	int i;
	p=x;// p points to starting address of array var,, X
	printf("Enter the 5 Element \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("Content of the array \n");
	for(i=0;i<5;i++)
	{
		printf("%p , %d\n",p,*p++);//here %p is to print the address of pointer and *p++ it is going to increment address not the value.
	}
	return 0;
}
