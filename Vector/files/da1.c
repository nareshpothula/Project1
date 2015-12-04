#include<stdio.h>
main()
{
int a[100],c=0,b;
FILE *fp;
fp=fopen("da.c","r");
//while((b=fgetc(fp))!=EOF)
////c++;

(fgets(a,7,fp));//!=0)
printf("%s",a);
}
