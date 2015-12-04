#include<stdio.h>

void print_array(int *p, int );

main()
{
int ele;
int a[5]={10,20,30,40,50};
ele=sizeof a/sizeof ( a[1]);
print_array(a,ele);
printf("\n");
}

void print_array(int *p, int n)

{
int i;
for(i=0;i<n;i++)
printf("%d\t",p[i]);
}
