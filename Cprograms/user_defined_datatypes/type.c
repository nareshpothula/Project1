#include<stdio.h>

typedef int array;
main()
{
array a[5],i;
//int i;
printf("%d\n",sizeof(a));
for(i=0;i<5;i++)
scanf("%d",&a[i]);

for(i=0;i<5;i++)
printf("%d",a[i]);
}
