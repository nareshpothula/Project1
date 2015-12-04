#include<stdio.h>
main()
{
	int a[]={0,21,32,3,54,45},i,j;
	int max1,max2,min1,min2;
	max1=min1=a[0];
	max2=min2=a[0];

	for(i=0;i<6;i++)
	{
		if(min1>a[i])
			min1=a[i];
		if(max1<a[i])
			max1=a[i];

	}

	printf("max1=%d   min12=%d\n",max1,min1);
	for(i=0;i<6;i++)

	{
		if(min2>a[i]&&(a[i]!=min1))
			min2=a[i];
		if((max2<a[i])&&(a[i]!=max1))
			max2=a[i];
	}
	printf("max2=%d   min2=%d\n",max2,min2);

}
