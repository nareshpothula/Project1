#include<stdio.h>
main()
{
int i=1,j,k;
for(k=0;k<=15;k++)
{
printf("%d=",i);
for(j=31;j>=0;j--)
   {
    (i&1<<j)?printf("1"):printf("0");
    if((j)%8==0)
    printf(" ");
   }
i++;

printf("\n");
}
}
