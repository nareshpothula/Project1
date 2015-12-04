#include<stdio.h>
main()
{
int a[5],index,i,big,ele;
printf("enter the value.......\n");
ele=sizeof (a)/sizeof a[0];
for(i=0;i<ele;i++)
scanf("%d",&a[i]);
big=a[0];
for(i=0;i<ele;i++)
{ 
 if(big<=a[i])
{
 big=a[i];
 index=i;
}
}
printf("big num is%d\n index is%d\n",big,index);

}
