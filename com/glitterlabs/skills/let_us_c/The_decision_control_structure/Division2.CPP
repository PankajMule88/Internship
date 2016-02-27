/*division of student*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int m1,m2,m3,m4,m5,per;
printf("enter the marks of student in each subject out of 100");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
per=(m1+m2+m3+m4+m5)/5;
printf("percentage=%d",per);
	if(per>=60)
				printf("you have got first division");
	else
	{
		if(per>=50)
			printf("you have got second division");
		else
		{
		if(per>=40)
			printf("you have got third division");
			else
			 printf("you are fail");
}
}
getch();
}