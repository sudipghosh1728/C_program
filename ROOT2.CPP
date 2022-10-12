/*Implimentation of a binary tree*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct bin_tree
{
 int INFO;
 struct node *LEFT, *RIGHT;
};
typedef struct bin_tree n
ode;
node *insert(node *,int); /*Function prototype for intersting a new node */
void display (node *); /*Function prototype for displaying the tree nodes*/
int count = 1; /*Counter for accelerating left or right position for the
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
 printf("\n2 - Display");
 printf("\n3 - Exit");
 printf("\n\nEnter your choice: ");
 scanf("%d", &choice);
 switch(choice)
 {
 case 1:
 {
 printf("\n\Enter the node value:");
 scanf("%d",&element);
 root = insert(root,element); /*Calling the interst function for inserting a new element int the tree*/
 getch();
 break;
 }
 case 2:
 {
 display(root); /*Calling the display function for printing the node values*/
 getch();
 break;
 }
 case 3:
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
node *insert(node *r, int n)
{
 if(r==NULL)
 {
 r=(node*) malloc (sizeof (node));
 r->LEFT = r->RIGHT = NULL;
 r->INFO = n;
 count=count+1;
 }
 else
 {
 if(count%2==0)
 r->LEFT = insert(r->LEFT,n);
 else
 r->RIGHT = insert(r->RIGHT, n);
 }
 return(r);
 }
 void display(node * r)
 {
 if(r->LEFT!=NULL)
 display(r->LEFT);
 printf("%d\n",r->INFO);
 if(r->RIGHT!=NULL)
 display(r->RIGHT);
}








