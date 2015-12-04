#include<stdio.h>
main()
{
float f=7.5;
char *cp,i,j;
 cp=&f;
cp=cp+3;
for(j=0;j<=3;j++)
{
 for(i=7;i>=0;i--)
                          //a:
 if((*cp)&1<<i)
printf("1");
else
printf("0");
                     //i--;
                     //if((i+1)%8==0)
                     //printf(" ");
                        //if(i>=0)
                     //goto a;
cp=cp-1;
}
//cp=cp-1;


}



