#include<stdio.h>
#include<conio.h>
struct cuboid
{
	int length;
	int breadth;
	int hight;
};
void main()
{
int volume;
clrscr();
cuboid cu1;
printf("enter the length:\n");
scanf("%d",&cu1.length);
printf("enter the breadth:\n");
scanf("%d",&cu1.breadth);
printf("enter the width:\n");
scanf("%d",&cu1.hight);
volume=cu1.length*cu1.breadth*cu1.hight;
printf("volume of cuboid=%d",volume);
getch();
}