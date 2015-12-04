#include<stdio.h>
struct A
{
int i;
char ch;
float f;
};
main()
{
//struct A a1={21,'w',32.44};
struct A a1={.ch='w'};// by using . operator we can initilize the data 
//a1.i=10;
//a1.ch='a';
//a1.f=32.32;
printf("%d %c %f\n",a1.i,a1.ch,a1.f);
}
