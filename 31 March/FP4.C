#include<stdio.h>
void main()
{
float r,area,pi=3.14;
clrscr();
printf("enter the radius of circle\n");
scanf("%f",&r);
area=pi*r*r;
printf("area of circle=%f",area);
getch();
}