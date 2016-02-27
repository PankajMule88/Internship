#include<stdio.h>
#include<conio.h>
int calsum(int a,int b,int c);
void main()
{
clrscr();
int a,b,c,sum;
printf("\nEnter any three numbers");
scanf("%d %d %d ",&a,&b,&c);
sum=calsum(a,b,c);
printf("\nsum=d",sum);
getch();
}
int calsum(int a,int b,int c)
{
int d;
d=a+b+c;
return(d);
getch();
}

