#include<stdio.h>
int zap(int n)
{
if(n<=1) 
return 2;
else 
return(zap(n-3)+zap(n-1));
}
main()
{
//zap(6);
printf("%d\n",zap(6));
}
