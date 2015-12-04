#include<stdio.h>
void fun(char **p);
main()
{
char *a[]={"ab","bc","cd","gf","ds"};
fun(a);
}
void fun (char **p)
{
char *t;
t=((p+=sizeof(int))[-3]);
printf("%s\n",t);
}
