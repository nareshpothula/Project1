#include<stdio.h>
main()
{
float a,b,c,d,e,agg,per,total;
printf("enter marks.....\n");
scanf("%f%f%f%f%f",&a ,&b, &c, &d, &e);
total=(a+b+c+d+e);
agg=total/5;
per=(total/250)*100;
printf("a=%f b=%f c=%f d=%f e=%f agg=%f per=%f total=%f\n",a,b,c,d,e,agg,per,total);


}
