#include<stdlib.h>
#include<stdio.h>
struct tree
{
	struct tree *left;
	int num;
	struct tree *right;
}*PARENT;

add_tree(struct tree **ptr,int n)
{
	if(*ptr==0)
	{
		(*ptr)=malloc(sizeof(struct tree));
		(*ptr)->num=n;
		(*ptr)->left=(*ptr)->right=0;
	}
	else if((*ptr)->num > n)
		return add_tree((&(*ptr)->left),n);
	else
		return add_tree((&(*ptr)->right),n);
}

void print_tree(struct tree *ptr)
{
	if(ptr)
	{
		print_tree(ptr->left);
		printf("%d\t",ptr->num);
		print_tree(ptr->right);
	}
}

search(struct tree *ptr,int n)
{
	if(ptr==0)
		printf("Node is not present\n");
	else if(ptr->num==n)
		printf("Node is present%d\n",ptr->num);
	else if(ptr->num > n)
		return search(ptr->left,n);
	else
		return search(ptr->right,n);
}

main()
{
	int k;
	struct tree *hp=0;
	add_tree(&hp,110);
	add_tree(&hp,120);
	add_tree(&hp,210);
	add_tree(&hp,30);
	add_tree(&hp,5);
	add_tree(&hp,40);
	print_tree(hp);
	printf("\n");
	printf("Enter search element\n");
	scanf("%d",&k);
	search(hp,k);
}
