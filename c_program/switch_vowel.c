#include<stdio.h>
int main()
{
char c;
printf("Enter the character\t");
scanf("%c",&c);
switch(c)
{
case 'a':printf("The Character %c is Vowel", c);
break;
case 'e': printf("The Character %c is Vowel", c);
break;
case 'i': printf("The Character %c is Vowel", c);
break;
case 'o': printf("The Character %c is Vowel", c);
break;
case 'u': printf("The Character %c is Vowel", c);
break;
default : printf("the Character %c is Consonant", c);
break;
}
return 0;
}
