#include<stdlib.h>
#include<stdio.h>
struct tree
{
	int num;
	struct tree *left;
	struct tree *right;
}*PARENT;


int flag=0,l=3,r=3;
struct tree *Temp,*temp1;
add_tree(struct tree **ptr,int n)
{
	while(1)
	{
		if(*ptr==NULL)
		{
			flag++;
			(*ptr)=malloc(sizeof(struct tree));
			(*ptr)->num=n;
			(*ptr)->left=(*ptr)->right=NULL;
			if (flag==1)
				Temp=(*ptr);
			break;
		}
		else if((*ptr)->num > n)
		{
			temp1=*ptr;
			(*ptr)=((*ptr)->left);
			l=1;r=0;
		}
		else
		{
			temp1=*ptr;
			(*ptr)=((*ptr)->right);
			l=0;r=1;
		}
	}
	if(r==1)
		temp1->right=(*ptr);	
	if(l==1)
		temp1->left=(*ptr);	
	(*ptr)=Temp;
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
	while(ptr)
	{
		if(ptr->num==n)
		{
			printf("Node is present%d\n",ptr->num);
			return;
		}
		else if(ptr->num > n)
			ptr=(ptr->left);
		else
			ptr=(ptr->right);
	}
	printf("Node is not present\n");

}

main()
{
	int k;
	struct tree *hp=0;
	add_tree(&hp,110);
	add_tree(&hp,120);
	add_tree(&hp,112);
	add_tree(&hp,20);
	add_tree(&hp,10);
	add_tree(&hp,144);
	add_tree(&hp,150);
	add_tree(&hp,30);
	add_tree(&hp,5);
	add_tree(&hp,210);
	add_tree(&hp,40);
	print_tree(hp);
	printf("\n");
	printf("Enter search element\n");
	scanf("%d",&k);
	search(hp,k);
}
