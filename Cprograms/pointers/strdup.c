#include<stdio.h>
#include<string.h>
int main()
{
   char a[]="rama krishna";
   char *p= a;//strdup(a);
   printf("%u  %u\n",a,p);
}
