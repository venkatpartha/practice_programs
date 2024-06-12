//Defalut macros
#include<stdio.h> 
int main()
{
printf("Time : %s \n",__TIME__);
printf("Date : %s \n",__DATE__);
printf("File name : %s \n",__FILE__);
printf("Code line : %d \n",__LINE__);
printf("Standard C : %d \n",__STDC__);
return 0;
}
