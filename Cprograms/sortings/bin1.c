#include<stdio.h>
main()
{
	int mid,n,a[10],i,ele,j;
	ele=sizeof(a)/sizeof (a[0]);

	for(i=0;i<ele;i++)
	{	
		printf("enter a number...\n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<ele;i++)
		printf("%d\t",a[i]);
	printf("\n");
	int sum=0,k=0,l=0,b[6],c[6];

	for(i=0;i<(ele/2+1);i++)
	{
		if((ele-i)>=5)
		{
			sum=0;
			for(j=i;j<(i+5);j++)
				sum=sum+a[j];
			b[k++]=sum;
			c[l++]=i;
			printf("sum=%d\t",sum);
		}
	}	
	l=b[0];
	j=0;
	for(i=0;i<k;i++)
		if(l<b[i])
			j=i;
	printf("index=%d\narray elements\n",j);
	for(i=j;i<(j+5);i++)
		printf("%d\t",a[i]);
	printf("\n");
}

