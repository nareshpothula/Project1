#include<stdio.h>
main()
{
int i=2,j=15,k;
k=++i;
k=i++;
k=i++ + j++;
k=++i + ++j;
k=--i + ++j;
k=--i - --j;
k=i++ - --j;


printf("%d %d %d %d %d %d %d\n",k,k,k,k,k,k,k,k);

}
