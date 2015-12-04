#include"header.h"
void add_middle(struct st **ptr)
{
static struct st *temp,*temp1;
temp=malloc(sizeof(struct st));

printf("Enter the rollno\n");
scanf("%d",&(temp->rollno));
printf("Enter the name\n");
scanf("%s",(temp->name));
printf("Enter the marks\n");
scanf("%f",&(temp->marks));

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
