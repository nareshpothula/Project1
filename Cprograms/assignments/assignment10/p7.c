#include<stdio.h>
main(int argc,char**argv)
{
int i;
for(i=1;i<=3;i++)
printf("%c ",*argv[i]);
}
