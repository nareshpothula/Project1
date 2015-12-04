#include<stdio.h>
struct st
{
int rollno;
char name[10];
float marks;
};
main()
{
struct st s1[3],temp;
int i,ele;
FILE *fp;
fp=fopen("p2.c","w");

ele=sizeof s1/sizeof s1[0];
for(i=0;i<ele;i++)
{
printf("enter the rollno:");
scanf("%d",&s1[i].rollno);
printf("enter the name:");
scanf("%s",s1[i].name);
printf("enter the marks :");
scanf("%f",&s1[i].marks);
}
for(i=0;i<ele;i++)
{
printf("%d ",s1[i].rollno);
printf("%s ",s1[i].name);
printf("%f ",s1[i].marks);
printf("\n");
}
for(i=0;i<ele;i++)
fprintf(fp,"%d %s %f\n",s1[i].rollno,s1[i].name,s1[i].marks);

}

