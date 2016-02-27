#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num;
float factl=1;
printf("enter any number");
scanf("%d",&num);
while(num>0)
{
factl=factl*num;
num=num-1;
}
printf("\n factorial value= %3f",factl);
getch();
}