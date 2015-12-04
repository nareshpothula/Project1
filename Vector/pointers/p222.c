#include<stdio.h>
main()
{
int i,k,j,temp,m,ele,n;
int a[5];
ele=sizeof (a)/sizeof a[0];
printf("enter the values of %d\n",i);
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

 for(j=0;j<ele;j++)
 printf("a[%d]=%d\n",j,a[j]);

 printf("reverse form is\n");
 n=ele;
 for(k=0,n=n-1;k<n;k++,n--)
   {
    temp=a[k];
    a[k]=a[n];
    a[n]=temp;
   }
 for(m=0;m<ele;m++)
 printf("a[%d]=%d\n",m,a[m]);
}


