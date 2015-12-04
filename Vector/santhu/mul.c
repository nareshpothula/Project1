#include<stdio.h>
main()
{
	int a,b,result;     
	printf("nEnter the numbers to be multiplied\n :");
	scanf("%d%d",&a,&b);         // a>b
	result=0;
	while(b != 0)               // Iterate the loop till b==0
	{
		if (b&01)                // Bitwise &  of the value of b with 01
		{
			result=result+a;     // Add a to result if b is odd .
			printf("Res=%d\n",result);
		}
		printf("a<<=1=%d\n",a<<=1);                   // Left shifting the value contained in 'a' by 1 
		// multiplies a by 2 for each loop
		printf("b>>=1=%d\n",b>>=1);                   // Right shifting the value contained in 'b' by 1.
	}
	printf("nResult:%d\n",result);
}
