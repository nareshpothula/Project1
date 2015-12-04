#define INTPTR int*
typedef char  *PTR;
int *p;
main()
{
INTPTR p,p1;
PTR q,q1,q2;
//printf("\n%d\n",*q1);
printf("&q1=%u\n",(unsigned)q1);
printf("q1=%d\n",*q1);
printf("*p=%d\n",*p);
//printf("q2=%d\n",*q2);
//printf("p=%d\n",*p);
//printf("p1=%d\n",p1);
}
