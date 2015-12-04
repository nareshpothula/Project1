#include<stdio.h>
void str_rec(char *);
main()
{
char s[10]="naresh";
str_rec(s);
printf("\n");
}
void str_rec(char *s)
{
	if(*s)
	{
	 printf("%c ",*s);
       	 str_rec(s+1);
	}
}
