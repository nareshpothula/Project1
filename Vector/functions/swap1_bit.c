#include<stdio.h>
void print_binary(int);
int swap_bit(int );
main()
{
int num,p;
printf("enter the num\n");
scanf("%d",&num);
print_binary(num);
p=swap_bit(num);
printf("%d\n",p);
print_binary(p);
printf("\n");


}
int swap_bit(int p)
{
int i,j,x,y;
for(i=0,j=31;i<j;i++,j--)
 {
  x=p&1<<i;
  y=p&1<<j;
 if(x!=y)
 {
  p=p^1<<i;
  p=p^1<<j;
 }
}
return p;
}

void print_binary(int n)
{
int i;
for(i=31;i>=0;i--)
{
if(n&1<<i)
printf("1");
else
printf("0");
}
//return n;
printf("\n");
}






