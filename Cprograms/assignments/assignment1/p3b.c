#include<stdio.h>
main()
{
int n1,n2;
printf("enter the data....\n");
scanf("%d%d",&n1,&n2);
printf("before n1=%d n2=%d\n",n1,n2);
n1=n1+n2;
n2=n1-n2;
n1=n1-n2;

/* using % and /
n1=n1*n2;
n2=n1/n2;
n1=n1/n2;
*/

// n2=n1+n2-(n1=n2);   single line expression

printf("after n1=%d n2=%d\n",n1,n2);





}




