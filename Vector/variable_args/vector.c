#include<stdio.h>
main()
{
int c=0,i;
char a[]="ve\0ctor\n\0vector\0";
for(i=0;printf(a+i);i++)
{
c++;
printf("%d\n",c);
}


}

