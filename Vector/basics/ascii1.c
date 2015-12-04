#include<stdio.h>
main()
{
int i,a;
printf("enter the ascii value....\n");
scanf("%d",&i);
a:
printf("%c\n",i);
i++;
if((i>=65&&i<=90)||(i>=97&&i<=122))
goto a;
printf("\n");
}

