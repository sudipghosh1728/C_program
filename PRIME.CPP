#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,flag=1;
clrscr;
printf("Enter the number : \t");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
flag=1;
break;
}
printf("The number %d is a prime number.\n",n);
break;
else
flag=0;
printf("The number %d is not a prime number.\n",n);
}
getch;
}