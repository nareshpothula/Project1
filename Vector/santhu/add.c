#include<stdio.h>
main()
{
	int a,b;
	    printf("enter two num for addition\n");
	scanf("%d%d",&a,&b);

	printf("addition=%d\n",add(a,b));

}
add(int x,int y)
{
	int a,b;
	do
	{
		printf("a=x&y=%d\n",a=x&y);
		printf("b=x^y=%d\n",b=x^y);
		printf("x=a<<1=%d\n",x=a<<1);
		printf("y=b=%d\n\n\n",y=b);
	}while(a);
	return b;
}
