

//              multiplication

#include<stdio.h>
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
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n");

	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}


	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);

		}
		printf("\n");
	} 

	printf("\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",b[i][j]);

		} 
		printf("\n");
	}


//               Multiplication LOGIC==================================================

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


//=====================================================================================

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)

			printf("%d ",c[i][j]);
		printf("\n");
	}
	printf("\n");

}





