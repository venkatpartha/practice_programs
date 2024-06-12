//check lsb is set or not
#include<stdio.h>
int main()
{
int num;
printf("Enter the binary number\"0's and 1's \"");
scanf("%d", &num);
if(num & 1)
printf("LSB of %d is set",num);
else
printf("LSB of %d is reset",num);
return 0;

}
