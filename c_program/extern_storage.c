#include<stdio.h>
extern int a;
void fun();
int main()
{
a=7;
printf("Bebore call: %d\n",a);
fun();
printf("After call: %d\n",a);
return 0;

}
