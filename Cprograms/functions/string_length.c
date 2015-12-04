#include<stdio.h>
int string_length(char*);
main()
{
int i;
char s[19]="naresh";
i=string_length(s);
printf("%d\n",i);
}

int string_length(char *s)
{
int i;
for(i=0;s[i];i++);
//printf("%d\n",i); this method is not suggetable printing in sub string
return i;
}
