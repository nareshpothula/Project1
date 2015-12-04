#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct st
	{
	 int rollno;
 	 char name[19];
	 struct st *next;
	};
void print_link(struct st *ptr);
void add_begin(struct st **ptr);
void reverse_link(struct st **);
int i=0;
main()
{
struct st *headptr=0;

add_begin(&headptr);
add_begin(&headptr);
add_begin(&headptr);
print_link(headptr);
reverse_link(&headptr);
print_link(headptr);
}
void add_begin(struct st **ptr)
{
struct st *temp;
temp=malloc(sizeof(struct st));

printf("Enter the roll no...\n");
scanf("%d",&(temp->rollno));
printf("Enter the name...\n");
scanf("%s",(temp->name));

temp->next=*ptr;
*ptr=temp;
}
void print_link(struct st *ptr)
{
struct st *temp;
temp=ptr;
while(temp)
{
printf("%d %s\n",temp->rollno,temp->name);
temp=temp->next;
}
}

void reverse_link(struct st **ptr)
{
int c=3,i=0;
struct st *temp,**p;
temp=*ptr;
p=malloc(c*4);

        while(temp)
        {
        p[i++]=temp;
        temp=temp->next;
        }

        p[0]->next=NULL;
        for(i=1;i<c;i++)
        p[i]->next=p[i-1];

*ptr=p[c-1];
}

