#include<stdio.h>
typedef int *ptr;
typedef int vector;
main()
{
vector i=10;
//*ptr i=10;
ptr p;
p=&i;
printf("%d\n",*p);
}
