#include<stdio.h>
#define prod (x) (x*x)
main()
{
int i=3,j,k;
j=prod(i++);
k=prod(++i);
printf("%d %d \n",j,k);
}

