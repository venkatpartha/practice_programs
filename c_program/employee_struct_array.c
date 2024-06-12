#include<stdio.h>
#include<ctype.h>
int x;
void grade(int s);
void read();
void display();
int main()
{
printf("Enter the number of employe less than 10 :");
scanf("%d",&x);
read();
display();

return 0;
}
struct student
{
	int empid;
	char empname[20];
	char empdes[50];
	int sal;
}emp[10];
void read()
{
for(int i=0;i<x;i++){
printf("\nEnter the Employee ID : ");
scanf("%d",&emp[i].empid);
printf("\nEnter your Name : ");
getchar();//to clear buffer
fgets(emp[i].empname,20,stdin);//to read character with space
printf("\nEnter your Designation : ");
//getchar();//to clear buffer
fgets(emp[i].empdes,50,stdin);
printf("\nEnter salary : ");
scanf("%d",&emp[i].sal);
}
}

void display()
{
for(int i=0;i<x;i++){
printf("\nDetails of Employee..... %d is ",i+1);
printf("\n___________________________________\n");
printf("Employee ID : %d\n ",emp[i].empid);
printf("\nName : %s\n",emp[i].empname);
printf("Designation : %s\n",emp[i].empdes);
printf("Salary : %d\n ",emp[i].sal);
grade(emp[i].sal);
printf("\n___________________________________\n");
}
}

void grade(int s)
{
if(s>60000)
printf("\nA Grade\n");
else if(s<=60000 && s>=50000)
printf("\nB Grade\n");
else if(s<50000 && s>=40000)
printf("\nC Grade\n");
else
printf("\nD Grade\n");
}



















