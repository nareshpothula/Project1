#include<stdio.h>
int my_atoi(char*);
main(int argc,char**argv)
{
char a[10];
int i;
printf("enter the integer string:\n");
scanf("%s",a);
i=my_atoi(a);
printf("integer string:%d\n",i);
}
int my_atoi(char*p)
{
int num=0,i;
for(i=0;p[i];p++)
num =num*10+(p[i]-48);
return num;
}
