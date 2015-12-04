#include<stdio.h>
int sum(int ,int );
int call(int (*p) (int,int),int ,int );
main()
{
int i=10,j=20,k;
//int *p(int ,int);
k=call(sum,i,j);
printf("%d\n",k);
}
int sum(int i,int j)
{
printf("in sum .....\n");
return (i+j);
}
int call(int (*p)(int,int),int i,int j)
{
printf("In call .....\n");
return ( p(i,j));
}



/*
main()
{
int i=10,j=20,k;
int *p(int ,int);
k=call(sum,i,j);
printf("%d\n",k);
}
*/
