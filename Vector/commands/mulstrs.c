#include<stdio.h>
main(int argc,char**argv)
{
int i,j;
if(argc>j)
{
printf("Usage: ./mulstrs string\n");
return;
}
for(j=1;j<argc;j++)
{
 for(i=0;argv[j][i];i++);
 printf("the string length %s=%d\n",argv[j],i);
}
}
