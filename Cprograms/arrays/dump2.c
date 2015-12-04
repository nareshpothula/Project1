#include<stdio.h>
main()
{
int s1[3],s2[3],s3[10],i,j,k,l,m=0,ele1,ele2,temp,temp1;

printf("enter the value of s1....\n");
ele1 =sizeof (s1)/sizeof (s1[0]);
for(i=0;i<ele1;i++)
scanf("%d",&s1[i]);

printf("enter the s2 ....\n");
ele2=sizeof (s2)/sizeof (s2[0]);
for(j=0;j<ele2;j++)
scanf("%d",&s2[j]);


for(i=0;i<ele1-1;i++)
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


for(j=0;j<ele2-1;j++)
{
  for(l=0;l<ele2-1-j;l++)
        {
        if(s2[l]>s2[l+1])
                {
                temp1=s2[l];
                s2[l]=s2[l+1];
		s2[l+1]=temp1;
		}
	}
}
for(l=0;l<ele2;l++)
printf("%d ",s2[l]);
printf("\n");


for(k=0,l=0;((k<ele1)||(l<ele2));)
{
 	if(s1[k]>s2[l])
	{
	 s3[m++]=s2[l];
	l++;
//	printf("k=%d \n",k);
//	printf("s[m]=%d \n",s3[m]);
	}
	
     else if (s1[k]<s2[l])
	{
	 s3[m++]=s1[k];
	k++;
//	printf("l=%d \n",l);
//	printf("s[m]=%d \n",s3[m]);
	}
	if((k==ele1)||(l==ele2))
	break;

}
printf("\n");
if(k!=ele1)
for(;k<ele1;k++)
s3[m++]=s1[k];

if(l!=ele2)
for(;l<ele2;l++)
s3[m++]=s2[l];

printf("\n");
for(m=0;m<(ele1+ele2);m++)
printf("%d ",s3[m]);

printf("\n");

}

