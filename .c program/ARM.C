#include<stdio.h>
#include<conio.h>
void main()
{
int num,a1,a2,a3,num1,num2;
clrscr();
printf("enter three digit number");
scanf("%d",&num);
a1=num%10;
num1=num/10;
a2=num1%10;
num2=num1/10;
a3=num2%10;
if(num==a1*a1*a1+a2*a2*a2+a3*a3*a3)
{
printf("number is armstrong number");
}
else
{
printf("number is not armstrong number");
}
getch();
}
