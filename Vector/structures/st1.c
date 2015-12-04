#include<stdio.h>
struct st
{
int rollno;
char name[33];
float marks;
};
main()
{
struct st s1,s2;
printf("enter the rollno:");
scanf("%d",&s1.rollno);
printf("enter the name:");
scanf("%s",&s1.name);
printf("enter the marks :");
scanf("%f",&s1.marks);

printf("%d %s %f\n",s1.rollno,s1.name,s1.marks);
s2.rollno=s1.rollno;
//s2.name=s1.name;
strcpy(s2.name,s1.name);
s2.marks=s1.marks;



//s2=s1;
/*
printf("enter the rollno:");
scanf("%d",&s2.rollno);
printf("enter the name:");
scanf("%s",s2.name);
printf("enter the marks:");
scanf("%f",&s2.marks);
*/
printf("%d %s %f\n",s2.rollno,s2.name,s2.marks);
}
