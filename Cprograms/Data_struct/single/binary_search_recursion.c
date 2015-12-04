#include<stdio.h>
int a[10]={1,3,4,6,7,9,10,13,15,18};
main()
{
	int Search,mid=10,j,k,start=0,end=10;
	static int l=3;
	printf("enter number to search\n");
	scanf("%d",&Search);

	mid=Binary_search(Search,start,end);
	printf("Search Number is %d index %d\n",a[mid],mid);
}


int Binary_search(int Search,int start, int end){
	static int mid=10;
	mid=(start+end)/2;
	if(Search != a[mid])
	{
		if(a[mid]>=Search)
			Binary_search(Search,start,end=mid-1);
		if(a[mid]<=Search)
			Binary_search(Search,start=mid+1,end);
	}
	else
		return mid;

}
