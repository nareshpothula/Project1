#include<stdio.h>
main()
{
int marks;
printf("enter the marks.....\n");
scanf("%d",&marks);

if(marks>69)
	printf("A\n");

else if(marks>49)
	printf("grade 'b'\n");

else if(marks>39)
	printf("grade 'c'\n");

else 
	printf("grade 'fail'\n");


}
