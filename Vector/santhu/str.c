#include<string.h>
#include<stdio.h>
main()
{
	char a[50],b[50];
	int i,j,k;
	printf("Enter Two strings\n");
	scanf(" %s %s",a,b);
	delete(a);
	delete(b);
	for(i=0;a[i];i++)
	{
		for(j=0;b[j];j++)
			if(a[i]==b[j])
			{
				for(k=j;b[k];k++)
					b[k]=b[k+1];
			}
	}
	j=strlen(b);
	for(i=0;a[i];i++)
		b[j+i]=a[i];
	printf("Final Sring=%s\n",b);
}
int delete(char *a)
{
	int i,j,k;
	for(i=0;a[i];i++)
	{
		for(j=i+1;a[j];j++)
			if(a[i]==a[j])
			{
				for(k=j;a[k];k++)
					a[k]=a[k+1];
				j--;
			}
	}
}
