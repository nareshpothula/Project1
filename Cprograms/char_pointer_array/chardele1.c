#include<stdio.h>
main()
{
char ch,s[19];
int i=0,j=0;
printf("enter char....\n");
scanf("%c",&ch);
printf("enter the string.....\n");
scanf("%s",s);

for(j=i+1;s[j];j++)
	{
	if(ch==s[i])
	s[j]=s[j+2];
	}

		
		
	printf("%s\n",s);
}
