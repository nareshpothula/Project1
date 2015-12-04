#include<stdio.h>
#include<string.h>
main()
{
struct emp
	{
	char name[22];
	int age;
	float bs;
	};
struct emp e;
strcpy(e.name,"naresh");
e.age=22;
printf("%s %d\n",e.name,e.age);
}
