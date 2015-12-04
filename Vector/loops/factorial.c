#include<stdio.h>
main()
{
long long int i,num,res=1;
printf("enter the num......\n");
scanf("%lld",&num);
//for(i=num;i>=1;i--)
for(i=1;i<=num;i++)
res=res*i;
printf("res=%lld\n",res);



}
