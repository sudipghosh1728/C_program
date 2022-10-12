#include<stdio.h>
#include<conio.h>
int fibonacy(int);
int main()
{
int n,i;
clrscr();
printf("Enter Total terms:\n");
scanf("%d",&n);
printf("Fibonacy series terms are:\n");
for(i=0;i<n;i++)
{
printf("%d ",fibonacy(i));
}
getch();
return 0;
}
int fibonacy(int n)
{
if(n==0||n==1)
return n;
else
return(fibonacy(n-1)+fibonacy(n-2));
}
