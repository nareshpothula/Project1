#include<stdio.h>
#include<stdlib.h>
struct TREE
{
	struct TREE *left;
	int num;
	struct TREE *right;
}*PARENT;

void add_TREE(struct TREE **ptr,int);
void inorder(struct TREE *);
struct TREE *search(struct TREE *ptr,int n);
main()
{
	struct TREE *headptr=0,*p;
	add_TREE(&headptr,20);
	add_TREE(&headptr,20);
	add_TREE(&headptr,20);
	add_TREE(&headptr,22);
	add_TREE(&headptr,17);
	add_TREE(&headptr,10);
	add_TREE(&headptr,20);
	add_TREE(&headptr,25);
	inorder(headptr);
	p=search(headptr,20);
	if(p==0)
		printf("node is  not present\n");
	else
		printf("node is present...%u\n",p);
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
struct TREE *search(struct TREE *ptr,int n)
{
	if(ptr==0)
		return;
	elseif(ptr->num==n)
		return ptr;
	else if(ptr->num>n)
		PARENT =ptr;
	return (search(ptr->left,n));
	else
		PARENT=ptr;
	else
		return(search(ptr->right,n));
}














