#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int r,c,sum;
for(r=1;r<=3;r++)
{
for(c=1;c<=2;c++)
{
sum=r+c;
printf("r=%d c=%d sum=%d\n",r,c,sum);
}
}
getch();
}