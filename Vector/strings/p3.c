#include<stdio.h>
main()
{
char s1[10];
int i;
printf("enter the string....\n");
scanf("%s",s1);
for(i=0;i<10;i++)   // for whole values in string include invalide values also.;
 //for(i=0;s1[i]!='\0';i++)     //for(i=0;s1[i];i++)
printf("%c ",s1[i]);
printf("\n");
}
