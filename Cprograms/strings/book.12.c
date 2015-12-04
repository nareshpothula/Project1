#include<stdio.h>
main()
{
char str1[12]="Good ";
char str2[10]="Evening";
strcpy(str1+strlen(str1),str2);
printf("%s\n",str1);
}

