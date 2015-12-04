#include<stdio.h>
void main()
{
int i,num,c=0;
for(num=0
;;num++)
	{
		for(i=2;i<=num;i++)
 		{
	 	if (num%i==0)
 		break;
 		}
      	     if(i==num)
	{
	c++;
           printf(" %d \t",num);
if(c==100)
break;
        }

}	
}
