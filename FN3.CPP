#include<stdio.h>
#include<conio.h>
int fact(int x);
void main()
{
int x;
clrscr();
printf("Enter a number:\n");
scanf("%d",&x);
printf("Result=%d",fact(x));
getch();
}
int fact(int n)
{
if(n==0||n==1)
return(1);
else return(n*fact(n-1));
}