#include<stdio.h>
main()
{
int a[5],i,min,ele;
printf("enter the num.....\n");
ele=sizeof (a)/sizeof a[0];
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
 min=a[0];
for(i=1;i<ele;i++)
	{
	//min=a[0];
	if( min>a[i])
 	min=a[i];
	}
printf("small number is%d\n",min);
}
