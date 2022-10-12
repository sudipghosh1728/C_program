#include<stdio.h>
#include<conio.h>
struct student
{
	int sub1;
	int sub2;
	int sub3;
};
void main()
{
struct student s[10];
int i,total=0;
clrscr();
for(i=0;i<=2;i++)
{
printf("enter the marks of three subjects:\n");
scanf("%d%d%d",&s[i].sub1,&s[i].sub2,&s[i].sub3);
total=s[i].sub1+s[i].sub2+s[i].sub3;
printf("total marks of student=%d:\n",i,total);
}
getch();
}
