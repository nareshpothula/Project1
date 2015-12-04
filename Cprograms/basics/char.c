#include<stdio.h>
main()
{
 unsigned  long  int i=1024;
i=(i*i*i*4)-1;
printf("lld=%lld\t&lld=%u\n",i,&i);
printf("llu=%llu\t&lld=%u\n",i,&i);
printf("ld=%ld\t&ld=%u\n",i,&i);
printf("lu=%lu\t&ld=%u\n",i,&i);
printf("d=%d\t&d=%u\n",i,&i);
printf("u=%u\t&d=%u\n",i,&i);

}
