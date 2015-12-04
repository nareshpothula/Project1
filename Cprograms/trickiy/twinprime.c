#include<stdio.h>
main()
{
int i,j,c=0,k=0,a[50];
for(i=2;i<100;i++)
{
   c=0;
  for(j=1;j<=i;j++)
{	
	if(i%j==0)
	c++;
}
if(c==2)
   {
    a[k++]=i;
   // printf("%d\t",i);
   }
}
for(i=0;i<k-1;i++)
	{
	 if((a[i+1]-a[i])==2)
 	 printf("%d  %d\n",a[i],a[i+1]);
	}
printf("\n");

}
