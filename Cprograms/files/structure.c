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
int i,j,ele,p,op;

//char temp1[20];
ele=sizeof s1/sizeof s1[0];
for(i=0;i<ele;i++)// scaning the data
{
printf("enter the rollno:");
scanf("%d",&s1[i].rollno);
printf("enter the name:");
scanf("%s",s1[i].name);
printf("enter the marks :");
scanf("%f",&s1[i].marks);
}
for(i=0;i<ele;i++)// printing data
{
printf("%d ",s1[i].rollno);
printf("%s ",s1[i].name);
printf("%f ",s1[i].marks);
printf("\n");
}
//a:
printf("you want sort according to:\n");
printf("1)rollno\n2)names\n3)marks\n");
scanf("%d",&op);

if(op==1)
{
for(i=0;i<(ele-1);i++)
	{
	 for(j=0;j<(ele-1-i);j++)
	     if(s1[j].rollno > s1[j+1].rollno)
		{
	 	 temp=s1[j];
		 s1[j]=s1[j+1];
		 s1[j+1]=temp;
		}
	
	}
}
if(op==2)
{
for(i=0;i<(ele-1);i++)
{
for (j=0;j<(ele-1-i);j++)
    if((strcmp(s1[j].name,s1[j+1].name))>0)
	
		{
	 	 temp=s1[j];
		 s1[j]=s1[j+1];
		 s1[j+1]=temp;
		}
}
}	
if(op==3)
{
for(i=0;i<(ele-1);i++)
	{
	 for(j=0;j<(ele-1-i);j++)
	     if(s1[j].marks> s1[j+1].marks)
		{
	 	 temp=s1[j];
		 s1[j]=s1[j+1];
		 s1[j+1]=temp;
		}
	}

}
for (i=0;i<ele;i++)
{
printf("%d ",s1[i].rollno);
printf("%s ",s1[i].name);
printf("%f ",s1[i].marks);

printf("\n");
}
//goto a;
}

