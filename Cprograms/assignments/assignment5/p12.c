#include<stdio.h>
main()
{
int a[20],i;
for(i=0;i<20;i++)
{
a[i]=i;
printf("a[%d]=%d\n",i,a[i]);
}
printf("\n");
for(i=0;i<20;i++)
{
a[i]=a[22-i];
printf("a[%d]=%d\n",i,a[i]);
}
printf("\n");
for(i=0;i<20;i++)
printf("%d\n",a[i]);





}
