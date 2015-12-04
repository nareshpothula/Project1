#include<stdio.h>
#define DEBUG(k,l) printf(#l"\n",k)
main()
{
int x=4;
float a=3.22;
char ch='A';
DEBUG(x,%d);
DEBUG(a,%f);
DEBUG(ch,%c);
}
