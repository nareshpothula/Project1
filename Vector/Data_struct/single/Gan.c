main()
{
int a=120,b=100;
int *p,*q;

 p=&a;
*p=&b;

q=&a;

printf("*p=%d\n",*p);
printf("*q=%d\n",*q);
printf("*q=%d\n",a);
printf("*q=%d\n",b);


}
