#include<stdio.h>

int zap(int n);
main()
{

int i=5;

printf("zAP vALUE=%d\n",zap(6));
}


int zap(int n)
{


if(n<=1)
return 1;
else
return(zap(n-2)+zap(n-1));


}


