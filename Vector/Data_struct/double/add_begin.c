#include<stdio.h>
#include<stdlib.h>
struct st
	{
	 struct st *prev;
	 int rollno;
	 struct st *next;
	}*headptr;
void add_begin(void);
void print(void);
main()
{
add_begin();
add_begin();
add_begin();
print();
}

void add_begin()
{
struct st *temp;
temp=malloc(sizeof(struct st *));
printf("Enter the num.....\n");
scanf("%d",&(temp->rollno));
  if(headptr==0)
  {
   temp->prev=NULL;
   temp->next=headptr;
   headptr=temp;
  }
  else
  {
   temp->next=headptr;
   temp->prev=NULL;
   headptr->prev=temp;
   headptr=temp;
  }
}
void print()
{
struct st *temp;
temp=headptr;

while(temp->next!=NULL)
temp=temp->next;

while(temp)
{
printf("%d  \n",temp->rollno);
temp=temp->prev;

}

}

