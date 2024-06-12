#include<stdio.h>
int main()
{
int a,b,c,res;
printf("Enter the two num\n");
scanf("%d %d",&a,&b);
printf("Enter the operation for add=1 sub=2 mul=3 div=4 mod=5\n");
scanf("%d",&c);
switch(c)
{
case 1: res=a+b;
printf("Addition of two num is %d",res);
break;
case 2: res=a-b;
printf("Sub of two num is %d",res);
break;
case 3: res=a*b;
printf("Multi of two num is %d",res);
break;
case 4: res=a/b;
printf("Divid of two num is %d",res);
break;
case 5: res=a%b;
printf("Mod of two num is %d",res);
break;
default :
printf("Invalid opration");
break;
}
return 0;
}
