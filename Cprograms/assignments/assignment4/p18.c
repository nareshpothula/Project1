#include<stdio.h>
main()
{
int num,res=0,r;
printf("enter the num...........\n");
scanf("%d",&num);
for( ;num; )
{
r=num%10;
res=res*10+r;
num=num/10;


}
printf("%d\n",res);





}
