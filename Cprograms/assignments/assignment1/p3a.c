#include<stdio.h>
main()
{
int n1,n2,n3,temp;
printf("enter the data....\n");
scanf("%d%d%d",&n1,&n2,&n3);
printf("before n1=%d n2=%d n3=%d\n",n1,n2,n3);
temp=n1;
n1=n2;
n2=n3;
n3=temp;

printf("after n1=%d n2=%d n3=%d\n",n1,n2,n3);





}




