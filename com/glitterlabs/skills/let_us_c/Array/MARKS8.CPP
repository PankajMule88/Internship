#include<stdio.h>
#include<conio.h>
void disp(int*);
void main()
{
int i;
int marks[]={55,67,56,45,44,56,78};
for(i=0;i<=6;i++)
  disp(&marks[i]);
}
void disp(int *n)
{
 show(&n);
}