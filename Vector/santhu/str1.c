#include<string.h>
#include<stdio.h>
main()
{
	char a[50],b[50];
	int i,j;
	printf("Enter Two strings\n");
	scanf(" %s %s",a,b);
	delete(a);
	delete(b);
	for(i=0;a[i];i++)
	{
		for(j=0;b[j];j++)
			if(a[i]==b[j])
			{
				strcpy(b+j,b+j+1);
				break;	
			}
	}
	strcat(b,a);
	printf("Final Sring=%s\n",b);
}
int delete(char *a)
{
	int i,j;
	for(i=0;a[i];i++)
	{
		for(j=i+1;a[j];j++)
			if(a[i]==a[j])
			{
				strcpy(a+j,a+j+1);
				j--;
			}
	}
}
