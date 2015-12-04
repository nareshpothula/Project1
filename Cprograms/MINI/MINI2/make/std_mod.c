#include"header.h"
int std_modify(struct st **ptr)
{
int op,n,c=0,q=1;
char k[22];
struct st *temp,*temp1;
if(q==1)
{
q++;
c=std_count(*ptr);
if(c==0)
{
printf("There is no rec in data base modification is not possible\nso plaese add rec to database\n");
return;
}
}
printf("Modification according to \n1)Rollno\t2)Name\t3)Marks\n");
scanf("%d",&op);
if(op==1)
{
printf("Enter the Rollno.....\n");
scanf("%d",&n);
temp=*ptr;
while(temp);
{
   if(temp->rollno==n)
    {
     printf("Previously Rollno is present Enter New rollno....\n");
     return;
    }
}
std_add(*ptr);

}

if(op==2)
{
printf("Enter the Name.....\n");
scanf("%s",k);
temp=*ptr;
while(temp);
{
   if(!(strcmp(temp->name,k)))
    {
     printf("Previously NAME is present Enter New NAME....\n");
     return;
    }
}
std_add(*ptr);

}

if(op==3)
{
printf("Enter the MARKS.....\n");
scanf("%d",&n);
temp=*ptr;
while(temp);
{
   if(temp->marks==n)
    {
     printf("Previously marks is present Enter New marks....\n");
     return;
    }
}
std_add(*ptr);

}

}
