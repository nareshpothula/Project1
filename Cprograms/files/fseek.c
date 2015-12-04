#include<string.h>
#include<stdio.h>
main()
{
FILE *fp;

char a[20];
fp=fopen("data","r+");
while((fscanf(fp,"%s",a))!=EOF)
{
      printf("%d\n",ftell(fp));
  if(strcmp(a,"vector")==0)
   {
         printf("%s",a);
	fseek(fp, -6,1);
        printf("%ld\n",ftell(fp));
	fprintf(fp, "NARESHNAIDU");
   }
}
}






