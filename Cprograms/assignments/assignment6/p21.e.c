#include<stdio.h>

int my_strchr(char*, char);
main()
{
char ch,s[19],*p;
int i=0;
printf("enter the string....");
scanf("%s",s);
printf("enter the char...");
scanf(" %c",&ch);
i=my_strchr(s,ch);
if(i=='\0')
printf("char is not found");
else
printf("char is found %d\n",i);

}

int  my_strchr(char *p,char ch)
{
int i;
for(i=0;p[i];i++)

{
if(p[i]==ch)
 return (i);
}
}
