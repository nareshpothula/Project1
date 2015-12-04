#include<stdio.h>
main()
{
int i=300, j=121,k;
k=i&j;
printf("i=%d j=%d k=%d\n",i,j,k);

k=i|j;
printf("i=%d j=%d k=%d\n",i,j,k);

k=i^j;
printf("i=%d j=%d k=%d\n",i,j,k);

k=~i;
printf("i=%d j=%d k=%d\n",i,j,k);
}
