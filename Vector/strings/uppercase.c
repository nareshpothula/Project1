#include<stdio.h>
main()
{
char s1[19];
int i,j;
printf("enter the string.....\n");
scanf("%s",s1);
 
for(i=0;s1[i];i++)
{
if((s1[i]>='a' ) && (s1[i]<='z'))
s1[i]=s1[i]-32;
}
s1[i]=0;
printf("upper case letter is\n");
for(i=0;s1[i];i++)
printf("%c ",s1[i]);
}
