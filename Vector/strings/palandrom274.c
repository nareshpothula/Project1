#include<stdio.h>
main()
{
char str[10];
int i=0,j,c;
printf("enter the word :\n");
scanf("%s",str);
j=strlen(str)-1;
while(i<=j)
{
if(str[i]==str[j])
c=1;
else
{
c=0;
break;
}
i++;
j--;
}
if(c==1)
printf("WORD IS PALENDROME");
else
printf("not palendrome");
}
