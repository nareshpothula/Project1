#include<stdio.h>
//#include<string.h>
main()
{
char ch,s[19];
int i;
printf("enter the char.....\n");
scanf("%c",&ch);
printf("enter the string.....\n");
scanf("%s",s);

for(i=0;s[i];i++)
{
 if(ch==s[i])
  {
   strcpy (s+i,s+i+1);
  i--;
  }
}
printf("after %s\n ",s);
}
