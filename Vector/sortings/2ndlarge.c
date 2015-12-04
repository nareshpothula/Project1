#include<stdio.h>
main()
{
	int a[]={100,999,23,423,3,4,66,0,1},i;
	int max1,max2,min1,min2,ele,j=-1;
	max1=min1=a[0];
	max2=min2=a[0];
	ele=sizeof(a)/sizeof a[1];
	printf("ele=%d\n",ele);
	for(i=0;i<ele;i++)
	{
////////////////////////////////////////////////////////////////////////
		if(min1>=a[i])
		{
			min1=a[i];
				if((i+1)<ele)
					continue;
				else
					i=-1;
		}
		else if(max1<a[i])
		{
			max1=a[i];
				if((i+1)<ele)
					continue;
				else
					i=-1;
		}
//////////////////////////////////////////////////////////////////////////
		else if(min2>=a[i]&&(a[i]!=min1))
			min2=a[i];

		else if((max2<=a[i])&&(a[i]!=max1))
			max2=a[i];
	}

printf("max1=%d   min1=%d\n",max1,min1);
printf("max2=%d   min2=%d\n",max2,min2);

}
