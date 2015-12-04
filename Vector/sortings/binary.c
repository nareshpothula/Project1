#include<stdio.h>
main()
{
	int mid,n,a[10],i;

/////////////////////////////////////////////
	for(i=0;i<10;i++)
	{	
	printf("enter a number...\n");
	scanf("%d",&a[i]);
	}
////////////////////////////////////////
	for(i=0;i<10;i++)
	printf("%d\t",a[i]);
	printf("\n");
oto:
	printf("enter ser...\n");
	scanf("%d",&n);
	mid=(sizeof(a)/sizeof(a[0]))/2;
		int c=0;
///////////////////////////////////////////
	do
	{
		if(a[mid]<n)
		{
			pr=mid;
			i=mid/2;
			mid=i+mid;
				c++;
			aft=mid;	
		}
	if(a[mid]>n)
	{	
			count=0;
			mid=mid/2;	
			if(c!=0)
			{
			for(;pr<=aft;pr++)
			count++;
			mid=mid+count;
			}
			c++;
	}
	}while(a[mid]!=n);
	printf("mid %d\n",mid);
	printf("%d...\n",a[mid]);
	printf("c=%d...\n",c);
goto oto;
////////////////////////////////////////////////////////
}
