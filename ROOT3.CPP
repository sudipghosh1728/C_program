#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct bin_tree
{
 int INFO;
 struct node *LEFT, *RIGHT;
};
typeef struct bin_tree node;
node *indert(node *,int);/*Function prototype for inserting a new node*/
void pereorder(node *);/**Function proto type for displaying preorder
traversal path*/
void inorder(node *);/*Function prototype for displaying inorder traversal
path*/
void postorder(node *);/*Function prototype for displayiing postorder
traversal path */
int count = 1; /*Counter for ascertaining left or right  position for the
new node*/
void main()
{
 struct node *root = NULL;
 int element, choice;
 clrscr();
 /*Displaying a menu of choices*/
 while(1)
 {
 clrscr();
 printf("Select an option\n");
 printf("\n1 - Insert");
 printf("\n2 - Preorder");
 printf("\n3 - Inorder");
 printf("\n4 - Postorder");
 printf("\n5 - Exit");
 printf("\n\nEnter your choice:");
 scanf("%d", &choice);
 switch(choice)
 {
 case 1:
 {
 printf("\n\nEnter the node value:");
 scanf("%d",&element);
 root=insert(root,element);/*Calling the insert function for inserting
 a new element into the tree*/
 getch();
 break;
 }
 case 2:
 {
 preorder(root);/*Calling the preorder function*/
 getch();
 break;
 }
 case 3:
 {
 inorder(root);/*Calling the inorder function*/
 getch();
 break;
 }
 case 4:
 {
 postorder(root);/*Calling the postorder function*/
 getch();
 break;
 }
 case 5:
 {
 exit(1);
 break;
 }
 default:
 {
 printf("\nIncorrect choice. Please try again.");
 getch();
 break;
 }
 }
 }
}
node *insert(node *,r, int n)
{
 if(r==NULL)
 {
 r=(node*) malloc (sizeof(node));
 r->LEFT = r->RIGHT = NULL;
 r->INFO = n;
 count=count+1;
 }
 else
 {
 if(count%2==0)
 r->LEFT = insert(r-LEFT, n);
 else
 r->RIGHT = insert(r->RIGHT, n);
 }
 return(r);
}
void preorder(node *r)
{
 if(r!=NULL)
 {
 printf("%d\n",r->INFO);
 preorder(r->LEFT);
 preorder(r->RIGHT);
 }
}
void inorder(node *r)
{
 if(r!=NULL)
 {
 inorder(r->LEFT);
 printf("%d\n",r->INFO);
 inorder(r->RIGHT);
 }
}
void postorder(node *r)
{
 if(r!=NULL)
 {
 postorder(r->LEFT);
 postorder(r->RIGHT);
 printf("%d\n",r->INFO);
 }
}