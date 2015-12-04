#include"header.h"
int std_count(struct st *ptr)
{
int c=0;
   while(ptr)
	{
	c++;
	ptr=ptr->next;
	}
printf("num of records present in database is:%d\n",c);
return c;
}



