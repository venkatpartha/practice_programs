#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
printf("Enter Strings\n");
scanf("%s",&str);
int len=strlen(str);
printf("%d\n",len);
for(int i=len-1;i>=0;i--)
{
printf("%s",str[i]);

}
return 0;
}
