#include<stdio.h>

void swap(int* ,int*);
main()
{
int num1,num2;
printf("enter the num....\n");
scanf("%d%d",&num1,&num2);
printf("before num1=%d num2=%d\n",num1,num2);
swap(&num1,&num2);
printf("after num1=%d num2=%d\n",num1,num2);
}
void swap(int *p,int *q)
{
int temp;
temp=*p;
*p=*q;
*q=temp;
}
