#include"header.h"
void std_reverse(struct st *ptr)
{
int c=0,k=1;
if(k==1)
{
k++;
   c=std_count(ptr);
    if(c==0)
     {
      printf("There is no rec in database so reverse is not possible\n");
      return;
     }
}
if(ptr)
 {
   printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
   std_reverse(ptr->next);
 }
}

