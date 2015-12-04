#include<stdlib.h>
#include<stdio.h>
struct st
{
	int rollno;
	struct st *next;
}*t,*t1,*t2;

void middle(struct st **);
void print(struct st *);
void delete();
	int i,j;
main()
{
int c=0;
	struct st  *headptr=0;
	printf("eNTER THE NUM OF NODES\n");
	scanf("%d",&i);
	for(j=0;j<i;j++)
		middle(&headptr);
	t=t1;
	while(1)
	{
		t2=t1;
		t1=t1->next;
		c++;
		if(c==2)
		{
			i--;
			if(i==0)
			break;
			
			delete();
			c=-1;
		}
		
	}
	print(t1);
}
void middle(struct st **ptr)
{
	int ret=0;
	struct st *temp,*temp1;
	temp=malloc(sizeof(struct st));
	printf("Enter the rollno\n");
	scanf("%d",&(temp->rollno));
	printf("at add=%u\n\n\n",temp);

	if((*ptr==NULL)||(temp->rollno < (*ptr)->rollno))
	{
		temp->next=temp;
		t1=*ptr=temp;

	}
	else
	{
		t1=temp1=*ptr;
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
void delete()
{
	t2->next=t1->next;
	printf("at delete=%u\n",t1);
	free(t1);
}

void print(struct st *ptr)
{
	struct st *p1=ptr;
	int i=0;
	while(1)
	{
        	i++;
		printf("%d\t",ptr->rollno);
		ptr=ptr->next;
		printf("\n");
		if(ptr==ptr->next)
		break;
	}
}



