#include<stdio.h>
main()
{
char str[]="lucknow";
char *p=str;
p++;
p=p+2;
p[3]='t';
printf("%s  %s\n",str,p);
}
