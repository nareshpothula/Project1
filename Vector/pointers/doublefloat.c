#include<stdio.h>
main()
{
double f=7.5;
char *cp,i,j;
cp=&f;
cp=cp+7;
for(j=0;j<=7;j++)
{
for(i=7;i>=0;i--)
{
if(*cp&1<<i)
printf("1");
else
printf("0");
}
cp=cp-1;


}
printf("\n");
}
