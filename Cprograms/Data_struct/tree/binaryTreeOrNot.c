#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct node
{
	int data;
	struct node* left;
	struct node* right;
};

void inorder(struct node *ptr)
{
        if(ptr)
        {
                inorder(ptr->left);
                printf("%d\t",ptr->data);
                inorder(ptr->right);

        }
}






int isBSTUtil(struct node* node, int min, int max);

/* Returns true if the given tree is a binary search tree 
   (efficient version). */
int isBST(struct node* node) 
{ 
	return(isBSTUtil(node, INT_MIN, INT_MAX)); 
} 

/* Returns true if the given tree is a BST and its 
   values are >= min and <= max. */
int isBSTUtil(struct node* node, int min, int max) 
{ 

	/* an empty tree is BST */
	if (node==NULL) 
		return 1;

		printf("Inside data MIN=%d > node->data=%d  MAX=%d < node->data=%d\n",min,node->data,max,node->data);
	/* false if this node violates the min/max constraint */
	if (node->data < min || node->data > max) 
	{
		printf("Inside data MIN=%d MAX=%d\n",min,max);
		return 0; 

	}	
	/* otherwise check the subtrees recursively, 
	   tightening the min or max constraint */
	return
		isBSTUtil(node->left, min, node->data-1) && // Allow only distinct values
		isBSTUtil(node->right, node->data+1, max); // Allow only distinct values
} 

/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* newNode(int data)
{
	struct node* node = (struct node*)
		malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
//printf("Data==> %d node->left=%p node->right=%p\n",node->data,node->left,node->right);
	return(node);
}

/* Driver program to test above functions*/
int main()
{
	struct node *root = newNode(4);
	printf("Node->Root=%p\n",root);
	root->left	 = newNode(2);
	printf("Node->left=%p\n",root->left);
	root->right	 = newNode(5);
	printf("Node->right=%p\n",root->right);
	root->left->left = newNode(1);
	printf("Node->left->left=%p\n",root->left->left);
	root->left->right = newNode(3); 
	printf("Node->left->right=%p\n",root->left->right);
	
 	inorder(root);
	if(isBST(root))
		printf("Is BST");
	else
		printf("Not a BST");

	getchar();
	return 0;
} 

