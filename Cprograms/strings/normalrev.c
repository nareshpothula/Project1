#include<stdio.h>
main()
{
char s1[10];
int i;
printf("enter the string.....\n");
scanf("%s",s1);
// normal way printing
printf("\nnormal way is\n");

for(i=0;s1[i];i++)
printf("%c ",s1[i]);

// reverse way printing
printf("\nreverse way is\n");

for(i=i-1;i>=0;i--)
printf("%c ",s1[i]);

}


