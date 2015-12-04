#include<stdio.h>
main()
{
static int i;
int j=10;
printf("hello.....i=%d j=%d \n",i,j);
i++;
j++;
if(i<3)
main();
printf("hai.....i=%d j=%d  \n",i,j);

}
