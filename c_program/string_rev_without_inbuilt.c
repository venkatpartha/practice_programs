#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
printf("Enter Strings\n");
scanf("%s",&str);
int len=0,i=0;
while(str[i]!='\0')
{
len++;
i++;
}
char temp;
for(i=0;i<len/2;i++)
{
temp=str[i];
str[i]=str[len-i-1];
str[len-i-1]=temp;
}
printf("\nAfter Reverce %s\n",str);
return 0;
}
