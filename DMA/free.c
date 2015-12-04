#include<stdio.h>
#include<stdlib.h>
main()
{
int *p;
	p=malloc(4);
*p=10;
printf("%d\n",p);
free(p);
//p=0;// set to addressull
printf("%d\n",*p);


}
