#include<stdlib.h>
#include<stdio.h>
struct st
{
	int rollno;
	struct st *next;
};
void enque_begin(struct st **ptr);
void print(struct st *ptr) ;
void deque_begin(struct st **ptr);
main()
{
	int c=0,i;
	struct st *headptr=0;
	char ch;
	do
	{
		enque_begin(&headptr);
		printf("do u want to enter another node>>?\n");
		scanf(" %c",&ch);
	}while(ch=='y');

	c=count(headptr);
	printf("count:%d\n",c);

	//for(i=0;i<3;i++)
	//deque_begin(&headptr);
	print(headptr);

}
void enque_begin(struct st **ptr)
{
	struct st *temp,*temp1;
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
	if(*ptr==0)
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
		temp->next=0;
	}
}
void deque_begin(struct st **ptr)
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
