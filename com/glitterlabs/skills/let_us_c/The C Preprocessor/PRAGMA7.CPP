#include<stdio.h>
#include<conio.h>
void fun1();
void fun2();
#pragma startup fun1
#pragma esit fun2
void main()
{
 printf("\n inside main");
}
void fun1()
{
 printf("\n inside fun1");
}
void fun2()
{
 printf("\n inside fun2");
}