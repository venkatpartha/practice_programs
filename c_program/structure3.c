//Declare structure variable using typedef(type defination) keyword.
#include<stdio.h>
#include<ctype.h>

struct student{
	int stdid;
	char name[20];
	char email[20];
	long int mob;
	double cgpa;
};
typedef struct student std;//typedef keyword
std s;//structure variable
int main()
{
//struct student s;
//struct student s1;
printf("Enter the Student ID : ");
scanf("%d",&s.stdid);
printf("\nEnter your Name : ");
//scanf("%s",s.name);
getchar();//to clear buffer
fgets(s.name,20,stdin);//to read character with space
printf("\nEnter your E-mail : ");
scanf("%s",s.email);
printf("\nEnter your Mobile Number : ");
scanf("%ld",&s.mob);
printf("\nEnter CGPA : ");
scanf("%lf",&s.cgpa);
/*s1.stdid=1802011;
char name[20]="johnwick";
char email[20]="john@wick.com";
s1.name;
s1.email;
s1.mob=1234567890;
s1.cgpa=8.32;*/
printf("\nDetails of first student..... is \n");
printf("___________________________________\n");
printf("Student ID : %d\n ",s.stdid);
printf("Name : %s \n",s.name);
printf("E-mail : %s\n",s.email);
printf("Mobile Number : %ld\n ",s.mob);
printf("CGPA : %.2lf\n",s.cgpa);
/*printf("Details of second student..... is \n");
printf("___________________________________\n");
printf("Student ID : %d\n ",s1.stdid);
printf("Name : %s \n",s1.name);
printf("E-mail : %s\n",s1.email);
printf("Mobile Number : %ld\n ",s1.mob);
printf("CGPA : %.2lf\n",s1.cgpa);*/

return 0;
}
