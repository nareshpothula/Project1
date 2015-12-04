#include<stdio.h>
void print (int (*)[3],int,int);
main()
{
int r,c;
int b[][3]={{10,20,30},{40,50,60},{12,21,32},{43,43,54} };
r=sizeof(b)/sizeof(b[0]);
c=sizeof(b[0])/sizeof(b[0][1]);

print(b,r,c);
}


void print(int(*p)[3],int r,int c)


{
int i,j;
for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   printf("%d  ",p[i][j]);// correct way of printing

   //printf("%d  ",*(p+i*c+j));//(p[i][j]) or 
  }
   printf("\n");
 }
}
