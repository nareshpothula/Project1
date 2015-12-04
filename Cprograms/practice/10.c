//print +ve  _ve c material
#include <stdio.h>
int main(void)
{
int i;
printf("Enter an integer ");
scanf("%i", &i);
if(i >= 1000 || i <= -1000)
printf("hugely ");
else if(i >= 100 || i <= -100)
printf("very ");
if(i > 0)
printf("positive\n");
else if(i == 0)
printf("zero\n");
else if(i < 0)
printf("negative\n");
return 0;
}

