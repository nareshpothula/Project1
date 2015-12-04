#include<stdio.h>
#include<stdlib.h>
struct st
	{
	 int rollno;
	char name[11];
	float marks;
	struct st *next;
	};
void add_begin(struct st **);
int print(struct st *);
//int count(headptr);
main()
{
int c;
struct st *headptr=0;
add_begin(&headptr);
add_begin(&headptr);
add_begin(&headptr);
c=print(headptr);
//c=count(headptr);
printf("no. of links is:%d\n",c);
}
void add_begin(struct st **ptr)
{
struct st *temp;
temp=malloc(sizeof(struct st));

printf("Enter the roll no\n");
scanf("%d",&(temp->rollno));
printf("enter the name\n");
scanf("%s",temp->name);
printf("Enter the marks\n");
scanf("%f",&(temp->marks));

temp->next=*ptr;
*ptr=temp;
}
int print(struct st *ptr)
{
int c=0;
   while(ptr)
	{
	c++;
	printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
	ptr=ptr->next;
	}
return c;
}




