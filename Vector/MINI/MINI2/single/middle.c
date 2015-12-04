#include<stdlib.h>
#include<stdio.h>
struct st
	{
	 int rollno;
	 char name [10];
 	 float marks;
	 struct st *next;
	};

void middle(struct st **);
void print(struct st *);
main()
{
struct st  *headptr=0;
middle(&headptr);
middle(&headptr);
middle(&headptr);
print(headptr);
}
void middle(struct st **ptr)
{
struct st *temp,*temp1;
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
void print(struct st *ptr)
{
while(ptr)
  {
   printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
   ptr=ptr->next;
  }
}



