#include<stdio.h>
int main()
{
int a,b;
printf("Enter the values of a and b: ");
scanf("%d %d",&a,&b);
printf("value of a = %d and b = %d before swap",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\nvalue of a = %d and b = %d after swap",a,b);
return 0;
}
