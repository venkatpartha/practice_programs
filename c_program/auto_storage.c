#include<stdio.h>
//auto int a=10; // global variable are not supported 
int main()
{
auto int a=10;
printf("%d\n",a);
{
auto int a=20;
printf("%d\n",a);

}
return 0;
}
