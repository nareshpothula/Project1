#include<stdio.h>
#define f(g,g2) g##g2
main()
{
int var=100;
printf("%d\n",f(var));
}
