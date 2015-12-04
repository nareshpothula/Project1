#include<stdio.h>
main()
{
int i=12, j=0, k;
//k=i&&(j=200);

//k=i||(j&&(i=200));
k=i&&((j=200)||i);
printf("i=%d j=%d k=%d\n",i,j,k);



}
