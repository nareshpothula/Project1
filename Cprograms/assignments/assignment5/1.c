#include<stdio.h>
main()
{
	int a[4][4],b[2][2],c[55],r1,c1,r2,c2,r3,c3,i,j,k=0;
	int t,l,m;
	r1=sizeof (a)/sizeof (a[0]);
	c1=sizeof (a[0])/sizeof ( a[0][0]);
	r2=sizeof (b)/sizeof (b[0]);
	c2=sizeof (b[0])/sizeof ( b[0][0]);
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

	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);

		}
		printf("\n");
	} 

printf("Highest elements in row\n");
for(i=0;i<r1;i++)
{
k=0;
	for(j=0;j<c1;j++)
	{
	c[k++]=a[i][j];
	}
	for(l=0;l<k-1;l++)
	for(m=0;m<k-1-l;m++)
	if(c[m]<c[m+1])
	{
	t=c[m];
	c[m]=c[m+1];
	c[m+1]=t;
	}
	for(l=0;l<3;l++)
printf("%d  ",c[l]);
printf("\n");
}
printf("Highest elements in coloum\n");
for(j=0;j<r1;j++)
{
k=0;
	for(i=0;i<c1;i++)
	{
	c[k++]=a[i][j];
	}
	for(l=0;l<k-1;l++)
	for(m=0;m<k-1-l;m++)
	if(c[m]<c[m+1])
	{
	t=c[m];
	c[m]=c[m+1];
	c[m+1]=t;
	}
	for(l=0;l<3;l++)
printf("%d  ",c[l]);
printf("\n");
}
}

