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
}
}
