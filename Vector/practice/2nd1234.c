#include<string.h>
#include<stdio.h>
char *a[]={"","One","two","three","Four","Five","Six","Seven","Eight","Nine","ten","eleven","twelve","thirteen","foutreen","fifteen","Sisteen","Seventen","eighteen","ninteen","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
char *c[]={"","","hundred","thousand","thousand","lakh","lakhs","crore","crore","hundredCrores"};
int flag=0;
char q[100];
int k,d,e,r=0,n=0,i=0,f[215],count=0,j=0;
main()
{
	printf("enter a number...\n");
	scanf("%d",&d);
	e=d;
	sprintf(q,"%d",d);
	while(e)
	{	
		r=e%10;
		f[i++]=n*10+r;
		e=e/10;
	}
	f[i]='\0';
	printf("Enterad num----:%d\n",d);
	i--;
	printf("i=%d\n",i);
	if(i>2)
		thousand();

	if(i==2)
	{
		k=f[i];
		if(k!=0)
			printf("%shundred ",a[k]);
		i--;
	}
	if(f[i]||f[i-1]||f[i+1])
		printf(" and ");

	thousand();
	printf("\n");
}

int thousand ()
{
	while(i>2||i==1||i==0)
	{

		flag=1;
		count=0;
		if(((i%2)==0)||i==1)   //i==even  hundred tenthousand tenlakhs
		{
			k=f[i];
			if(k!=0)
			{	
				if((flag=k*10)!=10)
				{
					k=(18+(flag/10));
					printf("%s",a[k]);
				}
			}
			else
				count=1;
			i--;
		}
		if(((i%2)!=0)||i==0) //i==odd  ten thousand lakh
		{
			k=f[i];
			if(k!=0)
			{
				count=1;
				if(flag==10)
					printf("%s%s ",a[k+flag],c[i]);
				else
					printf("%s%s ",a[k],c[i]);
			}
			else
				if(count!=1)
					printf("%s ",c[i]);
			i--;
		}
	}


}

