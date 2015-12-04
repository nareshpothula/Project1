#include"stdio.h"

void main()
{
	int a,b,sum;
	char *p;
	printf("Enter 2 values : ");
	scanf("%d%d",&a,&b);
	p = (char *)a;
	sum = (int)&p[b];
	printf("\nSum : %d",sum);
}
