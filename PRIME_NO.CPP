#include<stdio.h>
#include<conio.h>
void main()
{
int no,i,flag=0;
printf("Enter the number : \t");
scanf("%d",&no);
for(i=2;i<no;i++)
{
if(no%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("The no%d is a prime number.\n",no);
else
printf("The no%d is not a prime number.\n",no);
getch();
}