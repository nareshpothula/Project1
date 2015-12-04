#include<stdio.h>
void my_strcpy(char*, char*);
main()
{
	char s[10]="naresh";
	printf("before s=%s\n",s);
	my_strcpy(s,s+2);
	printf("after s=%s \n",s);
}
void my_strcpy(char*d, char*s)
{
	int i;
	for(i=0;s[i];i++)
	{
		d[i]=s[i];
	}
	d[i]='\0';
}
