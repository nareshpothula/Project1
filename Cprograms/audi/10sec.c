#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<signal.h>
void find_isr()
{
	printf("u have to  enter value  with in 5 sec only \n\n Sorry Sorry\n\n Try again !! \n");

	_exit(1);

}
main()
{
	int i,j,k;
	alarm(5);
	signal(SIGALRM,find_isr);
	while(1)
	{
		scanf("%d",&i);
		printf("char=%d\n",i);
		signal(SIGALRM, SIG_IGN);
		break;
	}

printf("In main fun progran is going 0n\n");

}
