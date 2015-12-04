nclude<stdio.h>
#include<stdlib.h>
main()
{
//int ret=strcasecmp("asd","Asa");
//printf("%d\n",ret);
        char *p1=malloc(1000);
        char *p2=malloc(1000);
        printf("enter a string...\n");
        gets(p1);
        printf("enter a string...\n");
        gets(p3);
        int ret=my_strcasecmp(p1,p2);
        if(ret==0)
                printf("sgtrings are equal..\n");
        else
                printf("not equal..\n");
}
int my_strcasecmp(char *p1,char *p2)//hello,HELLO
{

        while(*p1||*p2)
        {
                if(((*p1)>=97)&&((*p1)<=122))
                {
                        *p1=*p1-32;
                }
                if(((*p2)>=97)&&((*p2)<=122))
                {
                        *p2=*p2-32;
                }
                if(*p1==*p2)
                {
                        p1++;p2++;
                        continue;
                }
                else
                {
                        if(*p1<*p2)
                                return (*p2-*p1) ;
                        else
                                return (*p1-*p2) ;
                }
        }
        return 0;
}
~                                                                                                                                                                                                                                                                             
~                                                                                                                                                                                                                                                                             
~                                                                                                                                                                                                                                                                             
~                                                                                                                                                                                                                                                                             
~                                                                                                                                                                                                                                                                             
~                                                                                     
