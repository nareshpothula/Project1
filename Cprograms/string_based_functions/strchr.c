#include<stdio.h>
#include<string.h>
main()
{
int i;
char s[]="embedded";
char *p,ch;
printf("enter the char\n");
scanf("%c",&ch);
p=strchr(s,ch);
if(p==NULL)
printf("char is not found\n");
else
printf("char is present\n",s);
for(i=0;s[i];i++)
if(s[i]==ch)
printf("Position of the char %c is %d\n",ch,i);
}
