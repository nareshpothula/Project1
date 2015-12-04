#include<stdio.h>
int atof(char *p)
{
float num=0;
int i,j,k=1;
float n;
	for(i=0;p[i]!='.';i++)
		num=num*10+(p[i]-48);
	for(i++;p[i];i++)
	{
		num=num*10+(p[i]-48);
		k=k*10;
	}
n=num/k;

	printf("Float Value %f %d\n",n,k);
}
main()
{
	
char a[]="12.3237";
int l=123;
float f;

	atof(a);


}


