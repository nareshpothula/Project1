#include<stdio.h>
main()
{
int a[5]={10,20,30,40,50};
int *p[3]={a,a+2,a+1};
printf("p[0]=%d %d \n",*p[0],p[0][1]);
printf("p[1]=%d %d \n",*p[1],p[1][1]);
printf("p[2]=%d %d \n",*p[2],p[2][0]);
}

