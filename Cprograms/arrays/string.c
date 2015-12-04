#include<string.h>
#include<stdio.h>
main()
{
char s[222],a[33],d[44],i,k=0;
printf("ERnter the string....\n");
//scanf("%s",s);
scanf("%[^\n]",s);
for(i=0;s[i];i++)
{
if((s[i]==' ')&& (s[i+1]==' '))
{
	strcpy(s+i,s+i+1);
	i--;
}
}
int j=0;
for(i=0;s[i];)
{
if((s[i]!=' '))
a[j++]=s[i++];
else
{
a[j]='\0';
while(s[++i]!=' ')
{
d[k++]=s[i++];
i--;
}
break;
}}
char c[6]="     ";
strcat(a,c);
strcpy(s,a);
strcat(s,d);
printf("%s\n",s);
}
