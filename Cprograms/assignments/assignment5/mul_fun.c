//              multiplication
#include<stdio.h>
int scaning(int a[][2],int r1,int c1)
{
int i,j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}

int printing(int a[][2],int r1,int c1)
{
int i,j;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}
main()
{
	int a[2][2],b[2][2],c[2][2],r1,c1,r2,c2,r3,c3,i,j,k;
	r1=sizeof (a)/sizeof (a[0]);
	c1=sizeof (a[0])/sizeof ( a[0][0]);
	r2=sizeof (b)/sizeof (b[0]);
	c2=sizeof (b[0])/sizeof ( b[0][0]);
	r3=sizeof (c)/sizeof (c[0]);
	c3=sizeof (c[0])/sizeof ( c[0][0]);
	printf("enter the matrix a elements\n");
	//..................................................

	scaning(a,r1,c1);

	scaning(b,r2,c2);
	
	printf("\n");
	for(i=0;i<r3;i++)
	{
		for(j=0;j<c3;j++)
		{
			c[i][j]=0;
			for(k=0;k<2;k++)	
			c[i][j]+=a[i][k]*b[k][j];

		}
	}
	printf("1st matrix\n");
	printing(a,r1,c1);

	printf("2nd martix\n");
	printing(b,r2,c2);
	
	printf("Result\n");
	printing(c,r3,c3);

}





