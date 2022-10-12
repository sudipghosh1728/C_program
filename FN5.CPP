#include<stdio.h>
#include<conio.h>
int gcd (int x,int y);
void main()
{
int x,y;
clrscr();
printf("Enter the value of x:\n");
scanf("%d",&x);
printf("result=%d",gcd(x));
}
