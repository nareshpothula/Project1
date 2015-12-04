#include<stdio.h>
main()
{
	int c1,c[55],a[6],i,j,k,n,b[6],ele,ele1,d=0,e=0,c2=0,k1=1;
	ele=sizeof a/sizeof a[3];
	ele1=sizeof b/sizeof b[3];
	printf("Enter the elements a...\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	printf("Enter the elements b...\n");
	for(i=0;i<ele1;i++)
		scanf("%d",&b[i]);
	printf("Enter the elements b...\n");
	for(i=0;i<(ele);i++)
		printf("%d  \t",a[i]);
	printf("\n\n ");
	for(i=0;i<ele1;i++)
		printf("%d  \t",b[i]);
	printf("\n\n ");
	j=0;
		for(i=0;;i++)
		{
		for(k=0;k<=i;k++)
		 {
		  if(d>=ele)
		   break;
	          c[j++]=a[d++];
		 }

		for(k=0;k<=i;k++)
		{
		  if(e>=ele1)
		   break;
	 	  c[j++]=b[e++];
		}
}
/*
	k=1;
	c1=0;

	while(1)
	{
		if(d==ele&&(e==ele1))
			break;
		if(c1<k)
		{
			if(d!=ele)	
			{
			c[j++]=a[d++];
			c1++;
			continue;
			}

		}
		if(c2<k1)
		{
			if(e!=ele1)
			{
			c[j++]=b[e++];
			c2++;
			continue;
			}
		}
		//	break;
		if(d!=ele)	
		{
			k=k+1;
			c1=0;
		}
		if(e!=ele1)
		{
			k1=k1+1;
			c2=0;
		}
	}

	//			if((e>ele1)&&(d>ele))
	//			break;

	///	}*/

	for(i=0;i<(ele+ele1);i++)
		printf("%d  \t ",c[i]);
	printf("\n\n ");

}
