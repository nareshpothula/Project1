#include<stdio.h>
struct st
{
char *c;
};
main()
{
struct st *p;//=malloc(sizeof(struct st));
//p->c=malloc(1000);
p->c="hello";
printf("DATA=%s\n",p->c);
}
