#include<stdio.h>
main()
{
int i,arr[5]={1,2,3,4,5},*p=arr;
for(i=0;i<5;i++)
printf("%u\n",*--p);
}
