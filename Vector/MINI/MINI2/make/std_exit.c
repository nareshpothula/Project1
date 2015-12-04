#include"header.h"
void std_exit(struct st *ptr)
{
int op;
printf("\n 1) \"Save and Exit\" (or) 2) \"Exit without Saving\" \n ");
scanf("%d",&op);
if(op==1)
{
printf("student data is successfully saved\n");
std_save(ptr);
exit(1);
}
if(op==2)
printf("student data is not saved into datafile \n");
exit(1);
}
