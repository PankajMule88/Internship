#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
for(i=1;i<=2;i++)
{
for(j=1;j<=2;j++)
{
if(i==j)
continue;
printf("\n%d%d",i,j);
}
}
getch();
}