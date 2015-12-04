#include<stdio.h>
#include<stdlib.h>
struct TREE
{
	struct TREE *left;
	int num;
	struct TREE *right;
};

void add_TREE(struct TREE **ptr,int);
void inorder(struct TREE *);
void preorder(struct TREE *);
void postorder(struct TREE *);
main()
{
	struct TREE *headptr=0;
	add_TREE(&headptr,20);
	add_TREE(&headptr,15);
	add_TREE(&headptr,25);
	add_TREE(&headptr,22);
	add_TREE(&headptr,17);
	add_TREE(&headptr,10);
	printf("In order---------------------=");
	inorder(headptr);
	printf("\n");
	printf("pre order--------------------=");
	preorder(headptr);
	printf("\n");
	printf("post order-------------------=");
	postorder(headptr);
	printf("\n");
}
void add_TREE (struct TREE **ptr,int n)
{
	if(*ptr==0)
	{
		(*ptr)=malloc(sizeof(struct TREE));
		(*ptr)->num=n;
		(*ptr)->left=(*ptr)->right=0;
	}
	else if((*ptr)->num > n)
	{
		add_TREE(&((*ptr)->left),n);
	}
	else
	{
		add_TREE (&((*ptr)->right),n);
	}
}

void inorder(struct TREE *ptr)
{
	if(ptr)
	{
		inorder(ptr->left);
		printf("%d\t",ptr->num);
		inorder(ptr->right);
	}

}
void preorder(struct TREE *ptr)
{
	if(ptr)
	{
		printf("%d\t",ptr->num);
		preorder(ptr->left);
		preorder(ptr->right);
	}
}
void postorder(struct TREE *ptr)
{
	if(ptr)
	{
		postorder(ptr->left);
		postorder(ptr->right);
		printf("%d\t",ptr->num);
	}
}

















