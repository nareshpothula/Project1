#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct st
	{
	 int rollno;
	 char name[10];
	 float marks;
	 struct st *next;// holds the next node starting adderess
	};
void add_begin(struct st **);// hear we are passing add of headptr
void print(struct st *);// hear we pass add or ptr only
void reverse_data(struct st **);
main()
{

struct st *headptr=0,s;
printf("structure size: %d\n",sizeof(s));

add_begin(&headptr);
add_begin(&headptr);
add_begin(&headptr);
add_begin(&headptr);
add_begin(&headptr);
print(headptr);
reverse_data(&headptr);
printf("\nafter reversing the data\n");
print(headptr);
}
void add_begin(struct st **ptr)// Here  catching  0
{
struct st *temp;
temp=malloc(sizeof(struct st));// DMA

printf("Enter the rollno....\n");
scanf("%d",&(temp->rollno));
printf("Enter the name....\n");
scanf("%s",(temp->name));
printf("Enter the marks\n");
scanf("%f",&(temp->marks));

temp->next=*ptr;//now *ptr =0 it assigned to nextmeans(end of A and so on...)
*ptr=temp;// now *ptr become B
}
void print(struct st *ptr)
{
while(ptr)
	{
	 printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
	 ptr=ptr->next;// first print c b a
	}
}
void reverse_data(struct st **ptr)
{
int i=0,j=0,c=5;
struct st *p,*p1,*temp;
p=*ptr;
temp=malloc(sizeof(struct st));
for(i=0;i<c/2;i++)
  {
	p1=*ptr;
   for(j=0;j<c-1-i;j++)
    	p1=p1->next;
  {
	temp->rollno=p->rollno;
	p->rollno=p1->rollno;
	p1->rollno=temp->rollno;
	
	strcpy(temp->name,p->name);
	strcpy(p->name,p1->name);
	strcpy(p1->name,temp->name);

	temp->marks=p->marks;
	p->marks=p1->marks;
	p1->marks=temp->marks;
	/*p->rollno=p1->rollno;
	p->name=p1->name;
	p->marks=p1->marks;

	p1->rollno=temp->rollno;
	p1->name=temp->name;
	p1->marks=temp->marks;*/
  }
p=p->next;
  }






}
