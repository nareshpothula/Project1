#include<stdio.h>
main()
{
int num,i=0;
printf("enter the num....\n");
scanf("%d",&num);
a:
printf("%d*%d=%d\n",num,i,num*i);
i++;
if(i<=10)
{
goto a;
}
i=0;
num++;
if(num<=20)	
goto a;


}

