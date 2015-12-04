#include<stdio.h>
main()
{
int a[6]={10,20,30,40,50,60};
int *ip,(*p)[3];
ip=a;
p=a;

//printf("ip=%u ip+1=%u\n",ip,ip+1);
//printf("p=%u p+1=%u\n",p,p+1);
//printf("ip=%u *ip=%u\n",ip,*ip);
//printf("p=%u *p=%u\n",ip,*p);
printf("%d\n",p[1][1]);
printf("%d\n",(*p)[1]);

//printf("%d\n",*(p+1)[1]);



}
