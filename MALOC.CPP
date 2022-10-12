#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int*ptr;
clrscr();
ptr=(int*)malloc(sizeof(int));
printf("enter an element:\n");
scanf("%d",&*ptr);
printf("The given element is=%d",*ptr);
getch();
}