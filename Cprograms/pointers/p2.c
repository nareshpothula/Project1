#include<stdio.h>
main()
{
int i=258,*p;
char ch='a', *cp;
float f=23.5,*fp;

p=&i;
cp=&ch;
fp=&f;

printf("%d%d%d\n",sizeof(*p),sizeof(*cp),sizeof(*fp));
}
