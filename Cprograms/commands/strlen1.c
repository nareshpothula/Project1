#include<stdio.h>
main(int argc,char**argv)
{
int i;
if(argc!=2)
{
printf("Usage: ./strlen1 string\n");
return;
}
for(i=0;argv[1][i];i++);
printf("the string length %s=%d\n",argv[1],i);
}
