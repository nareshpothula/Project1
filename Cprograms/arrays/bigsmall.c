#include<stdio.h>
main()
{
int a[5],i,j,ele,min,max,index;
printf("enter the num.....\n");

ele=sizeof (a)/sizeof a[0];
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
min=a[0];
{
	for(i=0;i<ele;i++)

	{
	  if(min>a[i])
	  {
		  min=a[i];
		  index=i;
       	  }
	}
}
printf("the min num is %d \n index is %d\n",min,index);
 printf("\n");
  

max=a[0];
{
index=0;
for(i=1;i<ele;i++)
 {
  if(max<a[i]) 
{
   max=a[i];
  
   index=i;
}
} 
}  
printf("max num is %d\n index is %d\n",max,index);
}




