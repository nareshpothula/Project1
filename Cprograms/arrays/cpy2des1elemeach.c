#include<stdio.h>
main()
{
int s1[2],s2[5],s3[10],ele1,ele2,i,j;
printf("enter the array s1....\n");
ele1=sizeof (s1)/sizeof( s1[1]);
for(i=0;i<ele1;i++)
scanf("%d",&s1[i]);
  
printf("ele1===%d..\n",ele1);
printf("enter the array s2....\n");

ele2=sizeof s2/sizeof s2[1];
printf("ele2===%d..\n",ele2);
int k=0;
for(i=0;i<ele2;i++)
scanf("%d",&s2[i]);

for(i=0,j=0;;)
{
 s3[k++]=s1[i++];           //s3[j++]=s1[i];
 s3[k++]=s2[j++];          // s3[j]=s2[i];
if(i<ele1&&j<ele2)
continue;
else
break;

}
printf("..................................%d\n",i);
for(;i<ele1;)
 s3[k++]=s1[i++];           //s3[j++]=s1[i];

for(;j<ele2;)
 s3[k++]=s2[j++];           //s3[j++]=s1[i];

for(i=0;i<10;i++)
printf("%d ",s3[i]);
}
