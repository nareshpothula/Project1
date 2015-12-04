#include"header.h"
int std_sort(struct st **ptr )
{
int i=0,j,ele,p,op,c;

struct st *temp,*temp1;


//ele=sizeof s1/sizeof s1[0];
c=std_count(*ptr);
if(c==0)
{
printf("There is no rec in file so sorting is not possible\n");
return;
}

temp=*ptr;

printf("you want sort according to:\n");
printf("1)rollno\n2)names\n3)marks\n");
scanf("%d",&op);


if(op==1)
{
for(i=0;i<(c-1);i++)
   {
    for (j=0;j<(c-1-i);j++)
      { 
	if(temp->rollno > temp->next->rollno)
	{
		if(*ptr==temp)
		{
		*ptr=temp->next;
		temp->next=(*ptr)->next;
		(*ptr)->next=temp;
		}
		else
		{
		temp1=*ptr;
		while(temp1->next!=temp)
		temp1=temp1->next;
		
		temp1->next=temp->next;
		temp->next=temp1->next->next;
		temp1->next->next=temp;
		}
	}
	else
	temp=temp->next;
     }
   temp=*ptr;
  }
  printf("\nSuccessfully studeny record is sorted  Rollno\n ");
}

if(op==2)
{
for(i=0;i<(c-1);i++)
{
for (j=0;j<(c-1-i);j++)
{ 
if(strcmp(temp->name,temp->next->name)>0)
{
if(*ptr==temp)
{
*ptr=temp->next;
temp->next=(*ptr)->next;
(*ptr)->next=temp;
}
else
{
temp1=*ptr;
while(temp1->next!=temp)
temp1=temp1->next;

temp1->next=temp->next;
temp->next=temp1->next->next;
temp1->next->next=temp;
}
}
else
temp=temp->next;
}
temp=*ptr;
}
printf("\nSuccessfully studeny record is sorted  according to NAME\n ");
}

if(op==3)
{
for(i=0;i<(c-1);i++)
{
for (j=0;j<(c-1-i);j++)
{ 
if(temp->marks > temp->next->marks)
{
if(*ptr==temp)
{
*ptr=temp->next;
temp->next=(*ptr)->next;
(*ptr)->next=temp;
}
else
{
temp1=*ptr;
while(temp1->next!=temp)
temp1=temp1->next;

temp1->next=temp->next;
temp->next=temp1->next->next;
temp1->next->next=temp;
}
}
else
temp=temp->next;
}
temp=*ptr;
}
printf("\nSuccessfully studeny record is sorted  according to MARKS\n ");
}


printf("\n");
printf("\n");
}


