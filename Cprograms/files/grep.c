#include<stdlib.h>
#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
char ch,s[80];
int i=0,c=0;
char *p;
FILE *fp;
if(argc=!3)
{
printf("Usage:./a.out filename  search word \n");
return;
}
fp=fopen(argv[2],"r");
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

while(fgets(p,c,fp)!=NULL)
if(strstr(p,argv[1]))
{
printf("%s\n",p);
}

}


