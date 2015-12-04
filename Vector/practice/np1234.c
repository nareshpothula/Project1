#include<string.h>
#include<stdio.h>
main()
{
	char *a[]={"zero","One","two","three","Four","Five","Six","Seven","Eight","Nine","ten","eleven","twelve","thirteen","foutreen","fifteen","Sisteen","Seventen","eighteen","ninteen"};
	char *b[]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
	char *c[]={"hundred","thousand","tenthousand","lack"};

	int k,d,e,r=0,n=0,i=0,f[5],con,nar=100;
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
	printf("Enterad num:%d\n",d);
	i--;
	while(1)
	{
		if(i==3)
		{
			k=f[i];
			if(k==0)
				;
			else	
				printf("%s%s ",a[k],c[1]);
			i--;
		}
		if(i==2) 
		{
			k=f[i];
			if(k==0)
				;
			else
					printf("%s%s ",a[k],c[0]);
			i--;
			con=1;
		}
		if(i==1)
		{
			k=f[i];
			if(k==0)
				;
			else
			{
				if(k==1)	
					nar=k;
				else
				{
					if(con==1)
					{
						printf(" and %s ",b[k-1]);
					}
					else	
						printf("%s ",b[k-1]);

				}
			}
			i--;
		}
		if(i==0)
		{
			k=f[i];
			if(nar!=100)
			{	k=k+(nar*10);
				printf(" and %s",a[k]);}
			else
			{
			if(k==0)
				;
			else
				printf("%s ",a[k]);
			}
			i--;
		}
		if(i==-1)
			break;
	}
	printf("\n");
}
