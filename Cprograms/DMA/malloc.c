#include<stdio.h>
#include<stdlib.h>
main()
{
int *p,n;
char *q;
printf("enter the n\n ");
scanf("%d",&n);
//p=calloc(5,sizeof(1)*100);
q=malloc(sizeof(int)*n);
q[1]=11;
q[0]=12;
//q[2]=14;
printf("q=%d,q1=%d\n",q[0],q[1]);
//printf("size=%d\n",sizeof(p));
printf("q[0]=%u\n",&q[0]);
printf("q[n]=%u\n",&q[n]);
printf("size=%d\n",((&q[n])-(&q[0])));
}

