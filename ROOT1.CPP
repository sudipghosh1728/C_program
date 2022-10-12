//Tree traversal in C
#include<stdio.h>
#include<stdlib.h>
struct node{
 int item;
 struct node* left;
 struct node* right;
 };
 //inorder traversal
 void inorderTraversal(struct node* root){
  if (root==NULL) return;
  printf("%dx")