#include<stdio.h>
main()
{
int i,arr[5]={10,11,12,13,14},*p=arr;
for(i=0;i<8;i++)
printf("%d\n",++*p);
printf("\n");
for(i=0;i<7;i++)
printf("%d\n",(*p)++);
printf("\n");
}
