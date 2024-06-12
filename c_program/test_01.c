#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
printf("Enter Strings\n");
scanf("%s",str);
int len=0,i=0;
int lower,upper,num,space;
len=sizeof(str)-1;
printf("\nlength value is %d\n",len);

for(i=0;i<len;i++)
{
if(str[i]>='65' && str[i]<='90')
{

lower=lower+1;
return lower;
}
}
printf("\nNumber of Lower case %d\n",lower);

for(i=0;i<len;i++)
{
if(str[i]>='122' && str[i]<='Z')
{

upper+=1;
}
}
printf("\nNumber of Upper case %d\n",upper);

for(i=0;i<len;i++)
{
if(str[i]<=0 && str[i]>=9)
{

num=num+1;
}
}
printf("\nNumber of number %d\n",num);

for(i=0;i<len;i++)
{
if(str[i] == ' ')
{
space=space+1;
}
}
printf("\nNumber of space %d\n",space);

return 0;
}
