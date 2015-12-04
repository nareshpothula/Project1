#include<stdio.h>
#include<stdlib.h>
char *mystrcpy(char *,char*);
main()
{
        char *p1=malloc(1000);
        char *p2=malloc(1000);
        printf("enter a string..\n");
        gets(p1);
        mystrcpy(p1,p2);
        printf("%s",p2);
}
char *mystrcpy(char *p1,char *p2)
{
//      char *p3=p2;
        while(*p2++=*p1++);
//      return p3;

}
~                                                                                                                         
~                                                                                                                         
~                                                                                                                         
~                                                                                                                         
~                                                                                                                         
~                                                                                                                         
~                                                   
