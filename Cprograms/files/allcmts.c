#include<stdio.h>
main()
{
FILE *fp,*fp1;
char ch,ch1,a[500];
fp=fopen("data.c","r");
	if(fp==NULL)
	{
	   printf("file is not present \n");
 	   return;
	}
fp1=fopen("data.i","w");


k:
while((ch=fgetc(fp))!=EOF)// main while loop
{
 if((ch=='/') && ((ch1=fgetc(fp))=='*'))// checking multiple line comments
 {
  {
  fgets(a,95,fp);
   while((ch=fgetc(fp))!=EOF)
    {
      if(!((ch=='*') && ((ch1=fgetc(fp))=='/')))
      fgets(a,95,fp);
        else
        {
         goto k;
        }
    }
  }
 }
if((ch=='/')&&(ch1=='/'))
 {
    {
     fgets(a,95,fp);
     fprintf(fp1,"\n");
//     goto k;
    }
 }
else
 {
  fputc(ch,fp1);
  goto k;
/*
if((ch=='/')&&(ch1=='/'))
   {
    fputc(ch,fp1);
    fputc(ch1,fp1);
   }
  else
  fputc(ch,fp1);
}
*/
  }
}
printf("These are the comments written in program  \n");
printf("%s\n",a);
}

