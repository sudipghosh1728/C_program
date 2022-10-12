#include<stdio.h>
#include<conio.h>
int sum_nat(int x);
void main()
{
int x;
clrscr();
printf("Enter the last no:\n");
scanf("%d",&x);
printf("Result=%d",sum_nat(x));
getch();
}
int sum_nat(int n)
{
if(n==0||n==1)
return(1);
else
return(n+sum_nat(n-1));
}