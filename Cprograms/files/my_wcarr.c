#include<stdio.h>
#include<stdlib.h>
main(int argc,char**argv)
{
int i=0,c=0,l=0,w=0,k,*p;
char ch,s[20];
FILE *fp;
if(argc!=2)
{
printf("Usage:./a.out filename\n");
return;
}
fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("file is not present\n");
return;
}
// new line
while ((ch=fgetc(fp))!=EOF)
{
c++;
if(ch=='\n')
l++;
}
printf("%d\t",l);
//printf("%d\t",c);
rewind(fp);

// no of words 
p=malloc(c+1);
rewind(fp);

while((ch=fgetc(fp))!=EOF)
p[i++]=ch;
p[i]='\0';
for(i=0;p[i];i++)
{
if((p[i]==' ')&&( p[i+1]==' '))
 {
   for(k=i;p[k];k++)
	  p[k]=p[k+1];
	   p[k]='\0';
	   i--;

}
}
for(i=0;p[i];i++)
if(p[i]=='\0' || p[i]==' ')
w++;
printf("%d\t",w);
rewind (fp);

// no of letters
c=0;
while((ch=fgetc(fp))!=EOF)
c++;
printf("%d\t",c);
printf("%s\t",argv[1]);
printf("\n");

}
