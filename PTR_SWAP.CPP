#include<stdio.h>
#include<conio.h>
void swap(int *x , int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}
int main()
{
int a,b;
clrscr();
printf("Enter the values of a,b\n");
scanf("%d%d",&a,&b);
printf("\nBefore swaping=%d\t%d",a,b);
swap(&a,&b);
printf("\nAfter swaping a:%d\n After swaping b:%d\n",a,b);
getch();

return 0;
}
