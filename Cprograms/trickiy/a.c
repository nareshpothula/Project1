#include<stdio.h>
main()
{
int a[]={2,-3,4,-5,6,-7,8,-9,10,-11};
int k=0, j, i, x;
for(i=0;i<10;i++)
{
	x=a[i];
if(x<0)
{
for(j=k;j<9;j++)
a[j]=a[j+1];
a[9]=x;
}
else
k++;
}
for(i=0;i<10;i++)
printf("%d\t",a[i]);
}

