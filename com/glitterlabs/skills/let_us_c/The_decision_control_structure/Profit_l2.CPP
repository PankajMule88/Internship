#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float cp,sp,gain;
printf("enter cost price and selling price of the product");
scanf("%f %f",&cp,&sp);
gain=sp+cp;
printf("gain=%f",gain);
if(gain>cp)
printf("you made profit of Rs.=%f",gain);
else
printf("you are in loss of RS.%f", gain);

getch();
}