#include<stdio.h>
main()
{
int s1[5],s2[5],s3[10],i,j,k,l,ele1,ele2,temp,temp1;

printf("enter the value of s1....\n");
ele1 =sizeof s1/sizeof s1[0];
for(i=0;i<ele1;i++)
scanf("%d",&s1[i]);

printf("enter the s2 ....\n");
ele2=sizeof s2/sizeof s2[0];
for(j=0;j<ele2;j++)
scanf("%d",&s2[j]);


for(i=0;i<ele1;i++)
 {
  for(k=0;k<ele1-1-i;k++)
   if(s1[k]>s1[k+1])
     {
	temp=s1[k];
	s1[k]=s1[k+1];
	s1[k+1]=temp;
     }
 }

for(k=0;k<ele1;k++)
printf("%d ",s1[k]);

 
printf("\n");

for(j=0;j<5;j++)
 {
  for(l=0;l<5-1-j;l++)
	{
 	if(s2[l]>s2[l+1])
     		{
		temp1=s2[l];
		s2[l]=s2[l+1];
		s2[l+1]=temp1;
     		}
 	}
}

for(l=0;l<5;l++)
printf("%d ",s2[l]);

printf("\n");
//for(p=0;p<10;p++)
}

