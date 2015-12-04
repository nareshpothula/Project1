#include<stdlib.h>
#include<stdio.h>
main(int argc,char**argv)
{
char ch,*p;
int i=0,c=0;
if(argc!=4)
	{
          printf("Usage:./a.out filename char char\n");
	  return;
	}
FILE *fp;
fp=fopen(argv[1],"r");
	if(fp==NULL)
	{
	  printf("file is not present\n");
	  return;
	}
while((ch=fgetc(fp))!=EOF)
{
 c++;
}
printf("size of file is:%d\n",c);

p=malloc(c+1);

rewind(fp);

while((ch=fgetc(fp))!=EOF)
	{
	 p[i++]=ch;
	}
p[i]='\0';
printf("data......%s\n",p);
for(i=0;p[i];i++)
{
	if(p[i]==argv[2][0])

	{
	  p[i]=argv[3][0];
	}
}
printf("\n....................................\n");
fp=fopen(argv[1],"w");
for(i=0;p[i];i++)
	{
	  fputc(p[i],fp);
	}
fclose;
}

