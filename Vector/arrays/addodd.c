#include<stdio.h>
main()
{
int a[5],i,sum=0,sum1=0,ele;
printf("enter the values.....\n");

ele=sizeof (a)/sizeof a[i];
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
for(i=0;i<ele;i++)
{
 if(a[i]%2==0)
 sum=sum+a[i];
else
sum1=sum1+a[i];
}
printf("even =%d\n",sum);
printf("odd=%d\n",sum1);
}
