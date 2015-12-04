#include"header.h"
void print_save(struct st *ptr)
{
   FILE *fp1;
  fp1=fopen("file.c","w");
	while(ptr)
	{
	 fprintf(fp1,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
	 ptr=ptr->next;

	}
	fclose(fp1);
}
