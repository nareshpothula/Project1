#include<stdlib.h>
#include<stdio.h>
struct st
{
	int coff;
	int power;
	struct st *next;
};

void add_poly(struct st **ptr,struct st *hp1,struct st *hp2);
void create_poly(struct st **);
void print(struct st *);
void print_rec(struct st *);
main()
{
	int n,i;
	struct st  *hp1=0,*hp2=0,*hp3=0;
	printf("enter the max power value  ...\n");
	scanf("%d",&n);

	printf("\nEnter the first poly....\n");
	for(i=0;i<=n;i++)
		create_poly(&hp1);
	print(hp1);

	printf("\nenter the second poly....\n");
	for(i=0;i<=n;i++)
		create_poly(&hp2);
	print(hp2);

	printf("\nPoly Eqe :\n");

	print(hp1);
	printf("\n");

	print(hp2);
	printf("\n\n\n");
	printf("\n result poly Eqe\n");
	add_poly(&hp3,hp1,hp2);
	print(hp3);

}
void add_poly(struct st **hp3,struct st *hp1,struct st *hp2)
{
	struct st *temp,*temp1;

	while(hp1!=0)
	{
		temp=malloc(sizeof(struct st));

		if(hp1->power==hp2->power)
		{
			temp->power=hp1->power;
			temp->coff=(hp1->coff+hp2->coff);
			hp2=hp2->next;
			hp1=hp1->next;
		}
		if(*hp3==NULL)
		{
			temp->next=0;
			*hp3=temp;
		}
		else
		{
			temp1=*hp3;
			while(temp1->next!=NULL)
				temp1=temp1->next;
			temp1->next=temp;
			temp->next=0;
		}


	}


}
void print_rec(struct st *ptr)
{
	if(ptr)
	{
		print_rec(ptr->next);
		printf("%dx^%d + ",ptr->coff,ptr->power);
	}
}

void create_poly(struct st **ptr)
{
	struct st *temp,*temp1;
	temp=malloc(sizeof(struct st));

	printf("Enter the coff\n");
	scanf("%d",&(temp->coff));
	printf("Enter the power\n");
	scanf("%d",&(temp->power));

	if((*ptr==NULL)||(temp->power > (*ptr)->power))
	{
		temp->next=*ptr;
		*ptr=temp;
	}

	else
	{
		temp1=*ptr;
		while(temp1)
		{
			if(temp1->next==NULL)		
			{
				temp->next=temp1->next;
				temp1->next=temp;
				break;
			}

			if(temp1->next->power < temp->power)
			{
				temp->next=temp1->next;
				temp1->next=temp;
				break;
			}
			temp1=temp1->next;
		}
	}
}
void print(struct st *ptr)
{
	while(ptr->next)
	{
		printf("%dx^%d + ",ptr->coff,ptr->power);
		ptr=ptr->next;
	}
	printf("%dx^%d\n",ptr->coff,ptr->power);

	printf("\n\n");
}



