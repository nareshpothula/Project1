#include<stdio.h>
main()
{
FILE *fp,*fp1;
char ch, a[20],b[100];
//printf("enter the file name ");
//scanf("%s",a);
fp=fopen("p1.c","r");
if(fp==NULL)
{
printf("destination file is not present\n");
return;
}

fp1=fopen("1.c","a+");
while((fgets(b,100,fp))!=NULL)
fputs(b,fp1);


}
