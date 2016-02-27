/*calculation of power*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int power=1,a,b;
printf("enter any two numbers");
scanf("%d %d",&a,&b);
while(b>0)
{
power=power*a;
b--;
}
printf(" Res to Power of this two number is %d",power);
getch();
}