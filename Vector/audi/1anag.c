#include<string.h>
#include<stdio.h>
int anagram(char*,char*);
main()
{
	char p[55],q[55],r[55],k;

	printf("Enter first string \n");
	gets(p);
	printf("Enter Second string \n");
	gets(q);
		printf("%s and %s \n",p,q);
	strcpy(r,q);
	if(strlen(p)!=strlen(q))
	{
		printf("%s and %s is not Anargam\n",p,q);
		return 0;
	}
	k=anagram(p,q);
}
int anagram(char *p ,char *s)
{
	int i=0,j=0;
	char r[55];
	strcpy(r,p);
	while(*p)
	{

		for(i=0;s[i];i++)
		{
			if(*p==s[i])
			{
				strcpy(s+i,s+i+1);
				break;
			}
		}
		printf(" s=%s \n",s);
		p++;
	}
	printf("Bye>");

	if(!strcmp(s,"")==0)
		printf("\n\n%s and %s is not Anargam\n",p,r);
	else
		printf("\n\n  %s and %s is Anargam !!\n",p,r);
}

