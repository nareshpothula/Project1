nclude<stdio.h>
#include<stdlib.h>
main()
{
        char *p1=malloc(1000);
        char *p2=malloc(1000);
                gets(p1);
                gets(p2);
        printf("enter bytes to comapre\n");
        int n;
        scanf("%d",&n);
        int     ret=my_strncasecmp(p1,p2,n);
        printf("%d\n",ret);
}
int my_strncasecmp(char *p1,char *p2,int len)
{
        while(len--!=0)
                {
                                if(*p1>=97&&*p1<=122)
                                        *p1=*p1-32;
                                if(*p2>=97&&*p2<=122)
                                        *p2=*p2-32;
                                if(*p1++==*p2++)
                                continue;
                                else
                                {
                                        return 1;
                                }

                }
return 0;

}

~                                                                                                                                      
~              
