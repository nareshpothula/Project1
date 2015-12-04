#include<stdio.h>
void add(int i,int j);
void sub(int i,int j);
void mul(int i,int j);
void div(int i,int j);
main()
{
	int i,j;
	printf("enter the numbers.....\n");
	scanf(" %d%d",&i,&j);
	add(i,j);
	sub(i,j);
	mul(i,j);
	div(i,j);
}
void add(int i,int j)
{
	int k;
	k=i+j;
	printf("addition is:%d\n",k);
}
void sub(int i,int j)
{
	int k;
	k=i-j;
	printf("subtration is:%d\n",k);
}
void mul(int i,int j)
{
	int k;
	k=i*j;
	printf("multiplication is:%d\n",k);
}
void div(int i,int j)
{
	int k;
	k=i/j;
	printf("division is:%d\n",k);
}
