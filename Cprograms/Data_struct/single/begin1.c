#include<stdio.h>
#include<stdlib.h>
struct st
	{
		int rollno;
		char name[10];
		float marks;
		struct st *next;
	};
void begin(struct st **);
void print(struct st *);
 main()
{
int i;
struct st *headptr=0;
for(i=0;i<3;i++)
begin(&headptr);
print(headptr);
}

void begin(struct st **ptr)
{
struct st *temp;
temp=malloc(sizeof(struct st));
printf("enter the roolno....\n");
scanf("%d",&(temp->rollno));
printf("enter the name....\n");
scanf("%s",(temp->name));
printf("enter the marks....\n");
scanf("%f",&(temp->marks));
temp->next=*ptr;
*ptr=temp;
}
void print(struct st *ptr)
{
while(ptr)
{
printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
ptr=ptr->next;
}
}
