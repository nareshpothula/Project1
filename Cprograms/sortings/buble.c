#include<stdio.h>
main()
{
	int a[5],k=0,i,ele,j,t,c=0;
	ele=(sizeof(a)/sizeof(a[0]));
	for(i=0;i<ele;i++)
	{	
		printf("enter a number...\n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<ele;i++)
		printf("%d\t",a[i]);
	printf("\n");
	for(i=0;i<ele-1;i++)
	{c=0;
		for(j=0;j<ele-1-i;j++)
			if(a[j]>=a[j+1])
			{
			c++;
			k++;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	printf("count %d\n",c);
	}
	
	for(i=0;i<ele;i++)
	printf("%d\t",a[i]);
	printf("countk===== %d\n",k);
	printf("\n");
	}
