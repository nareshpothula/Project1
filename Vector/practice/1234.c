#include<string.h>
#include<stdio.h>
main()
{
	char *a[]={"","One","two","three","Four","Five","Six","Seven","Eight","Nine","ten","eleven","twelve","thirteen","foutreen","fifteen","Sisteen","Seventen","eighteen","ninteen","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
	char *c[]={"hundred","thousand","thousand","lakh","crore"};

	int ten=1,k,d,e,r=0,n=0,i=0,f[15],con,nar=100,crore=1,lakhs=1,thou=1;
	char q[44];
	printf("enter a number...\n");
	scanf("%d",&d);
	e=d;
	sprintf(q,"%d",d);
	printf("q===%s\n",q);
	while(e)
	{	
		r=e%10;
		f[i++]=n*10+r;
		e=e/10;
	}//
	f[i]='\0';
	printf("Enterad num----:%d\n",d);
	i--;
	while(1)
	{


		if(i==8)
		{
			k=f[i];
			if(k!=0)
			{	
				if((crore=k*10)!=10)
				{
					k=(18+(crore/10));
					printf("%s",a[k]);
				}
			}
			i--;
		}
		if(i==7)
		{
			k=f[i];
			if(k!=0)
			{
				if(crore==10)
					printf("%scrore ",a[k+crore]);
				else
					printf("%scrore ",a[k]);
			}
			else
				if(crore!=1)
					printf("%sCrore ",a[k+crore]);
			i--;

		}
		if(i==6)
		{
			k=f[i];
			if(k!=0)
			{	
				if((lakhs=k*10)!=10)
				{
					k=(18+(lakhs/10));
					printf("%s",a[k]);
				}
			}
			i--;
		}
		if(i==5)
		{
			k=f[i];
			if(k!=0)
			{
				if(lakhs==10)
					printf("%slakhs--- and ",a[k+lakhs]);
				else
					printf("%slakhs--- and ",a[k]);
			}
			else
				if(lakhs!=1)
					printf("%slakhs and ",a[k+lakhs]);
			i--;

		}
		if(i==4)
		{
			k=f[i];
			if(k!=0)
			{	
				if((thou=k*10)!=10)
				{
					k=(18+(thou/10));
					printf("%s",a[k]);
				}
			}
			i--;
		}
		if(i==3)
		{
			k=f[i];
			if(k!=0)
			{
				if(thou==10)
					printf("%sthousand ",a[k+thou]);
				else
					printf("%sthousand ",a[k]);
			}
			else
				if(thou!=1)
					printf("%sthousand ",a[k+thou]);
			i--;

		}
		if(i==2)
		{
			k=f[i];
			if(k!=0)
				printf("%shundred ",a[k]);
			i--;

		}
		if(i==1)
		{
			k=f[i];
			if(k!=0)
			{	
				if((ten=k*10)!=10)
				{
					k=(18+(ten/10));
					printf("%s",a[k]);
				}
			}
			i--;
		}
		if(i==0)
		{
			k=f[i];
			if(k!=0)
			{
				if(ten==10)
					printf("%s\n",a[k+ten]);
				else
					printf("%s\n",a[k]);
			}
			else
				if(ten!=1)
					printf("%s\n",a[k]);
			i--;
		break;
		}
	}
}
