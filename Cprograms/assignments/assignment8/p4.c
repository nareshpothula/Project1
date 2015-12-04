#include<stdio.h>
struct course
	{
	 int courseno;
	 char coursename[22];
	};
main()
{
struct course c[]={
			{102,"thermel"},
			{103,"manufacture"},
			{104,"design"},
		};
printf("%d\n",c[0].courseno);
printf("%s\n",(*(c+0)).coursename);
printf("%d\n",c[1].courseno);
printf("%s\n",(*(c+1)).coursename);
printf("%d\n",c[2].courseno);
printf("%s\n",(*(c+2)).coursename);
printf("%d\n",c[3].courseno);
printf("%s\n",(*(c+3)).coursename);
}
