#include<stdio.h>
#include<stdlib.h>
struct st
	{
	 struct st *prev;
	 int rollno;
	  char name[11];
	 struct st *next;
	}*hp;
void add_end();
void print();
main()
{
add_end();
add_end();
add_end();
print();
}
void add_end()
{
struct st *temp,*temp1;
temp=malloc(sizeof(struct st ));
printf("Enter the rollno....\n");
scanf("%d",&(temp->rollno));
printf("enter the name....\n");
scanf("%s",temp->name);

if(hp==NULL)
{
temp->prev=hp;
temp->next=hp;
hp=temp;
}
else
{
temp1=hp;
while(temp1->next!=NULL)
temp1=temp1->next;

temp1->next=temp;
temp->prev=temp1;
//temp->next=temp1->next;
temp->next=NULL;

}
}
void print()
{
printf("hello=\n");
struct st *temp;
temp=hp;
while(temp->next)
temp=temp->next;

while(temp)
{
printf("%d %s\n",temp->rollno,temp->name);
temp=temp->prev;
}
}
