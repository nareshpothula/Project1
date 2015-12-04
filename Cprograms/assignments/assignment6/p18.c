#include<stdio.h>
void change(int *,int h);
main()
{
int a[]={2,4,6,8,10};
int i;
change(&a,5);
for(i=0;i<=4;i++)
printf("%d \n",a[i]);
}
void change(int *b,int h)
{
int i;
for(i=0;i<h;i++)
*(b+i)=*(b+i)+5;

}
