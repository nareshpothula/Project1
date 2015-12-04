#include<stdio.h>
main()
{
char s1[20]="hello world";
s1[7]='\0';
printf("%d %s \n",strlen(s1),s1);
}
