#include<stdio.h>
void mystrcat1(char*p,int );
main()
{
char a[10]="abcdef";
int i,j,k;
for(i=0;a[i];i++);
mystrcat1(a,i);
//printf("%s\n",mystrcat1(a,i));
}
void mystrcat1(char*p,int n)
{
int i,j;
char temp;
for(i=0,j=n-1;i<=j;i++,j--)
{
temp=p[i];
p[i]=p[j];
p[j]=temp;
}
//p[i]='\0';
printf("%s\n",p);
//return p;
}
