#include<stdio.h>
#include<stdlib.h>

struct st
{
	int rollno;
	struct st *next;
};
void add_end(struct st **);
void print_node(struct st *);

main()
{
	struct st *headptr=0;
	int n,k;
	printf("Enter how many nodes you want\n");
	scanf("%d",&n);
	for(k=0;k<n;k++)
		add_end(&headptr);

	print_node(headptr);
}

void add_end(struct st **ptr)
{
	struct st *temp,*temp1;

	temp=malloc(sizeof(struct st));
	if(temp==NULL)
	{
		perror("Malloc");
		return;
	}
	printf("enter Roll No\n");
	scanf("%d",&(temp->rollno));


	if(*ptr==NULL)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		temp1=*ptr;
		while(temp1->next)
			temp1=temp1->next;

		temp1->next=temp;
		temp->next=NULL;
	}
}
void  print_node(struct st *ptr)
{
	while(ptr)
	{
		printf("%d\n",ptr->rollno);
		ptr=ptr->next;// first print c b a
	}
}
