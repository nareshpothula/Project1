#include"header.h"
void add_end(struct st **ptr)
{
static  struct st *temp,*temp1;
temp=malloc(sizeof(struct st));

printf("Enter the rollno....\n");
scanf("%d",&(temp->rollno));
printf("Enter the name....\n");
scanf("%s",(temp->name));
printf("Enter the marks\n");
scanf("%f",&(temp->marks));

if(*ptr==0)
 {
   temp->next=0;
   *ptr=temp;
 }
else
 {
  temp1=*ptr;
	while(temp1->next!=NULL)
	{
	  temp1=temp1->next;
	}
	
	  temp1->next=temp;
	  temp->next=0;
 }
}

