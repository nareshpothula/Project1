#include<stdio.h>
main()
{
int num1,num2;
printf("enter the data....\n");
scanf("%d%d",&num1,&num2);
printf("before num1=%d num2=%d\n",num1,num2);
/*num1=num1*num2;
num2=num1/num2;
num1=num1/num2;*/
num2=num1+num2-(num1=num2);
printf("after num1=%d num2=%d\n",num1,num2);


}
