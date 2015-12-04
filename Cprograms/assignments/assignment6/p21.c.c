#include<stdio.h>
char r[100];
char *str_cat(char*,char*);
main()
{
char a[]="abcd",b[]="efgh",*p;
p=str_cat(a,b);
printf("%s",p);
}

char *str_cat(char*p,char*q)
{
int i,j=0,k;
for(i=0;p[i];i++)
r[i]=p[i]
for(k=0;q[k];k++)
r[i++]=q[k];
r[i]='\0';
printf(" print %s \n",r);
return r;
}
