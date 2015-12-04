#include<stdlib.h>
#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
char ch,s[80];
int i=0,c=0,n=0;
char *p;
FILE *fp;
if(argc!=4)
{
printf("Usage:./a.out  -n  word  filename\n");
return;
}
fp=fopen(argv[3],"r");
if(fp==NULL)
{
printf("source file is not present\n");
return;
}
while((ch=fgetc(fp))!=EOF)
c++;
printf("%d\n",c);
p=malloc(c+1);
rewind(fp);
while((fgets(p,c,fp))!=NULL)
{
n++;
if(strstr(p,argv[2]))
printf("%d: %s\n",n,p);
}
}


