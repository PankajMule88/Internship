//Algorithm for Palindrome number
#include<conio.h>
#include<stdio.h>
int main()
{
 clrscr();
 int r,n,reverse=0,temp;
 printf("Enter the number to check:");
 scanf("%d",&n);
 temp=n;
 while(temp !=0)
 {
   r=temp%10;
   reverse=(reverse*10)+r;
   temp=temp/10;
 }
  if(n==reverse)
 printf("The number %d is a palindrome",n );
 else
 printf("the number %d is not a palindrome",n);
 getch();
}