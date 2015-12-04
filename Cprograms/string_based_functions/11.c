#include<stdio.h>
main()
{
char m[100],s[20];
int i=0,j,ch,r,c=0;
printf("enter the main string and sub string\n");
scanf("%s %s",m,s);
a:
for(i=i;m[i];i++)
 {

  if(s[0]==m[i])
               for(j=1;s[j];j++)
                {
                 if(s[j]!=m[i+j])
                 break;
                }

                 if(s[j]=='\0')
                {
                c++;
		i=i+j;
		j=0;
                goto a;
                //  return &m[i] ;
                }
        }
printf("%d\n",c);
}
