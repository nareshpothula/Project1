#include<stdio.h>
#include<stdlib.h>
main()
{
int *a,i,n,*b;
printf("how mant integers u want 2  store\n");
scanf("%d",&n);
	a=malloc(n*sizeof(int));
//	b=malloc(n*sizeof(int));
printf("%u\n",a);
printf("%u\n",b);
for(i=0;i<n;i++)
scanf("%d",a+i);
for(i=0;i<n;i++)
printf("%d ",a[i]);
}





/// storine of integers 
