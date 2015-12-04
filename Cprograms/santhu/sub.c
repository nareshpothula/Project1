#include<stdio.h>
main()
{
	int a,b;
	    printf("enter two num for addition\n");
	scanf("%d%d",&a,&b);
	printf("addition=%d\n",add(a,b));
	b=add(~b,1);
	printf("Subtraction of a b=%d\n",add(a,b));

}
add(int x,int y)
{
	int a,b;
	do
	{
		a=x&y;
		b=x^y;
		x=a<<1;
		y=b;
	}while(a);
	return b;
}

