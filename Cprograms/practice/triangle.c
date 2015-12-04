#include<stdio.h>
main()
{
	int i=0,j=0,k=0;
	int c=0,c1=0;
	while(k<5)
	{
		for(i=0;i<4;i++)
		{
			printf(" *");
			for(j=0;j<5;j++)
				printf(" ");
			printf(" *\n");
		}
		k++;
		printf("**********\n");
	}
	printf("\n");

}
