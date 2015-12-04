#include <unistd.h>
#include<stdio.h>
#include  <stdio.h>
#include  <signal.h>
ISR()
{

	printf("IN ISR program is terminating\n");
	exit(0);
}

main()
{
	int i,j,k;
	while(1)
{
	printf("Enter any value\n");
	signal(SIGALRM, ISR); 
	alarm(4);
	scanf("%d",&i);
	signal(SIGALRM, SIG_IGN); 
}
	printf("in main program is terminating \n");

}
