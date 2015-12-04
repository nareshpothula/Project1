#include<stdio.h>
main()
{
char*s1="abcd";
char s2[]="abcd";
char s3[10]="vector";
printf("s1=%d s2=%d   s3=%d %d\n",sizeof(s1),sizeof(s2),sizeof(s3),sizeof"abcd");
}
