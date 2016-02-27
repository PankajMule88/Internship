/*calculation of employee overpay */
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int total_work,overtime_hour,overtime_pay,employ=1;
while(employ<=10)
{
printf("\nenter the hour worked by %d emplyee", employ);
scanf("%d",&total_work);
if(total_work>40)
{
overtime_hour=(total_work-40);
overtime_pay=(overtime_hour*12);
printf("\novertime hour=%d",overtime_hour);
printf("\novertime pay=RS.%d",overtime_pay);
}
else
printf("there is no overtime pay");
employ++;

}
getch();
}