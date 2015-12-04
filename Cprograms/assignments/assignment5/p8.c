#include<stdio.h>
main()
{
char s[219];
int i,j,k;
printf("Enter the string.....\n");
gets(s);
for(i=0;s[i];i++)
{
if((s[i]==' ')&&( s[i+1]==' '))
 {
   for(k=i;s[k];k++)
	  s[k]=s[k+1];
	   s[k]='\0';
	   i--;
	

 } 
}
printf("%s\n",s);
}




