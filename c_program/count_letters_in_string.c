#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
printf("Enter Strings\n");
scanf("%s",str);
int len=0,i=0;
int lower,upper,num,space;
len=strlen(str);
printf("\nlength value is %d\n",len);
for(i=0;i<len;i++)
{
if(str[i]<='a' && str[i]>='z')
{

lower++;
}
/*else
{
i++;
}*/
}
printf("\nNumber of Lower case %d\n",lower);

for(i=0;i<len;i++)
{
if(str[i]<='A' && str[i]>='Z')
{

upper++;
}
/*else
{
i++;
}*/
}
printf("\nNumber of Upper case %d\n",upper);

for(i=0;i<len;i++)
{
if(str[i]<=0 && str[i]>=9)
{

++num;
}
/*else
{
i++;
}*/
}
printf("\nNumber of number %d\n",num);

for(i=0;i<len;i++)
{
if(str[i] == ' ')
{
++space;
return space;
}
/*else
{
i++;
}*/
}
printf("\nNumber of space %d\n",space);

return 0;
}
