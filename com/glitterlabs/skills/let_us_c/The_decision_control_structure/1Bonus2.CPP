#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int bonus=0,cy,yoj,yos;
printf("enter current year and year ofjoining");
scanf("%d%d",&cy,&yoj);
yos=cy-yoj;
if(yos>3)
{
bonus=250;
printf("congrats! you have get bonus of Rs.%d",bonus);
}
printf("Sorry no bonus applied");
getch();
}

