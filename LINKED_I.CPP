#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
int data;
struct node*next;
};
void main()
{
struct node *head,*ptr,*f1,*f2,*f3;
clrscr();
f1->data=5;
f2->data=7;
f3->data=9;
head->next=f1;
f1->next=f2;
f2->next=f3;
f3->next=NULL;
ptr=head;
while(ptr!=NULL)
{
printf("%d\t",ptr->data);
ptr=ptr->next;
}
getch();
}