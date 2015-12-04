#include"header.h"

char k[55];
void inclusion(FILE *fp)
{
int i,j;
FILE *fp1,*fp4;
char ch,ch1,a[55],b[55]="/usr/include/";
fp2=fopen("xyz.c","w");
while((ch=fgetc(fp))!=EOF) // inclusion file
   {
    
      if(ch=='#') 
       {
    	  while(((ch=fgetc(fp))!='<') && ((ch1=fgetc(fp))!='\n'))
          {
		fseek(fp,-1,1);
             if(ch=='"')
                goto ab;
         }
          if(ch=='<')
            {
        	i=0;
	  	 while((ch=fgetc(fp))!='>')
  	   	a[i++]=ch;
  	   	a[i]='\0';
  		printf(" %s\n",a);

		for(j=13;b[j];j++)
		b[j]='\0';

     		strcat(b,a);
		 printf("%s\n",b);
		 fp1=fopen(b,"r");
		 while((ch1=fgetc(fp1))!=EOF)
		 fputc(ch1,fp2);
		fclose(fp1);
	   }
ab:


   if(ch=='"')
	{
	 i=0;
	 while((ch=fgetc(fp))!='"')
	 k[i++]=ch;
	 k[i]='\0';
	 printf("in string:k=%s\n",k);
	 fp4=fopen(k,"r");

		if(fp4==NULL)
		{              //  file is not present search predefined path
		  for(i=13;b[i];i++)
		  b[i]='\0';
		  strcat(b,k);
		  printf("k=%s\n",k);
		  fp1=fopen(k,"r");
			if(fp1==NULL)
			{
			perror(k);
			printf("\" %s \"This  File is not present in predefined path \n",k);
			return;
			}
			else
			{
		 	 while((ch1=fgetc(fp1))!=EOF)
		 	 fputc(ch1,fp2);
			}
		}

		else
		{    
                 while((ch=fgetc(fp4))!=EOF)// delete of header files
                  {
                        if(ch=='#')
                           {
                            while((ch=fgetc(fp4))!='\n');
                            }
                          fputc(ch,fp2);
                    }
		fclose(fp4);
			                      // if file is present in pwd
		}
		
	}
    }



}
printf("end of file %s\n",k);

fclose(fp2);
}  // while loop is ended hear	
//  return c;



