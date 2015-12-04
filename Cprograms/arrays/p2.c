#include<stdio.h>
main()
{
int i=10,j=10,k;
//k=i++ + j++;
//printf("i=%d,	j=%d,	k=%d\n",i,j,k);
i=i++ + ++j;
printf("i=%d,	j=%d,	i=%d\n",i,j,i);
j=++i + j++;
printf("i=%d	,j=%d	,j=%d\n",i,j,j);

}
