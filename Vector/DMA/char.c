#include<stdio.h>
#include<stdlib.h>
main()
{
int i;
char *s,p;
	s=malloc(10);//u r catch with same pointer 
printf("enter the data:");
scanf("%s",s);//scaning string
for(i=0;s[i];i++)
printf("%c ",s[i]);//printing the char by char
}
