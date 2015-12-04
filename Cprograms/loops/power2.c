#include<stdio.h>
main()
{
int num,c=0,i;
printf("enter the value......\n");
scanf("%d",&num);
/*for(i=0;i<=31;i++)
if(num&1<<i)
c++;
if(c==1)
printf("power of given num is 2\n");
else
printf("power of given num is not 2\n");
*/
(num&num-1)?printf("not power of 2"):printf("power of 2");


}
