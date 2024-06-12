#include<stdio.h>
int main()
{
int m,cm,ft,in;
printf("Enter the height in feet and inch\t");
scanf("%d %d",&ft,&in);
int temp=(ft*30.48)+(in*2.54);
cm=temp%100;
m=temp/100;
printf("\nHeight in Meter = %d and Centimeters = %d\n", m,cm);
return 0;
}
