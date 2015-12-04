main( )
{
char q[5];
int j;
//q=malloc(4*sizeof(char));
for (j=0; j<3; j++) scanf("%s" ,(q+j));
for (j=0; j<3; j++) printf("%c" ,*(q+j));
for (j=0; j<3; j++) printf("\n%s" ,&*(q+j));
}

