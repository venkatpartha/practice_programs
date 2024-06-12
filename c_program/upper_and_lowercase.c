//check given Character is Upper or Lower case
#include<stdio.h>
int main()
{
char num;
printf("Enter the Character");
scanf("%c", &num);
if(num>=65 && num<=90)
printf("Character %c is Uppercase",num);
else if(num >= 97 && num <= 122)
printf("Character %c is Lowercase",num);
else
printf("Not a Character");
return 0;

}
