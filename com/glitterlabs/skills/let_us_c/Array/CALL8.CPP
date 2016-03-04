#include<stdio.h>
#include<conio.h>
int call(int);
void main()
{
clrscr();
int avg,sum;
avg=call(sum);
printf("\navg=%d",avg);
getch();
}
int call(int)
{
int i,b,a=0;
int (salary[10]);
for(i=0;i<=9;i++)
{
 printf("\nEnter salary of emplyee");
 scanf("%d",&salary[i]);
}

 for(i=0;i<=9;i++)
 {
  a=a+salary[i];
  b =a/10;
 }
return(b);
}