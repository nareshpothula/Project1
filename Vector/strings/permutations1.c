#include<stdio.h>
#include<string.h>
main()
{
char a[22] ,temp,p[99],q[99],*r;
int l,i,j;
printf("Enter the string....\n");
scanf("%s",a);

l=strlen(a);

for(i=0,j=0;j<2;j++)
{
temp=a[i];
a[i]=a[i+1] ;
a[i+1]=temp;

strcpy(p,a);

temp=p[i+1];
p[i+1]=p[i+2] ;
p[i+2]=temp;

strcpy(q,a);

temp=q[i+2];
q[i+2]=q[i] ;
q[i]=temp;
printf("%s\n%s\n%s\n",a,p,q);

}

}

 
