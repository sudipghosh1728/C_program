#include<stdio.h>
#include<conio.h>
int sum(int a, int b);
void main()
{
int x,y,z;
clrscr();
printf("Enter the value of any two numbers:\n");
scanf("%d%d",&x,&y);
z=sum(x,y);
printf("%d",z);
getch();
}
int sum (int a, int b)
{
int c;
c=a+b;
return(c);
}
