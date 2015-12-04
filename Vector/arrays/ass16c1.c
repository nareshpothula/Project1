#include<stdio.h>
main()
{
int s1[5],s2[5],s3[12],i,j,k,l,m=0,n,ele1,ele2,temp,temp1,d;
//////////////////////s1/////////////////////
printf("enter the value of s1....\n");
ele1 =sizeof s1/sizeof s1[0];
for(i=0;i<ele1;i++)
scanf("%d",&s1[i]);

printf("\n");

//////////////////////s1/////////////////////
printf("enter the s2 ....\n");
ele2=sizeof s2/sizeof s2[0];
for(l=0;l<ele2;l++)
scanf("%d",&s2[l]);


//////////////////////s1/////////////////////
//////////////////////s1/////////////////////
for(i=0;i<ele1;i++)
 {
  for(j=0;j<ele1-1-i;j++)
   if(s1[j]>s1[j+1])
     {
	temp=s1[j];
	s1[j]=s1[j+1];
	s1[j+1]=temp;
     }
 }

for(j=0;j<ele1;j++)
printf("%d ",s1[j]);

 
printf("\n");

//////////////////////s1/////////////////////
//////////////////////s1/////////////////////
for(k=0;k<5;k++)
 {            

  for(l=0;l<5-1-k;l++)
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

//////////////////////s1/////////////////////
//////////////////////s1/////////////////////
for(l=0,j=0;(l<5)&&(j<5);)
{
if(s1[j]>s2[l])
{
s3[m++]=s2[l];
l++;
i=l;
}
else if(s1[j]<s2[l])
{
s3[m++]=s1[j];
j++;
i=j;
}
if(i<5)
for(l=i;l<5;l++)
s3[m++]=s2[l];
else if(i<5)
for(j=i;j<5;j++)
s3[m++]=s1[j];
//else 
//return 0;

}
for(m=0;m<10;m++)
printf("%d ",s3[m]);
printf("\n");



}
