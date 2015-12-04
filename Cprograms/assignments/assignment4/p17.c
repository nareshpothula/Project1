#include<stdio.h>
main()
{
int num,sum=0,r,n;
printf("enter the digit\n");
scanf("%d",&num);
n=num;
for( ;num;num=num/10)
{
r=num%10;
sum=sum+r;
}
//(n==sum)?printf("palandrom"):printf("not");
printf("%d\n",sum);






}
