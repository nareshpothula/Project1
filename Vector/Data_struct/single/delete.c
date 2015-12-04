#include<stdlib.h>
#include<stdio.h>
struct st
{
	int rollno;
	struct st *next;
};

void middle(struct st **);
void print(struct st *);
void delete(struct st **);
main()
{
	struct st  *headptr=0;
	middle(&headptr);
	middle(&headptr);
	middle(&headptr);
	print(headptr);
	delete(&headptr);
	print(headptr);
}
void middle(struct st **ptr)
{
	struct st *temp,*temp1;
	temp=malloc(sizeof(struct st));

	printf("Enter the rollno\n");
	scanf("%d",&(temp->rollno));

	if((*ptr==NULL)||(temp->rollno < (*ptr)->rollno))
	{
		temp->next=*ptr;
		*ptr=temp;
	}

	else
	{
		temp1=*ptr;
		while(temp1)
		{
			if(temp1->next==NULL)		
			{
				temp->next=temp1->next;
				temp1->next=temp;
				break;
			}

			if(temp1->next->rollno > temp->rollno)
			{
				temp->next=temp1->next;
				temp1->next=temp;
				break;
			}

			temp1=temp1->next;

		}
	}


}
void print(struct st *ptr)
{
	while(ptr)
	{
		printf("%d \n",ptr->rollno);
		ptr=ptr->next;
	}
}
void delete(struct st **ptr) 
{
	int n;
	struct st *temp,*temp1;
	printf("Enter the number.....\n");
	scanf("%d",&n);
	temp=*ptr;
	while(temp)
	{
		if(temp->rollno==n)
		{
			if(*ptr==temp) 
			{
				*ptr=temp->next;
				free(temp);
				return;
			}
			else
			{
				temp1->next=temp->next;
				free(temp);
				return;
			}
		}

		temp1=temp;
		temp=temp->next;
	}
	printf("Node is not present\nEnter the correct num\n");
}
