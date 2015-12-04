#include<stdio.h>
struct st
{
char a[44];
char *p;
};
/*int f(struct st var)
{
printf("var=%u\n",&var);
printf("%d   %c\n",var.a,var.p);
}*/
main()
{
struct st v={"Naresh","Naidu"};

printf("v=%s\n",v.p);
printf("v=%s\n",v.a);
printf("v=%c\n",*v.p);
printf("v=%c\n",v.a[0]);

}
