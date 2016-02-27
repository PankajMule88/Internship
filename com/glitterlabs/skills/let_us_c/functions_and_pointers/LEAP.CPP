#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int yr;
printf("enter year");
scanf("%d",&yr);
if(yr%4==0 ? printf("it is leap year"):printf("it is not leap year"));
getch();
}