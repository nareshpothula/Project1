#include<stdio.h>
main()
{
int j;
	struct s1
	{
		char *z;
		int i;
		struct s1 *p;
	};

	static struct s1 a[]={{"naresh",1,a+1},{"vector",2,a+2},{"nar",3,a+1}};

	struct s1 *ptr=a;
for(j=0;j<=2;j++)
{
printf("%d\n"--a[j].i);
printf("%s\n",++a[j].z);
}
//	printf("%s  %s  %s\n",a[1].z,(++ptr)->z,a[1].p->z);
}
