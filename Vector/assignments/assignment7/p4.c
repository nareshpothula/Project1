#include<stdio.h>
main()
{
int arr[]={10,20,30,40,50};
int *j,*k;
j=arr[4];
k=*(arr+4);
if(j==k)
printf("same location\n");
else
printf("not same\n");
}
