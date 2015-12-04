#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
char *p,*q;
int i,j,k;
p=malloc(222);
q=malloc(222);
printf("Enter Two strings\n");

scanf("%[^\n] %[^\n]",p,q);

if(strlen(p)==strlen(q))
{
printf("Enterd in to loop\n");

	for(i=0;p[i];i++)
	{
		for(j=0;q[j];j++)
		{
			if(p[i]==q[j])
			{
				strcpy(q,q+1);
				k--;
			}
			printf("After Deleting Char in loop %s\n",q);
		}

	}
}
else
printf("Given String is Not Anagram\n");
}
