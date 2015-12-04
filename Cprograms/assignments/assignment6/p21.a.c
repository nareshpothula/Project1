#include<stdio.h>
int my_strcmp(char*,char*);
main()
{
char s1[19],s2[19],result;
printf("enter string s1 and s2....\n");
scanf("%s%s",s1,s2);
result=my_strcmp(s1,s2);

if(result==0)
printf("strings are same");
else
printf("strings are not same");
printf("%d\n",result);
}

int my_strcmp(char*s1,char*s2)

{
int i;
for(i=0;s1[i]||s2[i];i++)
{
if(s1[i]==s2[i])
  continue;

else if (s1[i]>s2[i])
 return 1;
else if(s1[i]<s2[i])
return -1;
}
}
   
