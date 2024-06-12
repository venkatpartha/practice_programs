#include<stdio.h>
#include<string.h>
int main()
{
char str1[20],str2[20];
scanf("%s %s",&str1,&str2);
int temp=strcmp(str1,str2);
if(temp==0)
printf("Strings are equal");
else
printf("Strings are not equal");//to find out length of string
return 0;
}
