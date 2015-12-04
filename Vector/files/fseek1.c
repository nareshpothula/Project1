#include<string.h>
#include<stdio.h>
main(int argc,char**argv)
{
FILE *fp;
int i;
char a[20];
if(argc!=4)
{
printf("Usage:./a.out filename original word   replace word\n");
return;
}
fp=fopen(argv[1],"r+");
while((fscanf(fp,"%s",a))!=EOF)
{
      printf("file position is :%ld\n",ftell(fp));
  if(strcmp(a,argv[2])==0)
   {
         printf("%s",a);
	fseek(fp, -(strlen(argv[2])),1);
        //printf("%ld\n",ftell(fp));
	fprintf(fp,"%s",argv[3]);
   }
}
}

