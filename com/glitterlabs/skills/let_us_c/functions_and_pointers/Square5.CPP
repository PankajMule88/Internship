#include<stdio.h>
#include<conio.h>
float square(float x);
void main()
{
clrscr();
float a,b;
printf("\n enter any value");
scanf("%f",&a);
b=square(a);
printf("\nsqure of %f is %f",a,b);
getch();
}
float square(float x)
{

return(x*x);

}