#include<stdio.h>
main()
{
int num,i=0,j;
printf("enter the num....\n");
scanf("%d",&num);
for(num;num<=4;num++)
{
	

 	 for(j=0;j<=10;j++)
	 printf("%d*%d=%d\n",num,j,num*j);
	
printf("\n");
}
}
