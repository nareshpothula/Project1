#include<stdio.h>
int *a,t=-1;
static int k,n1;
void push(int n)
{
	static int i;
	if(i==0)
	{
		i++;
		a=malloc(n1*4);
	}
	t++;  
	if(t==n1) 
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
	{
		a[t]=0;
		t--;
	}
}
print()
{
	int i;
	for(i=0;i<=t;i++)
		printf("%d\t",a[i]);
	printf("\n");

}
main()
{
	int n,i,k;
	printf("Enter ur stack limit..\n");
	scanf("%d",&n1);
	while(1)
	{
		printf("1.push\n2.pop\n3.show\n4.exit\n.");
		scanf("%d",&i);
		switch(i)
		{
			case 1:    {
					   printf("Enter the enement...\n");
					   scanf("%d",&n);
					   push(n);
				   }
				   break;
			case 2:
				   pop(n);
				   break;
			case 3:
				   print();
				   break;
			case 4:
				   exit(0);
		}
	}
}
