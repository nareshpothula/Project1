#include<stdio.h>
//typedef union
union
{
int a;
char b[66];
float c;
}x;

main()
{
//Union x,y = {100};
//Union x;
x.a = 50;
strcpy(x.b,"hellj");
x.c = 27.79;
printf("Union x : x.a=%d x.c=%lf   x.b= %s  \n",x.a,x.c,x.b);
//printf("Union y : %d %s %f \n",y.a,y.b,y.c);
}


