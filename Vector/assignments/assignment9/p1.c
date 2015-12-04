
#include<stdio.h>
#define DEF 
main()
{
int i=2;
#ifdef DEF
i*=i;
printf("%d\n",i);
#else
printf("%d\n",i);
#endif
}
