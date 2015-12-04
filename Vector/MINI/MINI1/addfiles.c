#include"header.h"

void addfiles(FILE *fp)
{
FILE *fp3;
//fp=fopen(argv[1],"r");
fp2=fopen("xyz.c","a+");
int ch;
while((ch=fgetc(fp))!=EOF)// delete of header files
 {
      if(ch=='#')
        {
          while((ch=fgetc(fp))!='\n');
		{

		}
        }
      fputc(ch,fp2);
 }


fclose(fp);
fclose(fp2);
}

