#include<stdio.h>
main(int argc,char**argv)
{
int i;
for(i=0;argv[1][i];i++);
printf("the lengh of string is  %s=%d\n",argv[1],i);




}
