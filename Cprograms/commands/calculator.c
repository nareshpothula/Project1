#include<stdlib.h>
#include<stdio.h>
main(int argc,char**argv)
{
int i,j;
char op,s;
printf("enter the operator:");
scanf("%c",&s);
argc[2][0]=s;
for(i=1;i<=4;i++)
{
i=atoi(argv[i]);
}

for(j=1;4<argc;j++)
{ 
 for(i=0;i<argv[j][i];i++)
  {
   printf("%s %s\n",argv[1],argv[3]);
  }
}
switch(s)
{
case '+' :
		printf("%s",argv[1]+argv[3]);
		break;
case '-' :
		printf("%s",argv[1]-argv[3]);
		break;
case '*' :
		printf("%s",argv[1]*argv[3]);
		break;
case '/' :
		printf("%s",argv[1]/argv[3]);
		break;
default :
		printf("wrong option");
}
}
