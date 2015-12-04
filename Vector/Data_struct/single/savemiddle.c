#include<stdio.h>
#include<stdlib.h>
struct st
	{
	 int rollno;
	 char name[22];
	 float marks;
	 struct st *next;
	};
void middle(struct st **);
void print(struct st *ptr);
FILE *fp;// gloabel for all functions
main()
{
struct st *headptr=0;
fp=fopen("data.c","r");
middle(&headptr);
middle(&headptr);
middle(&headptr);
printf("after=\n");
print(headptr);
}
void middle(struct st **ptr)
{
struct st *temp,*temp1;
temp=malloc(sizeof(struct st));
/*
printf("Enter the rollno\n");
scanf("%d",&(temp->rollno));
printf("Enter the name\n");
scanf("%s",(temp->name));
printf("Enter the marks\n");
scanf("%f",&(temp->marks));
*/
fscanf(fp,"%d %s %f",&(temp->rollno),temp->name,&(temp->marks));
	 printf("n middle=%d %s %f\n",temp->rollno,temp->name,temp->marks);
if((*ptr==NULL)||(temp->marks < (*ptr)->marks))
 {
   temp->next=*ptr;
   *ptr=temp;
 }

else
{

    temp1=*ptr;
 while(temp1)	
  {
	if((temp1->next==NULL)||(temp1->next->marks > temp->marks))
	{ 
	 temp->next=temp1->next;
	 temp1->next=temp;
	 break;
	}

    temp1=temp1->next;
  }
} 
}
void print(struct st *ptr)
{
   FILE *fp1;
  fp1=fopen("file","w");
	while(ptr)
	{
	 fprintf(fp1,"%d %s %f",ptr->rollno,ptr->name,ptr->marks);
	 printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
	 ptr=ptr->next;

	}
	fclose(fp1);
}
