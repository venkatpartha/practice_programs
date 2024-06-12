#include<stdio.h>

int main()
{
int a,b,c,i,res;
printf("Welcome to RR Biryani\nHere is your menu\n1. Chicken Biryani ---> 250\n2. Chicken Lolipop ---> 220\n3. Veg Biryani ---> 180\n4. Mutton Biryani ---> 350\n5. Mushroom Biryani ---> 200\n");
//scanf("%d %d"&b);
printf("How many food Do you want to Order\t");
scanf("%d",&c);
for(i=1;i<=c;i++)
{
printf("\nSelect your food\t");
scanf("%d",&a);
switch(a)
{
case 1: {printf("Enter the Quentiti Chicken biriyani\t");
scanf("%d",&b);
res=b*250;
printf("\n\nBill is ________ ==> %d",res);
break;
}
case 2: {printf("Enter the Quentiti of Chicken lolipop\t");
scanf("%d",&b);
res=b*220;
printf("\n\nBill is ________ ==> %d",res);
break;
}
case 3: {printf("Enter the Quentiti Veg Biryani\t");
scanf("%d",&b);
res=b*180;
printf("\n\nBill is ________ ==> %d",res);
break;
}
case 4: {printf("Enter the Quentiti Mutton biriyani\t");
scanf("%d",&b);
res=b*350;
printf("\n\nBill is ________ ==> %d",res);
break;
}
case 5: {printf("Enter the Quentiti Mushroom biriyani\t");
scanf("%d",&b);
res=b*200;
printf("\n\nBill is ________ ==> %d",res);
break;
}
default :
printf("\nThat Dish is Not In The menu");
break;
}
}
printf("\nThankyou for Visiting, Visit again\n");
return 0;
}
