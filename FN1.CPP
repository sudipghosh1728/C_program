#include<stdio.h>
#include<conio.h>
float squre (int r);
void main()
{
int a;
float z;
clrscr();
printf("enter the value:\n");
scanf("%d",&a);
z=squre(a);
printf("Result=%f",z);
getch();
}
float squre(int r)
{
float c;
c=3.14*r*r;
return(c);
}
