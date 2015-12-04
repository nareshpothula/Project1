#include<stdio.h>
main()
{
FILE *fs,*ft;
char c;
fs=fopen("souce.txt","r");
c=getc(fs);
fseek(fs,0,2);
fseek(fs,-3L,1);

fgets(c,5,fs);
puts(c);




}
