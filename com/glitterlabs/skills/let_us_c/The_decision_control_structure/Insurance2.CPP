/*insurance of driver by using operators*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int age;
char sex,ms;
printf("enter the marital status, sex and age of driver");
scanf("%c%c%d",&ms,&sex,&age);
if((ms=='M')||(ms=='U'&& sex=='M'&& age>30)||(ms=='U'&& sex=='F'&& age>25))
printf("driver is insured");
else
printf("driver is not insured");
getch();
}