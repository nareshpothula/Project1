#include<stdio.h>

extern int fun(int  **p)
{
int g;
printf("hai &i=%d\n",++(**p));
return (**p++);
printf("hello %d\n",*p);
//return(p);
}

main()
{
int i=10;
int *p=&i,k;
printf("&i=%d\n",&i);
k=fun(&p);
printf("k=%d\n",k);
printf("i=%d\n",i);
}



















































