#include<stdio.h>
main()
{
char ch,s[19];
int i,c=0;
printf("enter the string....\n");
scanf("%s",s);
printf("enter the char\n");
scanf(" %c",&ch);
for(i=0;s[i];i++)
{
if(s[i]==ch || s[i]==(ch-32) ||  s[i]==(ch+32))
c++;
}
printf("%d\n",c);
}
