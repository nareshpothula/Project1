#include<stdio.h>
main()
{
int marks;
printf("enter the marks.....\n");
scanf("%d",&marks);

if(marks>=40 && marks<=49)
	printf("C\n");

if(marks>=70 && marks<=100)
	printf("grade A \n");

if(marks>=0 && marks<=39)
	printf("FAIL \n");

if(marks>=50 && marks<=69)
	printf("grade B\n ");



}
