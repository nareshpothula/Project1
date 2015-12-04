#include"header.h"

void add_begin(struct st **ptr)// Here  catching  0
{
struct st *temp;
temp=malloc(sizeof(struct st));// DMA

printf("Enter the rollno....\n");
scanf("%d",&(temp->rollno));
printf("Enter the name....\n");
scanf("%s",(temp->name));
printf("Enter the marks\n");
scanf("%f",&(temp->marks));

temp->next=*ptr;//now *ptr =0 it assigned to nextmeans(end of A and so on...)
*ptr=temp;// now *ptr become B
}
