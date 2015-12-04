#include"header.h"
main( int argc,char** argv)
{
int i=0;
FILE *fp,*fp2;
if(argc!=2)
{
printf("Usage:./mypreprocessor filename\n");
return;
}
fp=fopen(argv[1],"r");
inclusion(fp);

//fp2=fopen("xyz.c","r");

fp=fopen(argv[1],"r");
macros(fp);

fp=fopen("cba.c","r");
addfiles(fp);

for(i=0;argv[1][i];i++);
argv[1][i-1]='i';
argv[1][i]='\0';

fp19=fopen(argv[1],"w");
comments(fp19);


system("rm xyz.c");
system("rm cba.c");
system("rm *.o");
}
