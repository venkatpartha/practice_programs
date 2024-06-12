//Copy one Array into another array program
#include<stdio.h>

int main()
{
int a1[100]={4,6,7,8,9};
int a2[100]={10,56,85,28,49};

int i;
for(i=0;i<5;i++)
{
printf("\nA1 Array : %d\n",a1[i]);
printf("\nA2 before copy :%d\n",a2[i]);
a2[i]=a1[i];
printf("\nA2 after copy : %d\n",a2[i]);
}
return 0;
}
