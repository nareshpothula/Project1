#include<stdlib.h>
#include<stdio.h>
struct st
{
	int rollno;
	struct st *next;
};

void middle(struct st **);
void repeat(struct st *);
void print(struct st *);
main()
{
	int n,i=0;
	struct st  *headptr=0;
	printf("How many links do u want....:\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
		middle(&headptr);
	printf("Before....:\n");
	print(headptr);
	printf("After....:\n");
	repeat(headptr);
	print(headptr);

}
void repeat (struct st *ptr)
{
	struct st *temp,*temp1;
	temp=ptr;
	while(temp->next)
	{
		temp1=temp->next;
		if(temp->rollno==temp1->rollno)
		{
			temp->next=temp1->next;
			free(temp1);
		}
		else
			temp=temp->next;
	}
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
		printf("%d    ",ptr->rollno);
		ptr=ptr->next;
	}
	printf("\n\n");
}



