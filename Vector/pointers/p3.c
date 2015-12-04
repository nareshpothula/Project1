#include<stdio.h>
main()
{
int i=284,*ip;
char *cp;
ip=&i;
cp=&i;

printf("%d %d\n",*ip,*cp);



//printf("sizeof(ip)=%d\n sizeof(cp)=%d\n sizeof(*ip)=%d\n sizeof(*cp)=%d\n",sizeof(ip),sizeof(cp),sizeof(*ip),sizeof(*cp));






}
