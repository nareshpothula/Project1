#include<stdio.h>
#include<stdlib.h>
struct TREE
{
struct TREE *left;
int num;
struct TREE *right;
};
struct TREE * search(struct TREE  *ptr,int );
void add_TREE(struct TREE **ptr,int);
void inorder(struct TREE *);
main()
{
struct TREE *p,*PARENT;
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
p=search(headptr,20);

if(p==0)
	printf("node is  not present\n");
else
printf("node is present.....%u\n",p);
}
struct TREE * search(struct TREE *ptr,int n )
//PARENT=p;
{

	if(ptr==NULL)
		return 0;
	else if(ptr->num==n)
		return ptr;
	else if(ptr->num>n)
	{
		PARENT=ptr;
	return (search(ptr->left,n));
	}	
	else
	{
		PARENT=ptr;
		return (search(ptr->right,n));
	}
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
















