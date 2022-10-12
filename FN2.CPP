#include<stdio.h>
#include<conio.h>
int multiplication(int a,int b);
void main()
{
int x,y,z;
clrscr();
printf ("Enter any two value:\n");
scanf("%d%d",&x,&y);
z=multiplication(x,y);
printf("%d",z);
getch();
}
int multiplication (int a, int b)
{
int c;
c=a*b;
return(c);
}