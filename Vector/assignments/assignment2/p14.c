#include<stdio.h>
main()
{
int x=33,y=23;
x= y++ + x++;
y=++y + ++x;
printf("%d %d\n",x,y);


}
