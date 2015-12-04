#include<stdio.h>
main()
{
int j,k;
char s[150];
printf("enter the string...\n");
gets(s);
///////////////////////////////////////////
for(j=0;s[j];j++)
{
	if((s[j]==' ')&&(s[j+1]==' '))
	{
		for(k=j;s[k];k++)
		s[k]=s[k+1];
		s[k]='\0';
		j--;
	}
}


////////////////////////////////////////////
printf("the new string is ...\n");
printf("%s\n",s);

}
