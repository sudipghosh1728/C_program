#include<stdio.h>
#include<conio.h>
void main()
{
int s=0,i,n;
clrscr();
printf("Enter the last number:\n");
scanf("%d",&n);
for(i=1;i<=n;i=i+2)
s=s+i;
printf("The resultent value is=%d",s);
getch();
}