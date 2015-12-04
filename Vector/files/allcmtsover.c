#include<stdio.h>
main()
{
FILE *fp,*fp1;
char ch,ch1,a[500],ch2;
fp=fopen("data.c","r");
	if(fp==NULL)
	{
	   printf("file is not present \n");
 	   return;
	}
fp1=fopen("abc.i","w");

while((ch=fgetc(fp))!=EOF)// main while loop
{
if((ch=='"'))
while((ch=fgetc(fp))!='"')
fputc(ch,fp1);


if((ch=='/')&&((ch1=fgetc(fp))=='/'))// checking multiple line comments
while((ch=fgetc(fp))!='\n');

if((ch=='/')&& (ch1=='*'))// checking multiple line comments
{
while((ch=fgetc(fp))!='*') ;
if((ch1=fgetc(fp))=='/')
//fgetc(fp);
continue;
}
else
{
fputc(ch,fp1);
}
}
}


