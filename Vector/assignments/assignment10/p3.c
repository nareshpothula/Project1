#include<stdio.h>
main(int argc,char**argv)
{
int r;
FILE *fp,*fp1,*fp2;
char a[20],b[20];
if(argc!=4)
{
printf("Usage:./a.out 1stfilename 2ndfilename 3rdfilename\n");
return;
}

fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("1st file is not present\n");
return;
}

fp1=fopen(argv[2],"r");
if(fp1==NULL)
{
printf("2nd file is not present\n");
return;
}
fp2=fopen(argv[3],"w");
while(((r=fscanf(fp,"%s",a))!=EOF) && ((fscanf(fp1,"%s",b))!=EOF))
{
fprintf(fp2,"%s ",a);
fprintf(fp2,"%s ",b);
}
if(r!=EOF)
fprintf(fp2,"%s ",a);
while(((fscanf(fp,"%s",a))!=EOF) )
{
fprintf(fp2,"%s ",a);
}
while(((fscanf(fp1,"%s",b))!=EOF))
{
fprintf(fp2,"%s ",b);
}
}
