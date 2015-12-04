#include<stdio.h>
typedef int(*fp)(int, int);
int sum(int i, int j)
{

return(i+j);
}
main()
{
fp p,q[3];
p=sum;
printf("%d\n",p(10,20));

}
