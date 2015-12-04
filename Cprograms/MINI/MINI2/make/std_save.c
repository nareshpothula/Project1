#include"header.h"
void std_save(struct st *ptr)
{
   FILE *fp1;
int c=0;
c=std_count(ptr);
if(c==0)
{
printf("There is no Rec in database save so add recto data base \n");
return;
}
  fp1=fopen("student.dat","w");
	while(ptr)
	{
	 fprintf(fp1,"%d %s %f\n",ptr->rollno,ptr->name,ptr->marks);
	 ptr=ptr->next;

	}
	fclose(fp1);

printf("successfully saved into  data baseinto file \n");
}
