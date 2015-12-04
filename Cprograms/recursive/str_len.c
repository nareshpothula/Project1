#include<stdio.h>
int  str_len(char *);
main()
{
char s[19];
int i;
printf("enter the string.....\n");
scanf("%s",s);
i=str_len(s);
printf("%d\n",i);
}
int str_len(char *p)
{

static int k;
if(*p)
{
k++;
str_len(p+1);
}
return k;



}
