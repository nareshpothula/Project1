#include<stdio.h>
main()
{
int marks;
printf("enter the marks....\n");
scanf("%d",&marks);

/*
if(marks>=75)
printf("grade 'A'\n");
else if(marks>=55)
printf("grade 'B'\n");
else if(marks>=35)
printf("grade 'C'\n");
else
printf("FAIL\n");
*/

//nested if

if(marks>=35)
 {
  if(marks>=55)
   {
    if(marks>=75)
      {
	printf("grade A\n");
      }
   else
   printf("grade B\n");
 }
 else
 printf("grade C\n");
}
else	
printf("FAIL\n");

}
