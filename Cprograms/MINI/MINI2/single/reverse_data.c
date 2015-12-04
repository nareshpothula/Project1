#include"header.h"
void reverse(struct st *ptr)
{
FILE *fp2;
int i=0,j,c;
c=count(ptr);
struct st v,*temp,*p[4];
temp=ptr;
	while(temp)
	{
	p[i++]=temp;
	temp=temp->next;
	}

for(i=0,j=c-1;i<j;i++,j--)
	{

	v.rollno=p[i]->rollno;
	strcpy(v.name,p[i]->name);
	v.marks=p[i]->marks;

	p[i]->rollno=p[j]->rollno;
	strcpy(p[i]->name,p[j]->name);
	p[i]->marks=p[j]->marks;

	p[j]->rollno=v.rollno;
	strcpy(p[j]->name,v.name);
	p[j]->marks=v.marks;
	}



temp=ptr;
fp2=fopen("data2","w");


while(temp)
{
fprintf(fp2,"%d %s %f\n",temp->rollno,temp->name,temp->marks);
temp=temp->next;
}

}
