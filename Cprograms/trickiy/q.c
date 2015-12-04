
void f1 (int n)
{
if(n<=1)
{
printf("%d\n",n);
}
else
{
f1(n/2);
printf("%d\n" , n%2);
}
}
main( )
{
f1(173);
return;
}

