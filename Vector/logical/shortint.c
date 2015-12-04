#include<stdio.h>
main()
{
unsigned int i=1000000000;
unsigned long long int k,j=5;
//k=i*j;
k=i*(unsigned long long int)j;
printf("i=%d j=%llu k=%llu\n",i,j,k);



}
