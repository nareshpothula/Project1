#include<stdio.h>
#define printf  HELLO 
main()
{
int arr[]={1,2,3,4,5};
int i,*p;
for(p=arr,i=0;p+i<=arr+4;p++,i++)
printf("%d ",*(p+i));
printf
}
