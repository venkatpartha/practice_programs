//Nested structure and ifelse ladder
#include<stdio.h>
#include<ctype.h>
float a;
int grade(int s1,int s2,int s3);
int read();
int display();
struct student
{
	int stdid;
	char name[20];
	int sem;
	struct mark
	{
		int m1;
		int m2;
		int m3;
	}m;
}s;

int main()
{
read();
display();

return 0;
}
int read()
{
printf("Enter the Student ID : ");
scanf("%d",&s.stdid);
printf("\nEnter your Name : ");
getchar();//to clear buffer
fgets(s.name,20,stdin);//to read character with space
printf("\nEnter your semaster : ");
scanf("%d",&s.sem);
printf("\nEnter your mark1 : ");
scanf("%d",&s.m.m1);
printf("\nEnter your mark2 : ");
scanf("%d",&s.m.m2);
printf("\nEnter your mark3 : ");
scanf("%d",&s.m.m3);
}

int display()
{
printf("\nDetails of student..... is \n");
printf("___________________________________\n");
printf("Student ID : %d\n ",s.stdid);
printf("Name : %s \n",s.name);
printf("Semaster : %d\n",s.sem);
printf("Mark 1 : %d\n ",s.m.m1);
printf("Mark 2 : %d\n ",s.m.m2);
printf("Mark 3 : %d\n ",s.m.m3);
grade(s.m.m1,s.m.m2,s.m.m3);
printf("Average = %.2f\n",a);
}

int grade(int s1,int s2,int s3)
{
int sum=s1+s2+s3;
printf("Total= %d\n",sum);
a=sum/3;
if(s1<50 || s2<50 || s3<50)
printf("\nFail\n");
else if(a>90 && a<=100)
printf("\nS Grade\n");
else if(a>80 && a<=90)
printf("\nA+ Grade\n");
else if(a>70 && a<=80)
printf("\nA Grade\n");
else if(a>60 && a<=70)
printf("\nB+ Grade\n");
else if(a>=50 && a<=60)
printf("\nB Grade\n");
else
printf("\nInvalid mark\n");
}



















