//Nested structure
#include<stdio.h>
#include<ctype.h>

struct student{
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
printf("\nDetails of student..... is \n");
printf("___________________________________\n");
printf("Student ID : %d\n ",s.stdid);
printf("Name : %s \n",s.name);
printf("Semaster : %d\n",s.sem);
printf("Mark 1 : %d\n ",s.m.m1);
printf("Mark 2 : %d\n ",s.m.m2);
printf("Mark 3 : %d\n ",s.m.m3);
return 0;
}
