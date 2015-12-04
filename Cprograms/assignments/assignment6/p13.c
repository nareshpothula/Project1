#include<stdio.h>
//#include<math.h>
asd(int ch);
main()
{
int i=45,c;
c=asd(i*1000);
printf("%d\n",c);
}
asd(int ch)
{
if(ch>=40000)
return(ch/10);
else
return 10;
}










