#include<stdio.h>
#include<conio.h>
int check(int);
void main()
{
clrscr();
int i=45,c;
c=check(i);
printf("\n%d",c);
getch();
}
int check(int ch)
{
if(ch>=45)
return(100);
else
return(10*10);
}
