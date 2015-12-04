#include"header.h"
void reverse_link(struct st **ptr)
{
int c,i=0;
c=count(*ptr);
struct st *temp,**p;
temp=*ptr;
p=malloc(c*4);

	while(temp)
	{
	p[i++]=temp;
	temp=temp->next;
	}

	p[0]->next=NULL;
	for(i=1;i<c;i++)
	p[i]->next=p[i-1];

*ptr=p[c-1];
}
