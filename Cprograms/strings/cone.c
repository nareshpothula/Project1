#include<stdio.h>
main()
{
static char * s[]={"ice","green","cone","please"};
char **ptr={s+3,s+2,s+1,s};
char  ***p;
p=ptr;
//printf("%s\n",*++ptr);
printf("%s\n",*--*++ptr+3);
//printf("%s\n",*p[-2]+3);
//printf("%s\n",p[-1][-1]+3);
//printf("%s\n",p[-2][-1]+2);

}
