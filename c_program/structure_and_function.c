//structure and function
#include<stdio.h>
#include<ctype.h>
void read();
void display();
struct AccountHolder{
	char name[20];
	long int accnum;
	char ifsc[10];
	char branchname[20];
	double balance;
};
struct AccountHolder acc;
int main()
{

read();
display();


return 0;
}

void read()
{
printf("Enter the Account Holder Name : ");
getchar();//to clear the buffer
fgets(acc.name,20,stdin);//this code can accept the space(reading the string with space)
printf("\nEnter Account Number : ");
scanf("%lf",&acc.accnum);
printf("\nEnter IFSC Code : ");
scanf("%s",acc.ifsc);
printf("\nEnter Branch Name : ");
getchar();//to clear the buffer
fgets(acc.branchname,20,stdin);//this code can accept the space(reading the string with space)
printf("\nEnter Amount to deposite : ");
scanf("%lf",&acc.balance);
}

void display()
{
printf("\nAccount Holder Details..... \n");
printf("___________________________________\n");
printf("Account Holder Name : %s\n",acc.name);
printf("Account Number : %ld\n",acc.accnum);
printf("IFSC Code : %s\n ",acc.ifsc);
printf("Branch Name : %s\n ",acc.branchname);
printf("Balance : %lf\n",acc.balance);
}












