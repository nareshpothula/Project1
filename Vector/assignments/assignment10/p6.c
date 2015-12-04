#include<stdio.h>
main(int argc,char**argv)
{
argc=argc-(argc-1);
printf("%s\n",argv[argc-1]);
}
