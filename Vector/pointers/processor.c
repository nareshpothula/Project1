#include<stdio.h>
main()
{
int i=258;
char *p;
p=&i;
if(*p==i)
{
printf("little\n");
}
else
printf("big\n");
}
