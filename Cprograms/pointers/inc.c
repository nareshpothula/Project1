#include<stdio.h>
main()
{
int i=258;
int *ip;
char *cp;
ip=&i;
cp=&i;
printf("ip=%u\ncp=%u\n",ip,cp);
printf("ip+1=%u\ncp+1=%u\n",ip+1,cp+1);







}
