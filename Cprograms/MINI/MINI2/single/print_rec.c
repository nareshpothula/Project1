#include<stdio.h>
#include<stdlib.h>
struct st
	{
	 int rollno;
	 char name[22];
	 float marks;
	 struct st *next;

	};
void add_end(struct st **);
void print_rec(struct st *);
main()
{
struct st *headptr=0;
add_end(&headptr);
add_end(&headptr);
add_end(&headptr);
print_rec(headptr);
}
void add_end(struct st **ptr)
{
struct st *temp,*temp1;
temp=malloc(sizeof(struct st));
printf("Enter the rollno\n");
scanf("%d",&(temp->rollno));
printf("Enter the name\n");
scanf("%s",(temp->name));
printf("Enter the marks\n");
scanf("%f",&(temp->marks));

     if(*ptr==NULL)
	{
	  temp->next=*ptr;
	  *ptr=temp;
	}
else
{
temp1=*ptr;
while(temp1->next!=NULL)// check if not shift possition to b
 {
  temp1=temp1->next;
 }
temp1->next=temp;
temp->next=NULL;
 
}

}
void print_rec(struct st *ptr)
{
if(ptr)
 {
   printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
   print_rec(ptr->next);
 }
}


