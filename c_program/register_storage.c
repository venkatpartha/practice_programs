#include<stdio.h>
//register int a=10; // global variable are not supported 
int main()
{
register int a=10;
printf("%d\n",a);
{
register int a=20;
printf("%d\n",a);

}
return 0;
}
