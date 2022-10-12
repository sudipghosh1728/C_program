#include<stdio.h>
#include<conio.h>
void main()
{
int f=1,i,n;
printf("Enter the integer values:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
f=f*i;
printf("Multiplication value =%d",f);
}