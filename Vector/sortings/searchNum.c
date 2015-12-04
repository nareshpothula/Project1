#include<stdio.h>
main()
{
	int i=0;
	int op,k,num=20;
	printf("Enter range , your selected num in b/w that range...\n");
	scanf("%d",&op);
if(op>num)
{
printf("your option is grater the ur range\n");
return;
}
abc:
	if(op==num)
	{
		printf("num of chances is=%d\n",i);
		return;
	}
	if(num>op)
	{
		i++;
		num=num/2;
		goto abc;
	}
	if(num<op)
	{
		i++;
		k=num/2;
		if(k%2==1)
		num=num+1;
		else
		num=num+k;

		goto abc;
	}
}

