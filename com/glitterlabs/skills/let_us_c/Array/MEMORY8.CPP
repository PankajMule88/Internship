#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
 int num[]={23,34,56,78,90,87};
 int i;
 for(i=0;i<=5;i++)
 {
 printf("\naddress=%u",&num[i]);
 printf("element=%d",num[i]);
 getch();
 }
}