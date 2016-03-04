//Assesing array in different ways
#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int num[]={23,45,56,78,54,45};
 int i;
 for (i=0;i<=5;i++)
 printf("address=%u",&num[i]);
 printf("element=%d %d",num[i],*(num+i));
 getch();
}


