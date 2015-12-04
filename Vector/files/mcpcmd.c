#include<stdlib.h>
#include<stdio.h>
main(int argc,char**argv)
{
int q,i,op,n;
char ch;
FILE *fp,*fp1;
if(argc>n)
 {
  printf("Usage :./a.out file names\n");
  return;
 }

fp=fopen(argv[1],"r");

if(fp==NULL)
 {
  printf("file is not  present\n");
 }



for(i=2;i<argc;i++)
{
fp1=fopen(argv[i],"r");// cheeck the file is present or not

if (fp1==(NULL))
    {
    goto b;
    }
else
{
printf("Destination file is present\n Do u want replace the data....?\n 1)yes\n2)no\n");
scanf("%d",&op);
if(op==1)
b:
  	fp1=fopen(argv[i],"w");
	  while((ch=fgetc(fp))!=EOF)
        {
          fputc(ch,fp1);
	}

rewind(fp);


}
if(op==2)
printf("Thanks for using my application\n");
}
}
