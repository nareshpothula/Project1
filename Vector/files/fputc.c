#include<stdio.h>
main(int argc,char**argv)
{
char ch;
FILE *fp,*fp1;
if(argc!=3)
 {
  printf("Usage :./a.out file names");
  return;
 }
fp=fopen(argv[1],"r");
if(fp==NULL)
{
printf("file is not  present\n");
}
else
    {
  	fp1=fopen(argv[2],"w");
	  while((ch=fgetc(fp))!=EOF)
 	        {
	           fputc(ch,fp1);
    
		}

    }
printf("\n");
}
