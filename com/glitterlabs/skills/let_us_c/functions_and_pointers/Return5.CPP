#include<stdio.h>
int factorial(int);
#include<conio.h>
void main()
{
clrscr();
int fact, a;
printf("\n Enter any value");
scanf("%d",&a);
fact=factorial (a);
printf("factorial=%d",fact);
getch ();
}
int factorial(int x)
{
int f=1,i;
for(i=x;i>=1;i--)
 f=f*i;
return(f);
}