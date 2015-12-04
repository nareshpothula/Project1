#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int SIZE =10;
 
struct st
	{
	 int rollno;
	 struct st *next;
	};
void rev_link(struct st **ptr);
void print_link(struct st *ptr);
void add_end(struct st **ptr);
int i=0,j=0;
main()
{
struct st *headptr=0;

add_end(&headptr);
add_end(&headptr);
add_end(&headptr);
add_end(&headptr);
print_link(headptr);
printf("\n..........\n");
rev_link(&headptr);
}
void add_end(struct st **ptr)
{
struct st *temp,*temp1;
temp=malloc(sizeof(struct st));

printf("Enter the roll no...\n");
scanf("%d",&(temp->rollno));
if(*ptr==0)
{
temp->next=*ptr;
*ptr=temp;
}
else
{
temp1=*ptr;
while(temp1->next)
temp1=temp1->next;
temp1->next=temp;
temp->next=0;
}
}
void rev_link(struct st **ptr)
{
struct st *p[SIZE],*temp;
int c=0;
temp=*ptr;
for(i=0;temp;i++)
{
p[i]=temp;
temp=temp->next;
}

p[0]->next=NULL;
for(i=1;i<SIZE;i++)
	p[i]->next = p[i-1];

*ptr=p[c-1];
temp=*ptr;

while(temp)
{
printf("%d \n",temp->rollno);
temp=temp->next;
}

}

void print_link(struct st *ptr)
{
struct st *temp;
int c=0;
temp=ptr;
while(temp)
{
printf("%d \n",temp->rollno);
temp=temp->next;
c++;
}
SIZE=c;
}


