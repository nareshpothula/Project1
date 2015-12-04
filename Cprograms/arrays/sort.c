#include<stdio.h>
main()
{
int a[5],i,j,ele,temp;
printf("enter the .....\n");
ele=sizeof a/sizeof a[2];
for(i=0;i<ele;i++)
{
scanf("%d",&a[i]);
printf("Before..%u\n",&a[i]);
}
for(i=0;i<ele-1;i++)
{
 for(j=0;j<ele-1;j++)
  {
    if(a[j]>a[j+1])
     {  
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
     }
  }
}

for (j=0;j<ele;j++)
{
printf("%d ",a[j]);
printf("after..%u\n",a);
}
}
