#include<stdio.h>
void str_rec(char *);
main()
{
char s[19];
puts("enter the string....\n");
scanf("%s",s);
 
str_rec(s);
printf("\n ");
}
void str_rec(char *f)
{
if(*f)
{
str_rec(f+1);
printf("%c ",*f);
}
}
