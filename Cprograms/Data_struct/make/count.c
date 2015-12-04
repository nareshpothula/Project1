#include"header.h"
int print_count(struct st *ptr)
{
int c=0;
   while(ptr)
	{
	c++;
//	printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
	ptr=ptr->next;
	}
printf("no of links is:%d\n",c);
}



