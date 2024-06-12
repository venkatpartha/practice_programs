#include<stdio.h>
#include<string.h>
int main()
{
char str[]="hello world";
printf("%lu\n",sizeof(str));
printf("%lu\n",strlen(str));//to find out length of string
return 0;
}
