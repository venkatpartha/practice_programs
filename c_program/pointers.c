//Pointer Variable
#include<stdio.h>
int main()
{
	int x=10;
	int *p;
	p=&x;
	printf("Value of x through x = %d\n",x);
	printf("Value of x through pointer p var = %d\n",*p);
	printf("Size of pointer var p = %ld\n",sizeof(p));//size of pointer variable is 8 byte
	printf("Size of Normal var x = %ld\n",sizeof(x));//size of normal variable is 4 byte
	printf("P after post increment = %d\n",++(*p));
	printf("x after post increment = %d\n",x++);
	printf("Value of x = %d\n",x);
	printf("Value of P = %d\n",*p);
	printf("P after post increment = %d\n",--(*p));
	printf("Value of pointer p var = %d\n",(*p)*(*p));//we can also performe arithmetic operation using pointer variable.
	return 0;
}
