#include<stdio.h>
#include<stdlib.h>
struct st
	{
	 int rollno;
	 struct st *next;
	};
void add_end(struct st **);
void print(struct st *);
static struct st *k;
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
//static struct st *k;
// struct st *k;
temp=malloc(sizeof(struct st));

printf("Enter the rollno....\n");
scanf("%d",&(temp->rollno));

if(*ptr==0)
 {
   temp->next=0;
   *ptr=temp;
    k=temp;
 }
else
 {
    k->next=temp;
    temp->next=0;
    k=temp;
 }
/*
	while(temp1->next!=NULL)
	{
	  temp1=temp1->next;
	}
	
	  temp1->next=temp;
	  temp->next=0;
*/
}
void print(struct st *ptr)
{
while(ptr)
	{
	 printf("%d \n",ptr->rollno);
	 ptr=ptr->next;
	}
}

