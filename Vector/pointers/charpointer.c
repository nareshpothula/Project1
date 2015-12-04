#include<string.h>
#include<stdio.h>
#include<stdlib.h>
main()
{
char *p="Naresh",*q="Bangalore",*r;
r=malloc(111);
///p=malloc(111);
r=strcpy(p,p);//
printf("%s\n",r);
}
