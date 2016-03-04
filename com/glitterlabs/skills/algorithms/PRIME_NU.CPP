//Algorithm for prime numbers
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int num,n, i,j;
printf("Enter the last number you want fro prime number");
scanf("%d",&num);
for (i=2;i<=num;i++)
 {
  for(j=1;j<=i;j++)
  {
     if(i%j==0)
	  n++;
  }
   if(n==2)
   printf(" %d",i);
   n=0;

 }
 getch();
}