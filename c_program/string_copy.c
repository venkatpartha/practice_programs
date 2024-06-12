#include<stdio.h>
#include<string.h>
int main()
{
char str1[20],str2[20];
printf("Enter two Strings\n");
scanf("%s %s",&str1,&str2);
int temp=strcmp(str1,str2);
printf("Before String copy: %s %s\n",str1,str2);
if(temp==0)
printf("Strings are equal\n");
else
printf("Strings are not equal\n");
strcpy(str1,str2);//copy from string 2 (str2) to string 1 (str1)
printf("After String copy: %s %s\n",str1,str2);
temp=strcmp(str1,str2);
if(temp==0)
printf("Strings are equal\n");
else
printf("Strings are not equal\n");
return 0;
}
