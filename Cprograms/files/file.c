#include<stdio.h>
main()
{
int k;
char a[20],*p;
FILE *fp;
printf("enter the file name....\n");
scanf("%s",a);
fp=fopen(a,"r");
if(fp==NULL)
{
printf("file is not present\n");
return;
}
else
printf("file is present\n");
fseek(fp,1,1);
perror("fseek");
fgets(a,3,fp);
printf("string=%s\n",a);
k=atoi(a);
printf("k=%d\n",k);
printf("ftell=%ld\n",ftell(fp));
printf("char=%c",fgetc(fp));
}
