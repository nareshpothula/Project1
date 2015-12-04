#include<stdio.h>
#include<stdlib.h>
main(int argc,char**argv)
{
char ch,*p;
static int c,i;
FILE *fp;
if(argc!=4)
{
printf("Usage:./a.out file name char char\n");
return;
}
fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("file not present\n");
return;
}
else
{
while((ch=fgetc(fp))!=EOF)
c++;
}
printf("%d\n",c);
p=malloc(c+1);
rewind (fp);
while((ch=fgetc(fp))!=EOF)
p[i++]=ch;
p[i]='\0';
printf("Data in p[i] is \n%s\n",p);
for(i=0;p[i];i++)
{
if(p[i]==argv[2][0])
p[i]=argv[3][0];
}
printf("\n");
fp=fopen(argv[1],"w");
for(i=0;p[i];i++)
fputc(p[i],fp);
fclose;
}



