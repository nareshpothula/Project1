#include<stdio.h>
#include<stdlib.h>
struct st
	{
	 int rollno;
	 char name[10];
	 float marks;
	 struct st *next;
	};
void add_end(struct st **);
void print(struct st *);
main()
{
struct st *headptr=0;

add_end(&headptr);
add_end(&headptr);
add_end(&headptr);

print(headptr);
}
void add_end(struct st **ptr)
{
struct st *temp,*temp1;
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
void print(struct st *ptr)
{
int i,j,c=3;
struct st *temp;
for(i=0;i>=c;i--)
{
temp=ptr;
{
 for(j=0;j<c-i-1;j++)
   {
     temp=temp->next;
   }
printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
}
}
}



