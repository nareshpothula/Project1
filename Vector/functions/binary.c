#include<stdio.h>
void print_binary (int);
int  count_bit(int);

main()
{
int num,c=0,n;
printf("enter the num......\n");
scanf("%d",&num);

print_binary(num);
printf("\n");

n=count_bit(num);
printf("%d\n",n);
}

void print_binary(int n)
{
int i;
for(i=31;i>=0;i--)
if(n&1<<i)
printf("1");
else
printf("0");
}

int count_bit(int n)
{
int c=0,i;
for(i=0;i<=31;i++)
if(n&1<<i)
c++;
return c;
}
































