#include<stdio.h>
main()
{
int num;
printf("enter the number....\n");
scanf("%d",&num);
(num&1<<31)?printf("-ve"):printf("+ve");

//num%2?printf("odd"):printf("even");


}
