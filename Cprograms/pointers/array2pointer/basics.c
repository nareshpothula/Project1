#include<stdio.h>
main()
{
int i=10,j=20,k=30;
//char *p[3];
int *p[3];
//int *p=&i;

p[0]=&i;
p[1]=&j;
p[2]=&k;

printf("p=%u\n ",p);
printf("&p=%u\n ",&p);
printf("p+1=%u\n ",p+1);
printf("*p[1]=%u\n ",*p[1]);
printf("%u\n ",(*(p[0]+1)+1));//(0+1) if it z char pointer it fetch 1 bite memory rest all zero's
printf("p[0]=%u\n ",p[0]);
}



