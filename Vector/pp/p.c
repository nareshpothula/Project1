#include<stdio.h>
main(int argc,char **argv,char**s)
{
char i;
for(i=0;s[i];i++)
{
printf("%s\n",s[i]);
sleep(2);
}
return 0;
}


