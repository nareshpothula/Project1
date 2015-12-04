#include"header.h"

int std_delete(struct st **ptr)
{
struct st s1[3],*temp,*temp1;
int i,j,ele,p,op,c=0;
c=std_count(*ptr);
if(c==0)
{
printf("there is NO rec in databae so deletion is not possible....\n");
return;
}

printf("you want delete according to:\n");
printf("1)rollno\n2)names\n");
scanf("%d",&op);
if(op==1)
{
int n;
printf("Enter the rollno.....\n");
scanf("%d",&n);
temp=*ptr;
while(temp)
{
  if(temp->rollno==n)
    {
        if(*ptr==temp)
         {
          *ptr=temp->next;
           free(temp);
           return;
         }
        else
         {
          temp1->next=temp->next;
           free(temp);
          return;
         }
    }
  temp1=temp;
  temp=temp->next;
}
printf("rollno is not present\nEnter the correct rollno\n");
}
if(op==2)
{
char k[22];
printf("Enter the NAME.....\n");
scanf("%s",k);
temp=*ptr;
while(temp)
{
  if(!(strcmp(temp->name,k)))
    {
        if(*ptr==temp)
         {
          *ptr=temp->next;
           free(temp);
           return;
         }
        else
         {
          temp1->next=temp->next;
           free(temp);
          return;
         }
    }

  temp1=temp;
  temp=temp->next;
}
printf("NAME is not present\nEnter the correct NAME\n");
}
}
                          
