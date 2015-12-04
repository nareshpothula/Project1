#include<stdio.h>

char* my_strchr(char*, char);
main()
{
char ch,s[19],*p;
int i;
printf("enter the string....");
scanf("%s",s);
printf("enter the char...");
scanf(" %c",&ch);
p=my_strchr(s,ch);
if(p==NULL)
printf("char is not found");
else
printf("char is found%s\n",p);

}

char * my_strchr(char *p,char ch)
{
int i;
for(i=0;p[i];i++)

{
if(p[i]==ch)
 return (&p[i]);
}
}
