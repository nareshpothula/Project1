#include<string.h>
#include<stdio.h>
main()
{
char *a[]={"zero","One","two","three","Four","Five","Six","Seven","Eight","Nine"};
char *b[]={"ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
char *c[]={"hundred","thousand","tenthousand","lack"};
char *x[]={"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen"};
int k,d,e,r=0,n=0,i=0,f[5],nn=0,l=0;
char q[44];
printf("enter a number...\n");
scanf("%d",&d);
e=d;
sprintf(q,"%d",d);
printf("q===%s\n",q);
while(e)
{	
	r=e%10;
	n=n*10+r;
	e=e/10;
}//
while(n)
{
	r=n%10;
	f[i++]=nn*10+r;
	n=n/10;
}
printf("Enterad num:%d\n",i);
l=--i;
i=0;	
while(1)
{

	if(l==5)
	{
	k=(f[0]*10)+f[1]-11;
	printf("%slack ",x[k]);
	l=l-2;            /////15 thousand
	i=i+2;;
	}
	if(l==4)
	{
	k=(f[0]*10)+f[1]-11;
	printf("%sThousand ",x[k]);
	l=l-2;            /////15 thousand
	i=i+2;;
	}
	if(l==3)
	{
		k=f[i];
		printf("%s%s ",a[k],c[1]);
		i++;
	l--;
	}
	if(l==2) 
	{
		k=f[i];
		if(k==0)
		;
		else
		printf("%s%s and ",a[k],c[0]);//////////// hundred
		i++;
		l--;
	}
	if(l==1)
	{
		k=f[i];
		if(k==0)
			;
		else
			printf("%s ",b[k-1]);
		i++;
		l--;
	}
	if(l==0)
	{
		k=f[i];
		if(k==0)
		;
		else
		printf("%s ",a[k]);
		i++;
		l--;
	}
	if(l==-1)
		break;
}
printf("\n");
}
