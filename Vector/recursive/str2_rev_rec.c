#include<stdio.h>
void str_rec(char *);
main()
{
char s[19];
printf("enter the string   \n");
scanf("%s",s);
 
str_rec(s );
printf("\n");
}
void str_rec(char *p)
{
if(*p)
{
 str_rec(p++);
 printf("%c ",*p);
}
}
