#include<stdio.h>
main()
{
double f=7.7;
char *cp,i,j,flag=0,k=0;
cp=&f;
cp=cp+7;
for(j=0;j<=7;j++)
{
 for(i=7;i>=0;i--)
  {
   if(*cp&1<<i)
	
	{k++;
   printf("1");
	}
	
      else
	{
	k++;
      printf("0");
	}
   	if(flag!=1)
	if(j==4)
	{
	flag=1;
    printf(" ");
	}

  }
cp=cp-1;
}
printf("\n%d\n",k);
}
