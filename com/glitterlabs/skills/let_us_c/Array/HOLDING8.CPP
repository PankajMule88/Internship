#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int arr[]={34,45,67,55,43,45,45};
 int *i,*j;
 i=&arr[1];
 j=&arr[5];
 printf("%d %d",j -i,*j -*i);
 getch();
}