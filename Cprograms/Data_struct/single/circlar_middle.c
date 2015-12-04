#include<stdlib.h>
#include<stdio.h>
struct st
{
	int rollno;
	struct st *next;
};

void middle(struct st **);
void print(struct st *);
int i;
main()
{
	int j;
	struct st  *headptr=0;
	printf("eNTER THE NUM OF NODES\n");
	scanf("%d",&i);
	for(j=0;j<i;j++)
		middle(&headptr);
	print(headptr);
}
void middle(struct st **ptr)
{
	int ret=0;
	struct st *temp,*temp1;
	temp=malloc(sizeof(struct st));
	printf("Enter the rollno\n");
	scanf("%d",&(temp->rollno));

	if((*ptr==NULL)||(temp->rollno < (*ptr)->rollno))
	{
		temp->next=temp;
		*ptr=temp;

	}
	else
	{
		temp1=*ptr;
		while(temp1)
		{
			if(temp1->next==*ptr)		
			{
				temp->next=temp1->next;
				temp1->next=temp;
				break;
			}

			if((temp1->next->rollno > temp->rollno)&&(temp1->rollno < temp->rollno))
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
        	i--;
		printf("%d\t",ptr->rollno);
		ptr=ptr->next;
		if(i==0)
		break;
	}

printf("\n");
}



