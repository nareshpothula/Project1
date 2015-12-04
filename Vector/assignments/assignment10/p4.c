#include<stdio.h>
main(int argc,char**argv)
{
char ch;
FILE *fp,*fp1;
if(argc!=3)
{
printf("Usage:./a.out filename filename\n");
return;
}
fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("file is not present \n");
return;
}
fp1=fopen(argv[2],"w");
while((ch=fgetc(fp))!=EOF)
{
if(ch>=97&&ch<=122)
ch=ch-32;
fputc(ch,fp1);
}

}
