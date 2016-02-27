//swapping by pointer
#include<stdio.h>
#include<conio.h>
void swap(int x, int y);
void main()
{
clrscr();
int a=10, b=20;
swap(a,b);
printf("\n a=%d b=%d",a,b);
getch();
}
swap(int x, int y)
{
int z;
z=x;
x=y;
y=z;
printf("\n = %d y=%d", x,y);
}
