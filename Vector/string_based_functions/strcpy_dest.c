#include<stdio.h>
void strcpy(char *,char*);
main()
{
char s[]="embedded";
char d[40],*p;
strcpy(d,s);
printf("s=%s d=%s \n",s,d);
}
void strcpy(char*d, char *s)
{
int i;
for(i=0;s[i];i++)
{
d[i]=s[i];
}
d[i]='\0';
}
