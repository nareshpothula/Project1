#include<stdio.h>
main()
{
int num,sum=0,r;
printf("enter the number....\n");
scanf("%d",&num);
for( ;num;num=num/10)
{
r=num%10;
sum=sum+r;
//num=num/10;
}
printf("%d\n",sum);





}
