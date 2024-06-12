#include<stdio.h>
#include<ctype.h>
void grade(int s);
void read();
void display();
struct Employee
{
	int empid;
	char empname[20];
	char empdes[50];
	int sal;
}emp;

int main()
{
read();
display();
grade(emp.sal);
return 0;
}
void read()
{
printf("Enter the Employee ID : ");
scanf("%d",&emp.empid);
printf("\nEnter your Name : ");
getchar();//to clear buffer
fgets(emp.empname,20,stdin);//to read character with space
printf("\nEnter your Designation : ");
//getchar();//to clear buffer
fgets(emp.empdes,50,stdin);
printf("\nEnter salary : ");
scanf("%d",&emp.sal);
}

void display()
{
printf("\nDetails of Employee..... is \n");
printf("___________________________________\n");
printf("Employee ID : %d\n ",emp.empid);
printf("Name : %s \n",emp.empname);
printf("Designation : %s\n",emp.empdes);
printf("Salary : %d\n ",emp.sal);
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



















