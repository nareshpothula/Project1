#include<stdio.h>
int sum(int i,int j)
{
printf("in sum....\n");
return (i+j);

}
main()
{
int i=10,j=20,k;
int(*p)(int,int);
p=sum;
k=sum(i,j);
printf("%d\n",k);
k=p(i,j);
printf("%d\n",k);
}
