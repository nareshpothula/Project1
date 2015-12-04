#include<stdio.h>
#include<stdlib.h>
//#pragma  pack(1)
struct st
{
	int rollno;
	struct st *next;// holds the next node starting adderess
};
void add_begin(struct st **);// hear we are passing add of headptr
void print(struct st *);// hear we pass add or ptr only

void main()
{

	struct st *headptr=0,s;
	printf("structure size: %d\n",sizeof(s));

	add_begin(&headptr);
	add_begin(&headptr);
	add_begin(&headptr);
	print(headptr);
}


void add_begin(struct st **ptr)// Here  catching  0
{
	struct st *temp;
	temp=malloc(sizeof(struct st));// DMA
	printf("size temp: %d\n",sizeof(temp));// size is 4 

	printf("Enter the rollno....\n");
	scanf("%d",&(temp->rollno));
	
	temp->next=*ptr;//now *ptr =0 it assigned to nextmeans(end of A and so on...)
	*ptr=temp;// now *ptr become B

}
void print(struct st *ptr)
{
	while(ptr)
	{
		printf("%d %s %f\n",ptr->rollno);
		ptr=ptr->next;// first print c b a
	}
}
