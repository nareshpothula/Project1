#include"header.h"
void std_sort(struct st **ptr )
{
int i=0,j,ele,p,op,c;

struct st **s1,*temp,*temp1;

temp=*ptr;

//ele=sizeof s1/sizeof s1[0];
c=std_count(*ptr);
if(c==0)
{
printf("There is no rec in file so sorting is not possible\n");
return;
}

printf("you want sort according to:\n");
printf("1)rollno\n2)names\n3)marks\n");
scanf("%d",&op);

if(op==1)
{
for(i=0;i<(c-1);i++)
        {
         for(j=0;j<(c-1-i);j++)
             if(s1[j]->rollno > s1[j+1]->rollno)
                {
                 temp=s1[j];
                 s1[j]=s1[j+1];
                 s1[j+1]=temp;
                }

        }
printf("\nSuccessfully studeny record is sorted  Rollno\n ");
//std_show(ptr);
}
if(op==2)
{
printf("else if.....\n");
for(i=0;i<(c-1);i++)
{
printf("for 1.....\n");
for (j=0;j<(c-1-i);j++)
{ 
printf("for 2.....\n");
if(strcmp(temp->name,temp->next->name)>0)
{
printf("strcmp......\n");
if(*ptr==temp)
{
printf("......\n");
temp=*ptr;
*ptr=(*ptr)->next;
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
         for(j=0;j<(c-1-i);j++)
             if(s1[j]->marks> s1[j+1]->marks)
                {
                 temp=s1[j];
                 s1[j]=s1[j+1];
                 s1[j+1]=temp;
                }
        }

printf("\nSuccessfully studeny record is sorted  according to MARKS \n ");
}

printf("\n");
}






