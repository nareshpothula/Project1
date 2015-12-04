#include<stdio.h>
main()
{
int a[5],b[5],i,ele,j,t;
printf("enter the values...\n");
ele=sizeof (a)/sizeof a[0];
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
for(i=0,j=4;j>i;i++,j--)
{
 t=a[i];
 a[i]=a[j];
 a[j]=t;
}

for(j=0;j<ele;j++)
printf("%d ",a[j]);
printf("\n ");
}
