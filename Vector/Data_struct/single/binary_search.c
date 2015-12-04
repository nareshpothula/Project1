#include<stdio.h>
main()
{
	int a[10]={1,3,4,6,7,9,10,13,15,18},Search,mid=10,j=0,k,start=0,end=10;
	printf("enter number to search\n");
	scanf("%d",&Search);

	while(Search != a[mid])
	{
	j++;
		mid=(start+end)/2;
	
		if(a[mid]>=Search)
			end=mid-1;
		else
			start=mid+1;
	}

	printf("Search Number is %d index %d Count-%d\n",a[mid],mid,j);

}

