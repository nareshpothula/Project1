#include<stdio.h>
main()
{
int i,ele,*p;
int a[5];
p=a;
ele =sizeof a/sizeof a[0];
printf("enter the ele.....\n");
for(i=0;i<ele;i++)
printf("%d\t",p[i]);
printf("\n");
}

