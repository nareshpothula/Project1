
#include<stdio.h>
char *strrev(char* ,char*);
main()
{
int i;
char s[19],s2[19],*x;
printf("enter the string...\n");
scanf("%s",s);
x=strrev(s,s2);
printf("%s\n",x);
}
char *strrev(char*p,char*q)
{
int j,i;
for(i=0;p[i];i++);
for(j=0,i=i-1;i>=0;j++,i--)
q[j]=p[i];
q[j]='\0';
return q;
}
