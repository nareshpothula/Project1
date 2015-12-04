#include<stdio.h>
void str_rec(char*);
main()
{
char s[19];
printf("enter the string..");
scanf("%s",s);
str_rec(s);
//printf("%s ",s);
printf("\n");
}
void str_rec(char *p)
{

if(*p)
{
printf("%c ",*p);
str_rec(p+1);
}
}

