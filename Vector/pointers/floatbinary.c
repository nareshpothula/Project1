#include<stdio.h>
main()
{
float f=10;
int i,*ip;
ip=&f;// int pointer taking address of float data type.
for(i=31;i>=0;i--)
{
if((*ip)&1<<i) 
//if(f&1<<i)
printf("1");
else
printf("0");
if(i%8==0)
printf(" " );
}

printf("\n");
}
