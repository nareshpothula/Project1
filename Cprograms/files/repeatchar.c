#include<stdio.h>
main(int argc,char**argv)
{
char ch;
int c=0;
FILE *fp;
if(argc!=3)
{
printf("Usage:./a.out file name\n");
return;
}
fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("file is not present\n");
return;
}
while((ch=fgetc(fp))!=EOF)
{
if(argv[2][0]==ch)
c++;
}
printf(" num of times that char is present is:%d\n",c);
}
