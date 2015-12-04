#include<stdio.h>
main()
{
int n1,n2;
printf("enter the value.....\n");
scanf("%d %d",&n1,&n2);
n1=n1^n2;
n2=n1^n2;
n1=n1^n2;
printf("n1=%d n2=%d\n",n1,n2);



}
