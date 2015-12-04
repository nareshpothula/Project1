#include<stdio.h>
main()
{
FILE *fp;
char ch;
fp=fopen("p1.c","r");
printf("1 fp=%u  %u\n",fp,ftell(fp));
ch=fgetc(fp);
printf("2 fp=%u  %u\n",fp,ftell(fp));
ch=fgetc(fp);
printf("3 fp=%u  %u\n",fp,ftell(fp));
ch=fgetc(fp);
printf("4 fp=%u  %u\n",fp,ftell(fp));
ch=fgetc(fp);
}
