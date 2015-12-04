#include<stdio.h>
main( int argc, char **argv)
{
char ch;
char s[500];
int c=0;
FILE *fp;
if(argc!=3)
{
printf ("Usage:./a.out file name\n");
return;
}
fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf ("file is not present\n");
return;
}
while((ch=fgetc(fp))!=EOF)
{
fscanf(fp,"%s",s);
if(!(strcmp(s,argv[2])))
c++;
}
printf (" num of times that is present is:%d\n",c);
}
