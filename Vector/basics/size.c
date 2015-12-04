#include<stdio.h>
main()
{
int a;
char b;
double c;
printf("%d\n",sizeof(a+sizeof(c+b)));
printf("%d\n",sizeof(b+(sizeof(a+c))));
printf("%d\n",sizeof(c+sizeof(a+b)));
printf("%d\n",sizeof(a+b));
printf("%d\n",sizeof(c+b));
printf("%d\n",sizeof(a+c));
}
