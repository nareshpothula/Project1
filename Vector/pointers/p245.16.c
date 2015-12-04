#include<stdio.h>
main()
{
int arr[3]={1,2,3};
int *p=&arr;
printf("p=%u    \n",p);
func1(p);
printf("p=%u    \n",p);
func2(&p);
printf("p=%u    \n",p);
}
void func1(int *ptr)
{
ptr++;
}
void func2(int **pptr)
{
(*pptr)++;
}
