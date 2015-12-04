#include<stdio.h>
int a[5],t=-1;
void push(int n)
{
	t++;  
	//   printf("t=%d\n",t);                         // increment t;
	if(t==5) 
	{                                          //check over flow fun
		printf("Stack is over Flow.....\n");
		t--;
	}
	else                             // if cond file insert elements
	{
		a[t] =n;
	}
}
void pop()
{
	if(t==-1)
		printf("Stack is empty ....\n");
	else
		a[t]=0;

	t--;
}
main()
{
	int n,i,k;
	for(i=0;i<6;i++)
	{
		printf("Enter the enement...\n");
		scanf("%d",&n);
		push(n);
	}
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0;i<6;i++)
		pop();
	printf("\n");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n");
}
