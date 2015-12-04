#include<stdio.h>
#include<stdlib.h>
struct st
{
	struct st *prev;
	int rollno;
	struct st *next;
};
void add_middle(struct st **);
void print(struct st* );
main()
{
	system("history");
	struct st *hp=0;
	add_middle((&hp));
	add_middle((&hp));
	add_middle((&hp));
	add_middle((&hp));
	add_middle((&hp));
	print(hp);
}
void add_middle(struct st **ptr)
{
	struct st *temp,*temp1;
	temp=malloc(sizeof(struct st ));
	printf("Enter the rollno....\n");
	scanf("%d",&(temp->rollno));

	if(((*ptr)==NULL)||((*ptr)->rollno >= temp->rollno))
	{
		if(*ptr==NULL)
		{
			temp->prev=NULL;
			temp->next=*ptr;
			*ptr=temp;
		}
		else
		{
			temp1=*ptr;
			temp1->prev=temp;	
			temp->prev=NULL;
			temp->next=*ptr;
			*ptr=temp;
		}	
	}
	else
	{
		temp1=*ptr;
		while(temp1)
		{
			if(temp1->next==NULL)
			{
				temp1->next=temp;
				temp->next=NULL;
				temp->prev=temp1;
				break;
			}
			if(temp1->rollno <= temp->rollno && temp1->next->rollno >= temp->rollno)
			{
				temp->prev=temp1;
				temp->next=temp1->next;
				temp1->next->prev=temp;
				temp1->next=temp;
				break;
			}
			temp1=temp1->next;
		}
	}
}
void print(struct st *ptr)
{
	printf("hello=\n");
	struct st *temp;
	temp=ptr;
	while(temp)
	{
		printf("%d\n",temp->rollno);
		temp=temp->next;
	}
}
