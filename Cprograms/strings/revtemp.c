#include<stdio.h>
main()
{
char s1[10];
int s,i,j,temp,n;
printf("enter the string.....\n");
scanf("%s",s1);

n=strlen(s1);// formula for string length

printf("%d\n",n);
for(i=0;s1[i];i++)
printf("%c ",s1[i]);
s=i-1; //                     length of string is i
printf("\nreverse way is\n");
for(i=0,j=s;i<j;i++,j--)
{
 temp=s1[i];
 s1[i]=s1[j];
 s1[j]=temp;
//printf("%c ",s1[i]);
}
for(j=0;s1[j];j++)
printf("%c ",s1[j]);
printf("\n");
}
