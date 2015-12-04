#include<stdio.h>
#include<string.h>
main()
{
char a[22] ,temp,p[99],q[99],*r;
int l,i,j,c=0,k;
printf("Enter the string....\n");
scanf("%s",a);
printf("\n\n");

l=strlen(a);
k=l;
abc:
for(i=0,j=0;j<l;i++,j++)
{
temp=a[i];
a[i]=a[i+1] ;
a[i+1]=temp;

printf("%s\n",a);
if(i==(k-2))
{
   c++;
   if(c<=(k-1))
   goto abc;

   else
   break;
}
}


}

