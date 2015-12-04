#include<stdio.h>
main()
{
	int mid,n,a[10],i,ele,low,high;
	ele=sizeof(a)/sizeof(a[2]);
	for(i=0;i<ele;i++)
	{	
		printf("enter a number...\n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<ele;i++)
		printf("%d\t",a[i]);
	printf("\n");
oto:
	printf("enter ser...\n");
	scanf("%d",&n);
	low=0;
	high=ele-1;
	i=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(n==a[mid])
			break;

		else if(n<a[mid])
		{
			i++;
			high=mid-1;
		}
		else
		{
			i++;
			low=mid+1;
		}
	}
	printf("num of searches is=%d\n",i);
	goto oto;
}
