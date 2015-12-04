#include"header.h"

void std_show(struct st *ptr)
{
printf("    Rollno\t NAME\t MARKS\n");

  while(ptr)
  {
   printf("    %d\t %s\t %f\n",ptr->rollno,ptr->name,ptr->marks);
   ptr=ptr->next;
  }
}


