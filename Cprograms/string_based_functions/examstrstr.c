#include<stdio.h>
char*  my_strstr(char* , char*);
main()
{
char m[19],s[19] ;
char *r;
printf("enter the strings\n");
scanf("%s%s",m,s);
my_strstr(m,s);
//printf("%d\n",r);
if(r==NULL)
printf("string is not present\n");
else 
printf("string is  present  %s\n",r);
}
char* my_strstr(char*m,char*s)
{
int i=0,j,ch,r,c=0;
a:
for(;m[i];i++)
 {

  if(s[0]==m[i])
	{		
	 for(j=1;s[j];j++)
		{
		 if(s[j]!=m[i+j])
		 break;
		}
		
		 if(s[j]=='\0')
		{ 
		c++;
		goto a;
		//  return &m[i] ;
		}		
	}
}
printf("%d\n",c);
//return NULL;

}




