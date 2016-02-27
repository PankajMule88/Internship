/* execution of a loop an unknown number of times*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char another;
int num;
do
{
printf("enter a number");
scanf("%d",&num);
printf("square of %d=%d",num,num*num);
printf("\n want to enter another number y/n");
scanf("%c",&another);
}while(another=='y');
getch();
}