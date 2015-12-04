#include<stdio.h>
main()
{
static char s[25]="Vector";
int i=0;
char ch=s[++i];
printf("%c ",ch);
ch=s[i++];
printf("%c ",ch);
ch=++s[i];
printf("%c ",ch);
}
