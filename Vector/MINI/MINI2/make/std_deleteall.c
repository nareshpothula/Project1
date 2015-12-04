#include"header.h"
int std_deleteall(struct st **ptr)
{
int n,c=0,k=1;
c=std_count(*ptr);
if(k==1)
{
k++;
if(c==0)
{
printf("There is NO rec in database deletion is not possible\n");
return;
}
}
struct st *temp1;
printf("Are u sure want to Delete all records\n \t1)YES\t2)NO \n");
scanf("%d",&n);
if(n==1)
{
temp1=*ptr;
while(temp1)
{
 {
  while(temp1->next!=NULL)
      temp1=temp1->next;
      free(temp1);
 }

}
if(n==2)
return;
}
}
