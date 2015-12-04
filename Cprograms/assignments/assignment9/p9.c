//#include<stdio.h>
#define CUBE(x) x*x*x
main()
{
   int a,b=3;
//a=CUBE(b++);
//printf("a=%d b=%d\n",a,b);
a=CUBE(++b + ++b);
printf("a=%d b=%d\n",a,b);
}
