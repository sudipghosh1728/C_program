#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 5
int queue_arr[max];
int rear=-1;
int font=-1;
void insert()
{
int added_item;
if(font==0 && rear==max-1)
printf("queue is overflow");
else if(font==-1 && rear==-1)
{
font=rear=0;
printf("input the element added in quque:");
scanf("%d",&added_item);
queue_arr[rear]=added_item;
}
else
{
rear=rear+1;
printf("input the element added in quque:");
scanf("%d",&added_item);
queue_arr[rear]=added_item;
}
}
void deletequeue()
{
if(font==rear==NULL)
{
printf("queueis underflow");
exit(0);
}
else
{
printf("element delete in queueis:%d\n",queue_arr[font]);
font=font+1;
}
}
void display()
{
int i;
if(font==rear==NULL)
{
printf("queue is empty");
}
else
{
printf("queue is:\n");
for(i=font;i<=rear;i++)
printf("%d",queue_arr[i]);
printf("\n");
}
}
main()
{
int ch,no;
do
{
printf("\n....MENU.....\n");
printf("1.insert\n");
printf("2.delete\n");
printf("3.display\n");
printf("4.exit\n");
printf("enter your choice");
scanf("%d",ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
deletequeue();
break;
case 3:
display();
break;
case 4:
//printf("exit");
exit(0);
}
}while(ch!=4);
getch();
return 0;
}