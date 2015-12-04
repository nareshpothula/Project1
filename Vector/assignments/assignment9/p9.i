# 1 "p9.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "p9.c"


main()
{
   int a,b=3;
a=b++*b++;
printf("a=%d b=%d\n",a,b);
a=++b + ++b*++b + ++b;
printf("a=%d b=%d\n",a,b);
}
