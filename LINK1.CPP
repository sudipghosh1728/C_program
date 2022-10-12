#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
void main()
{
struct node *ptr,*name,*head;
ptr=(node*)malloc(sizeof(struct node));
name=(node*)malloc(sizeof(struct node));
printf("Enter the roll no:\n");
scanf("%d",&ptr->data);
printf("Enter the name");
scanf("%s",&name->data);
head=ptr;
ptr->next=name;
name->next=NULL;
printf("%d%s",ptr->data,name->data);
}
