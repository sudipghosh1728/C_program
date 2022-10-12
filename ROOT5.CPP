#include<stdio.h>
#include<stdlib.h>
struct node
{
	int val;
	struct node *left,*right;
};
struct node* insert(int val)
{
	struct node*node*(struct node*)malloc(sizeof(struct node));
	node->val=val;
	node->left=NULL;
	node->right=NULL;
	return node;
}
void inorder(struct node*root)
{
	if(root!*null)
	{
		inorder(root->left);
		printf("%d",root->val);
		inorder(root->right);
	}
}
int main()
{
	struct node*root*insert(11);
	root->left=insert(12);
	root->right=insert(13);
	inorder(root);
	return 0;
}