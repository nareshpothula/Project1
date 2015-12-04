#include<stdio.h>
char*  my_strstr(char* , char*);
main()
{
char m[19],s[19] ;
char *r;
printf("enter the strings\n");
scanf("%s%s",m,s);
r=my_strstr(m,s);
//printf("%d\n",r);
if(r==NULL)
printf("string is not present\n");
else 
printf("string is  present  %s\n",r);
}
char* my_strstr(char*m,char*s)
{
int i,j,ch,r;
for(i=0;m[i];i++)
 {
  if(s[0]==m[i])
	{				Naresh Naidu
	 for(j=1;s[j];j++)
		{
		 if(s[j]!=m[i+j])
		 break;
		}

		 if(s[j]=='\0')
		  return &m[i] ;
				
	}
}
return NULL;

}




