#include<stdio.h>
main()
{
int a[5],i,j,ele,min,max,index=0,index1=0;
printf("enter the num.....\n");
ele=sizeof (a)/sizeof a[0];
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
min=a[0];
max=a[0];
for(i=0;i<ele;i++)
{
if(min>a[i])
 {
  min=a[i];
  index=i;
 }

if(max<a[i])
 {
  max=a[i];
  index1=i;
 }
}
printf("min num is %d\n index is%d\n",min,index);
 printf("max num is %d\n index is%d\n",max,index1);
}

