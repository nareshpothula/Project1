#include<stdio.h>
main()
{
int i,j,number;

printf("\nEnter a no. : " );
scanf("%d",&number);
printf("\nEnter the two positions : " );
scanf("%d%d",&i,&j);
i--;
j--;

if( ((number & (1<<i)) >>i)!=((number&(1<<j))>>j) )
{
number = number ^ (1<<j);
number = number ^ (1<< i);
}
printf("The resultant no is %d",number);
}
