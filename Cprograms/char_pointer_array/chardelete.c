#include<stdio.h>
main()
{
char ch,s[19];
int i,j;
printf("enter char....\n");
scanf("%c",&ch);
printf("enter the string.....\n");
scanf("%s",s);

for(i=0;s[i];i++)
	{
	if(ch==s[i])
		{
		 for(j=i;s[j];j++)
			{
			s[j]=s[j+1];
			}
		}
	}
printf("after %s\n",s);
}
