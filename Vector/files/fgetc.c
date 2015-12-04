#include<stdio.h>
main(int argc,char**argv)
{
FILE *fp;
int c=0;
char ch,i;
if(argc!=2)
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
else
printf("fileis present\n");
//while((ch=fgetc(fp))!=EOF)
//if((ch=fgetc(fp))!=EOF)   // when u want print 1st char use if condition
//for(i=0;(ch=fgetc(fp)),i<2;i++ )
//int c=1;
while((ch=fgetc(fp))!=EOF)
{
//if(c==2)
printf("%c",ch);
c++;
}
printf("no of char in file:%d\n",c);
printf("\n");
}
