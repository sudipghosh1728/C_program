#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,r;
float nPr;
printf("Enter the value of n:\n");
scanf("%d",&n);
printf("Enter the value of r:\n");
scanf("%d",&r);
if(n>=r&&n>=0&&r>=0)
{
float nPr = factorial(n)/factorial(n-r);
printf("value of%dp%d=%f\n"n,r,nPr);
}
else
{
printf("Invalid input\n");
}
getch();
}

