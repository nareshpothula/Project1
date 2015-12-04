#include<stdio.h>
main(int argc,char**agrv)
{
int i,j,k;
if(argc!=4)
{
printf("Uage:./a.out num operator num\n");
return;
}

  i=atoi(agrv[1]);
 j=atoi(agrv[3]);

switch(agrv[2][0])
{
case '+' : 
		k=i+j;
		printf("addition:%d\n",k);
	   	break;
case '-' :
		k=i-j;
		printf("subtracion:%d\n",k);
		break;
case '*' :
		k=i*j;
		printf("multiplication:%d\n",k);
		break;
case '/' :
		k=i/j;
		printf("division:%d\n",k);
//		break;


case '<' :
   switch(agrv[2][1])
{
case '=' : (i<=j)?printf("FALSE\n"):printf("TRUE\n");
		break;
default :(!(i<j))?printf("FALSE\n"):printf("TRUE\n");


}	



default : 
		printf("wrong option");
}
}



/*
for(j=1;j<agrc;j++)
 {
  for(i=0;i<(*agrv[i]);i++)
  printf("%s",agrv[i]);
 }
}
  i=atoi(agrv[i]);
  j=atoi(agrv[i]);

switch(*agrv[2])
{
case '+' : 
		k=i+j;
		printf("addition:%d\n",k);
	   	break;
case '-' :
		k=i-j;
		printf("subtracion:%d\n",k);
		break;
case '*' :
		k=i*j;
		printf("multiplication:%d\n",k);
		break;
case '/' :
		k=i/j;
		printf("division:%d\n",k);
//		break;

default : 
		printf("wrong option");
}
}
*/
