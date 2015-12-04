#include<stdio.h>
main()
{
char *a="hello";
char *p;
char l=127;
p=a;
while(*p++)
l=((*p)<l)?(*p):l;
printf("l=%d\n",l);
}
