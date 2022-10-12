#include<stdio.h>
#include<conio.h>
int main()
{
int ar[100],n,i;
clrscr();
printf("enter how many elements do you want to enter:\n");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
for(i=0;i<n;i++)
{
ar[i]=(-1)*ar[i];
}
printf("The resultent Array is=\n");
for(i=0;i<n;i++)
printf("%d\t",ar[i]);
getch();
return 0;
}