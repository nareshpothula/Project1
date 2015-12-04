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
main()
{
	struct TREE *headptr=0;
	add_TREE(&headptr,20);
	add_TREE(&headptr,20);
	add_TREE(&headptr,20);
	add_TREE(&headptr,22);
	add_TREE(&headptr,17);
	add_TREE(&headptr,10);
	add_TREE(&headptr,20);
	add_TREE(&headptr,25);
	printf("Inorder...........\n");
	inorder(headptr);
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
	else if((*ptr)->num < n)
	{
		add_TREE (&((*ptr)->right),n);
	}
	else
	{
		add_TREE(&((*ptr)->left),n);
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


















