/*salary calculation*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int yos,sal=0,qul;
char gen;
printf("enter the gender, year of service and qualification(0=G,1=PG):");
scanf("%c %d %d",&gen, &yos, &qul);
if(gen=='M'&& yos>=10 &&qul==1)
sal=15000;
else if((gen=='M' && yos>=10 && qul==0)||(gen=='M'&& yos<10 && qul==1))
sal=10000;
else if(gen=='M'&& yos<10 && qul==0)
sal=7000;
else if(gen=='F'&& yos>=10 && qul==1)
sal=12000;
else if(gen=='F'&& yos>=10 && qul==0)
sal=9000;
else if(gen=='F'&& yos<=10 && qul==1)
sal=10000;
else if(gen=='F'&& yos<10 && qul==0)
sal=6000;
printf("\nsalary of employee=%d",sal);
getch();
}

