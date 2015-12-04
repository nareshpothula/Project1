#include<stdio.h>
main()
{
char s[]={'a','b','c','\n','e','\0'};
char *p,*str,*str1;
p=&s[3];
str=p;
str1=s;
printf("%d\n",++*p + ++*str1-32);
}
