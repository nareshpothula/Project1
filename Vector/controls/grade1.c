#include<stdio.h>
main()
{
int marks;
printf("enter the marks.....\n");
scanf("%d",&marks);
if(marks>=0 &&  marks<=39)
printf("FAIL\n");
else if(marks>=40 &&  marks<=49)
printf("grade 'C'\n");
else if(marks>=50 &&  marks<=69)
printf("grade 'B'\n");
else if(marks>=70 &&  marks<=100)
printf("grade 'A'\n");



}
