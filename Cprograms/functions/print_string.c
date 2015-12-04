#include<stdio.h>

void string_print(char *p);
main()
{
char s[19]="naresh";
//printf("enter the string....\n");
//scanf("%s",s);
string_print(s);
}

void string_print(char *p)
{
int i;
for(i=0;p[i];i++)
printf("%c ",p[i]);
printf("\n");
}
