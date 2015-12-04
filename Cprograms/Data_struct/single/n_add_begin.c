#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct st
 {
	int roolno;
	struct st *next;
};
int print_Node(struct st *);
int add_begin(struct st **);
main()
{

	struct st *headpointer=NULL;
	int n;
	printf("Enter how many links you want\n");
	scanf("%d",&n);
	int k=0;
	for( k=0;k<n;k++)
		add_begin(&headpointer);

	print_Node(headpointer);

}
int add_begin(struct st **ptr)
{
	struct st *temp;

	temp=malloc(sizeof(struct st));
	if(temp==NULL){
		perror("Malloc");
		return;
	}
	printf("Enter Roll No :\n ");
	scanf("%d",&(temp->roolno));
	temp->next=*ptr;
	*ptr=temp;
}

int print_Node(struct st *temp1)
{

	while(temp1)
	{
	printf("Rool No %d \t",temp1->roolno);
		temp1=temp1->next;
	}

	printf("\n");
}

