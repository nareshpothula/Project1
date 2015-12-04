#include<stdio.h>
main()
{
char *str[10],*p;
int i;
for(i=0;i<10;i++)
{
p=malloc(10*sizeof(char));
scanf(" %s",p);
str[i]=p;
}
for(i=0;i<10;i++)
printf("%s",str);
}
