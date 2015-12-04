#include<stdio.h>
#include<string.h>
main()
{
char s1[19],s2[19];
int result;
printf("enter two strings....\n");
scanf("%s%s",s1,s2);
//gets(s2);
result=strcmp(s1,s2);// this strcmp is dealing with ascii values so result is like that
printf("%d\n",result);
}

