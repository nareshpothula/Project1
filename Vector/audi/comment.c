#include<stdio.h>
main(int argc,char** argv)
{
FILE *fp,*fp1;
int i,j,k;
char a[222];
fp =fopen(argv[1],"r");
fp1=fopen(argv[2],"w");
fseek(fp,3,1);
while(fgets(a,100,fp)!=NULL)
{
fputs(a,fp1);
fseek(fp,3,1);
}
printf("Bye\n");
}
