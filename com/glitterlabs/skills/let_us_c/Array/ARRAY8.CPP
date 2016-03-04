#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int avg,sum=0;
int i;
int marks[30];//array declation
for (i=0;i<=29;i++)
{
 printf("\nEnter marks");
 scanf("%d",&marks[i]);//store data in array
}
for (i=0;i<=29;i++)
 sum=sum+marks[i];//read data from array
avg=sum/30;
printf("\n Average marks=%d",avg);
getch();
}
