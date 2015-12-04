#include<stdio.h>
main()
{
	int ele, a[5],i,j,k,t,pos,min;
	ele =sizeof (a)/sizeof (a[0]);
	printf("Enter the elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
		printf("%d   ",a[i]);
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
	for(i=0;i<ele;i++)
	{
		for(j=i+1;j<ele;j++)
		{
			min=a[i];
			pos=i;
			if(a[i]<min)
			{
				min=a[j];
				pos=j;
			}
		}
		t=a[i];
		a[i]=min;
		a[pos]=t;
for(k=0;k<ele;k++)
printf("%d   ",a[k]);
printf("\n");
	}

printf("\n");
printf("\n");
printf("\n");
for(i=0;i<ele;i++)
printf("%d   ",a[i]);
		printf("\n");


}
