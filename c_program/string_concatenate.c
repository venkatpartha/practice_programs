#include<stdio.h>
#include<string.h>
int main()
{
char str1[20],str2[20];
printf("Enter two Strings\n");
scanf("%s %s",&str1,&str2);
int temp=strcmp(str1,str2);
printf("Before String concatenate: %s %s\n",str1,str2);
strcat(str1,str2);//(destination, source)
printf("After String concatenate: %s %s\n",str1,str2);
return 0;
}
