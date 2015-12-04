#include<stdio.h>
main()
{
	int a[10],i=0,temp,again,tru=20,fal=55,c=0;
int ele;	
printf("Enter the elements...\n");
ele= sizeof a/sizeof a[2];
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

	for(i=0;i<ele-1;i++)
	{
		if(a[i]<a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			again=tru;
		}
		if((i==ele-2)&&(again==tru))
		{
			c++;
			i=-1;
			again=fal;
		}
         }

for(i=0;i<ele;i++)
printf("%d\t",a[i]);
}
