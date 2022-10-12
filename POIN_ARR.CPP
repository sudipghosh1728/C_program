//pointer of an array.....
#include<stdio.h>
#include<conio.h>
void addition(int *x)
{
int temp;
}
void main()
{
int arr[10],n,i,s=0;
clrscr();
printf("How many numbers do you want to add:\n");
scanf("%d",&n);
printf("Enter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
s=s+arr[i];
printf("sum of numbers : %d\n",s);
getch();
}