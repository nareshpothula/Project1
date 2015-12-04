#include<stdio.h>
main()
{
char a[10],b[10],c[10],d[40],i,j=0;
printf("enter the strings\n");
scanf("%s%s%s",a,b,c);

{
for(i=0;a[i];i++)
d[j++]=a[i];
d[j++]=' ';

for(i=0;b[i];i++)
d[j++]=b[i];
d[j++]=' ';

for(i=0;c[i];i++)
d[j++]=b[i];
d[j++]=' ';
d[j]='\0';
}
printf("%s",d);
}

