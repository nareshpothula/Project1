#include<stdio.h>
main()
{
int a,b,c,d;
printf("enter the num......\n");
scanf("%d%d%d",&a,&b,&c);
printf("a=%d b=%d c=%d\n",a,b,c);
d=a>b?(a>c?a:c):(b>c?b:c);
printf("biggest num is=%d\n",d);
}
