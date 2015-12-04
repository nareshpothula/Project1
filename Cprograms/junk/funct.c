#include<stdio.h>
main()
{
FILE *ptr;
char i;
ptr=fopen("inc.c","r");
while((i=fgetc(ptr))!=NULL)
printf("%c\n",i);
}

