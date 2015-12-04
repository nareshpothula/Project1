#include<stdio.h>
main()
{
int a[5],b[5],i,j,ele,temp;
printf("enter the ele.....\n");
ele=sizeof (a)/sizeof a[0];
for(i=0;i<ele;i++)
scanf("%d",&a[i]);

/*for(i=0,j=0;i<ele;i++,j++)

b[j]=a[ele-i-1];
*/


for(i=0,j=4;i<ele;i++,j--)
b[j]=a[i];


for(j=0;j<ele;j++)
printf("%d ",b[j]);
}
