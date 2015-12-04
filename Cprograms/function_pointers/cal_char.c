#include<stdio.h>
int sum(int i,int j);
int sub(int i,int j);
int mul(int i,int j);
int div(int i,int j);
main()
{                                         
int i=10,j=20,k,m;
int (*p[4])(int,int);
//int op;
char op,a[]="+-*/";

p[0]=sum;
p[1]=sub;
p[2]=mul;
p[3]=div;
option:
printf("enter the option :\n");
scanf(" %c",&op);

for(m=0;a[m];m++)
{
if(op==a[m])
  {
  k=p[m](i,j);
  printf("%d\n",k);
  break;
  }
if(m==3)
{
printf("invalid option\n");
goto option;
}
}
//k=(p[op-1])(i,j);
//else
//printf("Enter valid option (0-4)\n");
//printf("%d\n",k);
}

int sum(int i,int j)
{
printf("sum:\n");
return (i+j);
}
int sub(int i,int j)
{
printf("sub:\n");
return (i-j);
}

int mul(int i,int j)
{
printf("mul:\n");
return (i*j);
}

int div(int i,int j)
{
printf("div:\n");
return(i/j);
}

