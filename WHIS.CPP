#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,n,s=0;
clrscr();
printf("Enter the last number:\n");
scanf("%d",&n);
while(i<=n)
{
s=s+i;
i++;
}
printf("s=%d",s);
getch();
}