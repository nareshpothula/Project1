ar *mystrcat(char *,char*,int );
main()
{
        char *s1=malloc(1000);
        char *p1=malloc(1000);
        gets(s1);
        gets(p1);
        int n=3;
        mystrcat(s1,p1,n);
        printf("%s",s1);
}
char *mystrcat(char *s1,char *p1,int n)
{
        while(*s1++);
        s1=s1-1;
        while(*s1++=*p1++,n--!='\0');


}
~                                                                                               
~                              
