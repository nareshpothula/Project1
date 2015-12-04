#include<stdio.h>
int fact(int);
main()
{
int n,p;
printf("enter the number....\n");
scanf("%d",&n);
fact(n);
printf("%d\n",n);

}

int fact(int n)
{
if(n==0)
return 1;
else
return (n *fact(n-1));
}
