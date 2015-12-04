#include<stdio.h>
main()
{
char s1[10],s2[10],s3[10],s[50];
int i,j,k=0,l;
printf("enter the string s1......\n");
scanf("%s",s1);

printf("enter the string s2.....\n");
scanf("%s",s2);
 
printf("enter the string s3.....\n");
scanf("%s",s3);

{
for(i=0;s1[i];i++)
s[k++]=s1[i];
s[k++]=' ';

for(j=0;s2[j];j++)
s[k++]=s2[j];
s[k++]=' ';


for(l=0;s3[l];l++)
s[k++ ]=s3[l];
s[k]='\0';
}


printf("%s ",s);
}



