#include"header.h"
void std_sort(struct st **ptr )
{
int i=0,j,ele,p,op,c;

struct st **s1,*temp,*temp1,**ptr7;
temp1=*ptr;

while(temp1)
{
s1[i++]=temp1;
temp1=temp1->next;
}

//*ptr=temp1;
//s1=*ptr;

ele=sizeof s1/sizeof s1[0];
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
for(i=0;i<(ele-1);i++)
        {
         for(j=0;j<(ele-1-i);j++)
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
for(i=0;i<(ele-1);i++)
{
for (j=0;j<(ele-1-i);j++)
    if((strcmp(s1[j]->name,s1[j+1]->name))>0)

                {
                 temp=s1[j];
                 s1[j]=s1[j+1];
                 s1[j+1]=temp;
                }
}
printf("\nSuccessfully studeny record is sorted  according to NAME\n ");
//std_show(ptr);
}
if(op==3)
{
for(i=0;i<(ele-1);i++)
        {
         for(j=0;j<(ele-1-i);j++)
             if(s1[j]->marks> s1[j+1]->marks)
                {
                 temp=s1[j];
                 s1[j]=s1[j+1];
                 s1[j+1]=temp;
                }
        }

printf("\nSuccessfully studeny record is sorted  according to MARKS \n ");
std_show(ptr);
}

printf("After\n");
j=0;
  while(j<=c-1)
  {
   printf("%d\t %s\t %f\n",s1[j]->rollno,s1[j]->name,s1[j]->marks);
j++;
  }
//*ptr7=malloc(40*sizeof(struct st));
//*ptr=s1[3];
//std_show(ptr);
printf("\n");
}






