#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node*link;
};
struct node*p,*q;
struct node *start = NULL;
void creation()
{
int n;
printf("\nEnter the numbers of node: ");
scanf("%d",&n);
while(n--)
{
p =(struct node*)malloc(sizeof(struct node));
if (p==NULL)
{
printf("\nlist is empty");
exit(0);
}
printf("\nEnter the value of the node:");
scanf("%d",&(p->info));
p->link =NULL;//...(1)
if(start == NULL)
{
start = p;
}
else
{
q = start;
while(q->link!=NULL)
{
q=q->link;//last node's address
}
q->link=p;//p=NULL from(1)
}
}
}
void traverse()
{
int count = 1;
if (start==NULL)
{
printf("\nList is empty");
}
else
{
p = start;
while(p->link!=NULL)
{
printf("%d-->NULL",p->info);
printf("\nTotal no. nodes:%d",count);
}
}
void insertionbeg()
{
struct node *p;
p=(struct node*)malloc(sizeof(struct node));
if (p==NULL)
{
printf("\nList is empty");
exit(0);
}
printf("\nEnter the value of the node to be inserted in the begenning\n");
scanf("%d",&p->info);
if(start==NULL)
{
start=p;
p->link=NULL;
}
else
{
p->link=start;
start=p;
}
}
void insert_end()
{
p=(struct node*)malloc(sizeof(struct node));
if(p==NULL)
{
printf("\nList is empty");
exit(0);
}
printf("\nEnter the value of the node to be inserted at the end\n");
scanf("%d",&p->info);
if(start==NULL)
{
start=p;
p->link=NULL;
}
else
{
q=start;
while(q->link!=NULL)
{
q=q->link;
}
q->link=p;
p->link=NULL;
}
}
void insert_particular()
{
int item,pos,i=0;
p=(struct node*)malloc(sizeof(struct node));
if(p==NULL)
{
printf("\nList IS empty");
exit(0);
}
printf("\nEnter the item to be inserted\n ");
scanf("%d",&item);
printf("\nEnter the position wherethe item is to be inserted\n");
scanf("%d",&pos);
p->info=item;
if(start==NULL)
{
start=p;
p->link=NULL;
}
else
{
q=start;
for(i=0;i<pos-1;i++)
{
q=q->link;
q->link=p;
}
}while(ch!=6)
}