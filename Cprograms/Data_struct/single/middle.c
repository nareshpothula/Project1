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
int search(struct st *p,int n)
{
	struct st *temp=p;
	while(temp)
	{	
		if(temp->rollno==n)
		temp=temp->next;
			return 1;
	}
return 0;

}
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
int ret=0;
struct st *temp,*temp1;
temp=malloc(sizeof(struct st));
a:
printf("Enter the rollno\n");
if(ret==1)
{

printf("Hello Re enter the rollno\n");
}
scanf("%d",&(temp->rollno));
ret=search(*ptr,temp->rollno);
printf("ret=%d\n",ret);
if(ret==1)
goto a;
else
{
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

}
void print(struct st *ptr)
{
while(ptr)
  {
   printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
   ptr=ptr->next;
  }
}



