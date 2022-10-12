#include<stdio.h>
#include<conio.h>
int fact(int x);
void main()
{
int a,S;
printf("enter the value of a:\n");
scanf("%d";&a);
S=fact(a);
}
int fact(int x)
	{
	int f=1,i;
	for(i=x;i>0;i--)
	f=f*i;
return (f);
}