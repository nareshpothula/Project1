#include<stdio.h>
main()
{
char m[19];//=//"embedded";
char s[10];//="edd";
int i,j,c=0;

printf("enter the main string...\n");
scanf("%s",m);

printf("enter the sub string.....\n");
scanf("%s",s);

for(i=0;m[i];i++)
{
	if(s[0]==m[i])
	{
	 for(j=1;s[j];j++) 
			c++;
		{
		 if(s[j]!=m[i+j])
			break;
		}
		
if((s[j]=='\0')&&(s[m]=='\0'))
{
c++;
printf("substring is present\n");
		// return;
}			
	}
		
}
printf("not present\n");
printf("%d\n",c);
}
}
