#include<stdio.h>
#include<conio.h>
void main()
{
float hra, da,gs,bs;
printf("enter basic salary");
scanf("%f",&bs);
if(bs<1500)
{
hra=bs*10/100;
da=bs*90/100;
}
else
{
hra=200;
da=bs*98/100;
}
 gs=hra+da+bs;
 printf("Gross salary Rs=%f",gs);
 getch();
 }