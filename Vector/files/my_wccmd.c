#include<stdio.h>
main(int argc,char**argv)
{
int i=0,c=0,l=0,w=0;
char ch,s[20];
FILE *fp;
if(argc=!2)
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
// nem line
while ((ch=fgetc(fp))!=EOF)
if(ch=='\n')
l++;
printf("%d\t",l);
rewind(fp);

// no of words 

while((fscanf(fp,"%s",s))!=EOF)
{
if(((ch>=1&&ch<=127)&&(ch==' '))||(ch=='\n'))

w++;
}
printf("%d\t",w);
rewind (fp);

// no of letters

while((ch=fgetc(fp))!=EOF)
c++;
printf("%d\t",c);
printf("\n");

}
