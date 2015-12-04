#include"header.h"
void comments(FILE *fp19)
{
int ch,ch1,i=0;

fp2=fopen("xyz.c","r");
//fp19=fopen(argv[1],"w");

while((ch=fgetc(fp2))!=EOF)// main while loop
{

        if((ch=='"'))
        {
         fputc(ch,fp19);
         while((ch=fgetc(fp2))!='"')
         fputc(ch,fp19);
        }

        if((ch=='/')&&((ch1=fgetc(fp2))=='/'))// checking single line comments
        while((ch=fgetc(fp2))!='\n');

        if((ch=='/')&& (ch1=='*'))// checking multiple line comments
        while(((ch=fgetc(fp2))!='*')||((ch1=fgetc(fp2))!='/'));

        else
       {
         fputc(ch,fp19);
       }

}
fclose(fp19);
fclose(fp2);
}

