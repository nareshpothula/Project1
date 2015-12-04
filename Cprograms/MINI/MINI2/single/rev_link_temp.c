#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct st
	{
	 int rollno;
 	 char name[19];
	 struct st *next;
	};
void rev_link(struct st **ptr);
void print_link(struct st *ptr);
void add_begin(struct st **ptr);
int i=0,j=0;
main()
{
struct st *headptr=0;

add_begin(&headptr);
add_begin(&headptr);
add_begin(&headptr);
add_begin(&headptr);
print_link(headptr);
rev_link(&headptr);
//print_link(headptr);
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

void rev_link(struct st **ptr)
{
struct st *p[10],*temp;
int c=0;
temp=*ptr;
//p[i]=malloc(sizeof(struct st* ));
// copy into an array using  array of st pointer
for(i=0;temp;i++)
{
c++;
//p[i]=malloc(sizeof(struct st* ));
p[i]=temp;
temp=temp->next;
}
//p[i]->next=NULL;
//swaping nodes
/*for(i=c-1,j=0;i>j;i--,j++)
{
p[i]->next=p[j];
if(!j)
p[j]->next= NULL;
*/
/*temp=p[i];
p[i]=p[j];
p[j]=temp;
*/
p[0]= NULL;
for(i=1;i<c;i++)
	p[i]->next = p[i-1];

*ptr=p[c-1];
temp=*ptr;

while(temp)
{printf("%d %s\n",temp->rollno,temp->name);
temp=temp->next;
}
//for(i=0;i<c;i++)
//printf("%d %s\n",p[i]->rollno,p[i]->name);
//p[j]=p[i]->next;
//*ptr=p[4];

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


