#include<stdio.h>
main()
{
char *p;
int *i,k=0;
long *j;
p=i=j=0;
p++;
i++;
j++;

printf("%p    %p    %p     %d\n",p,i,j,k);
}
