#include<string.h>
#include<stdio.h>
main()
{
	char *a[]={"zero","One","two","three","Four","Five","Six","Seven","Eight","Nine","ten","eleven","twelve","thirteen","foutreen","fifteen","Sisteen","Seventen","eighteen","ninteen"};
	char *b[]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
	char *c[]={"hundred","thousand","thousand","lakh","crore"};

	int k,d,e,r=0,n=0,i=0,f[5],con,nar=100,crore,lakhs,tenlakhs,tenthousand;
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
		if(i==7) //crore
		{
			k=f[i];
			if(k!=0)
				printf("%s%s ",a[k],c[4]);
			i--;
		crore=1;
		}
		if(i==6) //ten lakhs
		{
			k=f[i];
			if((crore==1)||(k!=0))
				if(k==1)
					crore=k*10;
				else
					printf("%s",b[k-1]);
			else
			if(k!=0)
				printf("%s",b[k-1]);
			i--;
			tenlakhs=1;
		}
		if(i==5) //lakhs
		{
			k=f[i];
			if((tenlakhs==1)||(k!=0)){
				if(crore==10)
					printf("%slakhs ",a[k+crore]);
					
				 else if(k!=0)
					printf("%s%s ",a[k],c[3]);
				else
					printf("lakhs ");}
			else
			if(k!=0)
				printf("%s%s ",a[k],b[2]);
			
			i--;
			lakhs=1;
		}
		if(i==4) //ten thousands
		{
			k=f[i];
			if((lakhs==1)||(k!=0))
				if(k==1)
					lakhs=k*10;
				else
					printf("%s",b[k-1]);
					//printf("%s%s ",b[k-1],c[2]);
			else
			if(k!=0)
				printf("%s%s ",b[k-1],c[2]);
			
			i--;
			tenthousand=1;
		}
		if(i==3) //thousands
		{
			k=f[i];
			if(tenthousand==1){
				if(lakhs==10)
					printf("%s--thousand ",a[k+lakhs]);
				else if(k==1)
					printf("%s ",b[k-1]);
				else
					printf("thousand ");}
			else
			if(k!=0)
				printf("%s%s ",b[k-1],c[1]);
			
			i--;
		//	thousand=1;
		}
		if(i==2) //hundred
		{
			k=f[i];
			if(k==0)
				;
			else
					printf("%s%s ",a[k],c[0]);
			i--;
			con=1;
		}
		if(i==1) //tens
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
		if(i==0) //ones
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
