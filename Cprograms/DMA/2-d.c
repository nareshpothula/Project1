#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,j;
	int **a;
	a=malloc(2*sizeof(int *));
	for(i=0;i<2;i++)
		a[i]=malloc(3*sizeof(int));
	printf("enter the elements of array")
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
				scanf("%d",&a[i][j]);
		}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			printf("%d  ",a[i][j]);
		printf("\n");
	}

}
