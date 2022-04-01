#include<stdio.h>
void main()
{
float l,b,h,area;
clrscr();
printf("enter length,width and height of rectanular tank\n");
scanf("%f%f%f",&l,&b,&h);
area=l*b*h;
printf("area of rectangular tank=%f",area);
getch();
}