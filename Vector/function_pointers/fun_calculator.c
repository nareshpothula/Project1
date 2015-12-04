#include<stdio.h>
//..........................................
int sum(int i,int j)
{
printf("in sum....\n");
return (i+j);
}
//......................................
int sub(int i,int j)
{
printf("in sub....\n");
return (i-j);
}
//...................................
int mul(int i,int j)
{
printf("in mul....\n");
return (i*j);
}
//....................................
int div(int i,int j)
{
printf("in div....\n");
return (i/j);
}
//....................................

main()
{
int i=10,j=20,k;
int(*p)(int,int);
p=sum;
                                 //k=sum(i,j);
                                //printf("%d\n",k);
k=p(i,j);
printf("%d\n",k);

p=sub;
k=p(i,j);
printf("%d\n",k);
 
p=mul;
k=p(i,j);
printf("%d\n",k);

p=div;
k=p(i,j);
printf("%d\n",k);
}
//....................................
