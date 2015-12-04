#include"header.h"
void macros(FILE *fp )
{
int x=0,i=0,g=0;
char *p,ch1,d[555];
char j=0,k=0,s,a[555],b[555],c[555],ch;


while((fscanf(fp,"%s",a))!=EOF) // inclsion file
   {
      if(strstr(a,"#define"))
       {
     perror("strstr");
          while((ch=fgetc(fp))!=' ');
  
fscanf(fp,"%s",b);
printf("macro name =%s\n",b);         
/*          if(ch==' ')
            {
                i=0;
                 while((ch=fgetc(fp))!=' ')
                b[i++]=ch;
                b[i]='\0';
                printf("macro name b=%s\n",b);
	   } 


*/
	i=0;
	while(((ch1=fgetc(fp))!='\n'))
	{
	if((ch==' ')&&((ch1!=' ')))
	{
	fseek(fp,-1,1);
	while((ch1=fgetc(fp))!='\n')
	c[i++]=ch1;
	c[strlen(b)]='\0';
	printf("macro body c=%s\n",c);
       break;	
	}

  }	
}
}
rewind (fp);
FILE *fp20;
int m;
fp20=fopen("cba.c","w");
while((m=fgetc(fp))!=EOF)
fputc(m,fp20);

fclose(fp20);
fclose(fp);

fp20=fopen("cba.c","r+");
int r;
char *q;
while((fgets(d,100,fp20))!=NULL)
{
  if((strstr(d,b)))
   {
	g=strlen(d);
	fseek(fp20,-g,1);
	q=my_strstr(d,b);
	r=q-d;
	fseek(fp20,r,1);
        fprintf(fp20,"%s",c);
   }
}
fclose(fp20);
}


char* my_strstr(char*m,char*s)
{
int i,j,ch,r;
for(i=0;m[i];i++)
 {
  if(s[0]==m[i])
	{			
	 for(j=1;s[j];j++)
		{
		 if(s[j]!=m[i+j])
		 break;
		}

		 if(s[j]=='\0')
		  return &m[i] ;
				
	}
}
return NULL;
}
