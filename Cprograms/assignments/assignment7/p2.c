#include<stdio.h>
main()
{
char str[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int *p,i;
p=str;
for(i=0;i<4;i++)
printf("%c",*p++);
}
