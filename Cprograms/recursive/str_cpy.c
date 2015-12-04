#include<stdio.h>
int str_cpy(char *, char*);
main()
{
char s[19],d[19];
printf("enter the string....\n");
scanf("%s",s);
str_cpy(s,d);
printf("\n");

}
int str_cpy(char *p. char *q)
{
if(*s)
{
*P=*q;
str_cpy(s+1,d+1);
}
else
{

*q=NULL;
}
}

