#include<stdio.h>
int arrrev(int *,int );
main()
{
int i,p;
int a[5]={1,2,3,4,5};
printf("reverse way in main\n");
for(i=4;i>=0;i--)
printf("%d  %u\n",a[i],&a[i]);
arrrev(a,5);
printf("arter calling \n");
for(i=0;i<5;i++)
printf("%d %u\n",a[i],&a[i]);
}

int arrrev(int *p,int n)
{
int i,temp,j;
printf("in fun\n");
for(i=0,j=n-1;j>i;j--,i++)
{
temp=p[i];
p[i]=p[j];
p[j]=temp;
}
//printf("%d ",p[j]);
}

