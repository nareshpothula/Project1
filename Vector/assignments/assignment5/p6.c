#include<stdio.h>
main()
{
int a[10],i,c=0,c1=0,d=0,d1=0;
printf("enter the data\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);

for(i=0;i<10;i++)
a[i]>=0?(printf ("+ve%d\n",i,c++)):(printf("-ve%d\n",i,c1++));
printf("+ve=%d\n-ve=%d\n",c,c1);

for(i=0;i<10;i++)
(a[i]%2==0)?(printf("even%d\n",i,d++)):(printf("odd%d\n",i,d1++));
printf("even=%d\nodd=%d\n",d,d1);
}
