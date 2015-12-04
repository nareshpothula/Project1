#include<stdio.h>
main()
{
int a=0,d=0,c=0,n,k=0,l=0,i,j,b=1;
//c=a+b;
while(1)
{
a=b;
b=c;
c=a+b;
printf("c=%d\n",c);
l=0;
for(i=2;i<=c;i++)
{
	if((c%i)==0)
	{
	++l;
	}
}

if(l==1)
{
printf("%d\t",c);
d++;
}

if(d==10)
{
printf("\n");
return;
}
}

}
