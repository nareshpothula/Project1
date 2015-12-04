#include<stdio.h>
void string(char *,char *,int );
main()
{
char s[19],m[20],l;
printf("enter the string....\n");
scanf("%s",s);
l=strlen(s)-1;
printf("%d\n",l);
string(s,m,l);
printf("%s\n",m);
}
void string(char*s,char*m,int n)
{
static int i;
if(n>=0)
{
m[i++]=s[n];
n=n-1;
string(s,m,n);
}
else
m[i]='\0';
//printf("in fun  %s\n",s);
}

