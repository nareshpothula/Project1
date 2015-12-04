#include"header.h"
void macros(FILE *fp )
{
int i=0,g=0;
char *p,ch1,d[55];
//char j=0,k=0,s,a[55],b[55],c[55],ch;
char j=0,k=0,s,*a,*b,*c,ch;
a=malloc(4*444);
b=malloc(4*444);
c=malloc(4*444);


while((fscanf(fp,"%s",a))!=EOF) // inclsion file
   {
      if(strstr(a,"#define"))
       {
          while((ch=fgetc(fp))!=' ');
        fscanf(fp,"%s",b);
	printf("macro name=%s\n",b);
/*          fseek(fp,-1,1) ;
          if(ch==' ')
            {
		perror("if");
          fseek(fp,2,1) ;
	printf("c==%c\n",ch);
              //  i=0;
                 while((ch=fgetc(fp))!=' ')
                b[++i]=ch;
            //    printf(" 1macro name b=%s\n",b);
                b[i]='\0';
                printf("12acro name b=%s\n",b);
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
	c[i]='\0';
	printf("macro body c=:%s\n",c);
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

char *q,x[444],n=0;
while((fgets(d,100,fp20))!=NULL)
while((ch=fgetc(fp20))!='\n')
{

  if((strstr(d,b)))
   {
	g=strlen(d);
	fseek(fp20,-g,1);
n=0;
while((ch=fgetc(fp20))!='\n')
x[n++]=ch;
x[n]='\0';
printf("nn=%s\n",x);

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
