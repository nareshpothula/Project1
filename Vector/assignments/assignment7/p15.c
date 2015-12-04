// we can pass 2-D array 3 ways
#include<stdio.h>
void print1(int *,int ,int);
void print2(int (*)[3], int, int);
void print3(int p[][3],int,int);
main()
{
int r,c;
int b[2][3]={   {10,20,30},
		{40,50,60}
	    };
r=sizeof(b)/sizeof b[0];
c=sizeof b[0]/sizeof b[0][0];
print1(b,r,c);
	printf("\n");
print2(b,r,c);
	printf("\n");
print3(b,r,c);
}
void print1(int *p,int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{  
  for(j=0;j<c;j++)
	printf("%d  ",*(p+i*c+j));
	printf("\n");
}
}
void print2(int (*p)[3], int r, int c)
{
int i,j;
for(i=0;i<r;i++)
{  
  for(j=0;j<c;j++)
	printf("%d  ",p[i][j]);
	printf("\n");
}
}
void print3(int p[][3],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{  
  for(j=0;j<c;j++)
	printf("%d  ",p[i][j]);
	printf("\n");
}
}

