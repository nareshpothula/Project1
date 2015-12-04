#include<stdio.h>
main()
{
int a[2][2][3]=



		{

		{ {1,2,3},{4,5,6}    },
		{ {7,8,9},{10,11,12} }

         	};

printf("%u\n",a);
printf("%u\n",a+1);
printf("%u\n",***a);
printf("%u\n",***a+1);
printf("%u\n",***(a+1));
printf("%u\n",**(*a+1));
printf("%u\n",*(**a+1));
printf("%u\n",(***a+1));
//printf("%u\n",**(*a+1);
//printf("%u\n",**(*a+1);
}
