#include<stdio.h>
main()
{
int num1,num2,temp;
printf("enter the number....\n");
scanf("%d %d",&num1,&num2);
printf("before num1=%d num2=%d\n",num1,num2);
temp=num1;
num1=num2;
num2=temp;

printf("after num1=%d num2=%d\n",num1,num2);


}
