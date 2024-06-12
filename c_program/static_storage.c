#include<stdio.h>
void add();
int main()
{
add1();//every time we call that function it will update the value of "a"
add1();
add1();
add2();//every time we call that function it will not update the value of "a"
add2();
add2();
return 0;
}
void add1()
{
static int a=20;//with static storage class 
a=a+10;
printf("%d\n",a);

}
void add2()
{
int a=20;//with static storage class 
a=a+10;
printf("%d\n",a);

}
