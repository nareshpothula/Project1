#include<stdio.h>
main()
{
char s1[19],s2[19];
int i,s,j,temp;
printf("enter  the string....\n");
scanf("%s",s1);

s=strlen(s1);

printf("%d\n",s);
//copy to destination with out disturb the values
for(i=0;s1[i];i++)
{
s2[i]=s1[i];
}
s2[i]='\0';

for(i=0;s2[i];i++)
printf("%c ",s2[i]);


// copy to dest rev order no distb of values
printf("\nreverse order\n");

for(i=s-1,j=0;i>=0;i--,j++)
{
temp=s1[i];
s1[i]=s2[j];
s2[j]=temp;
}
s2[j]='\0';

for(j=0;s2[j];j++)
printf("%c ",s2[j]);
}

