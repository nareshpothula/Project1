#include<stdio.h>
main()
{
int a[5],i,sum=0,sum1=0,ele,sum_even=0;
printf("enter the values.....\n");

ele=sizeof (a)/sizeof a[i];
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
for(i=1;i<ele;i=i+2)
{
	sum=sum+a[i];
	printf("sum after addition of index in  a[%d]   is %d\n",i,sum);
}
printf("sum of all odd index ele.... =%d\n",sum);


for(i=0;i<ele;i=i+1)
{
 	if(a[i]%2==0)
	sum_even=sum_even+a[i];
	printf("sum after addition of even no ina[%d]    is %d\n",i,sum_even);
}
printf("sum of all even ele.... =%d\n",sum_even);
}
