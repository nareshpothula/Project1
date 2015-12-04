#include<stdio.h>
#include<stdlib.h>
struct tree
{
	struct tree *left;
	int num;
	struct tree *right;
}*PARENT;

void add_tree(struct tree **ptr,int);
void inorder(struct tree *);
void delete(struct tree **ptr,int n);
struct tree *search(struct tree *ptr,int);

main()
{
	struct tree *headptr=0,*p;
	add_tree(&headptr,20);
	add_tree(&headptr,15);
	add_tree(&headptr,25);
	add_tree(&headptr,22);
	add_tree(&headptr,17);
	add_tree(&headptr,40);

	printf("In order---------------------=");
	inorder(headptr);
	printf("\n");

	p=search(headptr,20);
	if(p==0)
		printf("node is  not present\n");
	else
		printf("node is present...%d\n",p->num);
	delete(&headptr,17);
printf("Hai\n");
	inorder(headptr);
}
struct tree *search(struct tree *ptr,int n)
{
	if(ptr==0)
		return 0;
	else if(ptr->num==n)
		return ptr;
	else if(ptr->num>n)
		return search(ptr->left,n);
	else
		return search(ptr->right,n);
}

void add_tree (struct tree **ptr,int n)
{
	if(*ptr==0)
	{
		(*ptr)=malloc(sizeof(struct tree));
		(*ptr)->num=n;
		(*ptr)->left=(*ptr)->right=0;
	}
	else if((*ptr)->num > n)
	{
		add_tree(&((*ptr)->left),n);
	}
	else
	{
		add_tree (&((*ptr)->right),n);
	}
}
void delete(struct tree **ptr,int n)
{
	struct tree *q,*p,*r;
	q=search(*ptr,n);
	if(q==0)
	{
		printf("node is not present\n");
		return;
	}
	p=PARENT;
	//////////////////////////////////////////
	if((q->left!=NULL)&&(q->right!=NULL))
	{
		r=q->right;
		while(r->left!=NULL)
		{
			p=r;
			r=r->left;
		}
		q->num=r->num;
		q=r;
	}
	/////////////////////////////////////////
	if((q->left==NULL)&&(q->right==NULL))
	{
		if(q=p->left)
		{
			p->left=0;
			free(q);
		}
		else
		{
			p->right=0;
			free(q);
		}
		return;
	}
	///////////////////////////////////////////
	if((q->left!=NULL)&&(q->right==NULL))
	{
		if(p->left==q)
		{
			p->left=q->left;
			free(q);
		}
		else
		{
			p->right=q->right;
			free(q);
		}
		return;
	}
	///////////////////////////////////////////
	if((q->left==NULL)&&(q->right!=NULL))
	{
		if(p->left==q)
		{
			p->left=q->right;
			free(q);
		}
		else
		{
			p->right=q->right;
			free(q);
		}
		return;
	}
}
//////////////////////////////////////////

void inorder(struct tree *ptr)
{
	if(ptr)
	{
		inorder(ptr->left);
		printf("%d\n",ptr->num);
		inorder(ptr->right);
	}
}

