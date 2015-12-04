#include<stdio.h>
main()
{
int i;
char b[3][10];

for(i=0;i<3;i++)
scanf("%s",b[i]);

for(i=0;i<3;i++)
{
printf("%s\t",b[i]);
}
printf("\n");

}
