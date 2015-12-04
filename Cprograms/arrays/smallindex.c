#include<stdio.h>
main()
{
int a[5],i,min,index,ele;
printf("enter the num......\n");
ele=sizeof (a)/sizeof a[0];
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
min=a[0];
for(i=0;i<ele;i++)
 {
   if(min>=a[i])
	 {
	   min=a[i];
       	   index=i;
	 }
 }
printf("small num is=%d\n index is %d\n",min,index);
}
