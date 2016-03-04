//Algorithm for Fabonaccy Number. 
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,n,a=0,b=1,c;
 printf("\nEnter the length of series");
 scanf("%d",&n);
 printf("%d %d",a,b);
 for (i=0;i<n;n++)
 {
  c=a+b;
  a=b;
  b=c;
  printf("%d",c);
 }
 getch();

}
