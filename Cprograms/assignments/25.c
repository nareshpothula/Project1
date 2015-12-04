#include<stdio.h>
char *str_rev(char *,int i);
main()
{
int i;
char a[]="abcd";
str_rev(a,strlen(a)-1);
printf("%s\n",a);
}

char *str_rev(char *x,int i)
{
static int j;
char t;
if(i>j)
{
t=x[i];
x[i]=x[j];
x[j]=t;

j++;
//printf("%s\n",x);
str_rev(x,i-1);
} 
}
