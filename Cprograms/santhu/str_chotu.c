#include<stdio.h>
main()
{
char s1[120],s2[20];
printf("enter s1 and s2\n");
scanf("%s %s",s1,s2);
rm_repeat(s1);
rm_repeat(s2);
printf("%s\n",s1);
printf("%s\n",s2);
strcat(s1,s2);
rm_repeat(s1);
printf("final is %s\n",s1);
}
rm_repeat(char *s)
{
int i,j,k;
for(i=0;s[i];i++)
{
for(j=i+1;s[j];j++)
{
  if(s[i]==s[j])
   {
    for(k=j;s[k];k++)
       s[k]=s[k+1];
     i--;
   }
}
}
}
