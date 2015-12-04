#include<stdio.h>
main()
{
static char *s[]={"black","white","yellow","orange","pink"};
char **ptr[]={s+3,s+2,s+1,s,s+1},***p;
p=ptr;
*p++;
printf("%s\n",**p+2);
}
