#include<stdio.h>
main(int argc,char**argv)
{
char ch;
int c=0;
FILE *fp;
if(argc!=2)
{
printf("Usage:./a.out file name\n");
return;
}
fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("file is not present");
return;
}
while((ch=fgetc(fp))!=EOF)
{
c++;
}
printf("number of characters in file is:%d\n",c);
}
