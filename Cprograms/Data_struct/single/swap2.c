#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct st
	{
	 int rollno;
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
printf("\n..........\n");
rev_link(&headptr);
//print_link(headptr);
}
void add_begin(struct st **ptr)
{
struct st *temp;
temp=malloc(sizeof(struct st));

printf("Enter the roll no...\n");
scanf("%d",&(temp->rollno));

temp->next=*ptr;
*ptr=temp;
}

void rev_link(struct st **ptr)
{
struct st **p,*temp;
int c=0,i,j;
{
for(i=0;i<c;i++)
	{
	temp=*ptr;
	 for(j=0;j<c-i-1;j++)
	temp=temp->next;
	printf("%d  ",temp->rollno);
	}
}








temp=*ptr;
for(i=0;temp;i++)
{
c++;
//p[i]=malloc(sizeof(struct st* ));
p[i]=temp;
temp=temp->next;
}
p[0]= NULL;
for(i=1;i<c;i++)
	p[i]->next = p[i-1];

*ptr=p[c-1];
temp=*ptr;

while(temp)
{
printf("%d \n",temp->rollno);
temp=temp->next;
}
printf("%d \n",temp->rollno);
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
printf("%d \n",temp->rollno);
temp=temp->next;
}
}


