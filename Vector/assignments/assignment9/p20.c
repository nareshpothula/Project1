#include<stdio.h>
#define PRINT(a,b,c) printf(#a"=%d\t",a);printf(#b"=%d\t",b);printf(#c"=%d\n",c);
main()
{
int  x=4,y=4,z=5;
int a=1,b=2,c=3;
PRINT(x,y,z);
PRINT(a,b,c);
}
