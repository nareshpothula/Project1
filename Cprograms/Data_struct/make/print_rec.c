#include"header.h"
void print_rec(struct st *ptr)
{
if(ptr)
 {
   printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
   print_rec(ptr->next);
 }
}


