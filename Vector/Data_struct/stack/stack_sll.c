#include<stdlib.h>
#include<stdio.h>
struct st
{
	int rollno;
	struct st *next;
};
void push_begin(struct st **ptr)
{
	struct st *temp;
	static int c;
	c++;
	if(c>=6)
	{
		printf("stack is over flow\n");
		return;
	}

	temp=malloc(sizeof(struct st));
	printf("Enter the rollno...\n");
	scanf("%d",&(temp->rollno));

	temp->next=*ptr;
	*ptr=temp;

}
void pop_begin(struct st **ptr)
{
	struct st *temp;

	temp=*ptr;
	if(temp==0)
	{
		printf("stack is empty...\n");
		return;
	}

	*ptr=temp->next;
	free(temp);
}
int count(struct st *ptr)
{
	int c=0;
	while(ptr)
	{
		c++;
		ptr=ptr->next;
	}
	return c;
}

void print(struct st *ptr) 
{
	while(ptr)
	{
		printf("%d   ",ptr->rollno);
		ptr=ptr->next;
	}
}
main()
{
	int c=0,i,k;

	struct st *headptr=0;
	while(1)
	{
	printf("\nEnter the 1)push 2)pop 3)print 4)exit\n");
	scanf("%d",&k);
	if(k==1)
	{
		push_begin(&headptr);
		print(headptr);
	}
	if(k==2)
	{
		pop_begin(&headptr);
		print(headptr);
	}
	if(k==3)
	{
		print(headptr);
	}
	if(k==4)
	{
		c=count(headptr);
		printf("count:%d\n",c);
		exit(0);
	}
	}
}
