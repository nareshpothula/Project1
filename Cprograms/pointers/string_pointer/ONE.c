#include<stdio.h>
main()
{
char*p[3] ={"ONE","TWO","THREE"};
char a[][10]={"one","two","three"};
int i;
for(i=0;i<3;i++)
printf("%s\t",a[i]);


for(i=0;i<3;i++)

printf("%s\t",p[i]);

printf("\n");
}

