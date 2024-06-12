#include<stdio.h>
int main()
{
char c;
printf("Enter the character\t");
scanf("%c", &c);
if(c == 'a' || c == 'A' || c == 'e' || c =='E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U'){
printf("\nThe character %c is a Vowel.\n", c);}
else{
printf("The character %c is a consonant.\n", c);}
return 0;
}
