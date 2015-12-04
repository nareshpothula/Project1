#include<stdio.h>
#include<stdlib.h>
struct st
{
	int n;
	struct st *link;
};
struct st *head=NULL;

main()
{
	int size,ch;
	printf("enter the size of stack\n");
	scanf("%d",&size);
	while(1)
	{
		printf("1:push 2:pop 3: show 0:exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push(size);break;
			case 2:pop();break;
			case 3:show();break;
			case 0:return;
			default: printf("enter valid option\n"); break;

		}



	}
}
push(int s)
{
	struct st *nu,*temp;
	static int cnt=0;
	nu=malloc(sizeof(struct st));
	printf("enter an element to insert into stack\n");
	scanf("%d",&(nu->n));
	temp=head;
	if(cnt==s-1)
	{
		printf("stack is full\n");
		return;
	}
	if(head==NULL)
	{
		nu->link=0;
		head=nu;
		return;
	}
	else
	{
		while(temp->link)
			temp=temp->link;
		temp->link=nu;
		nu->link=0;
	}
	cnt++;
}



pop()
{
	struct st *pre,*temp=head;
	/*if(temp->link==NULL)
	  {
	  free(temp);
	  head=0;
	  }*/
	if(head==0)
	{
		printf("stack is empty\n");
		return;
	}
	else
	{
		while(temp->link)
		{
			pre=temp;
			temp=temp->link;
		}
		free(temp);
		pre->link=NULL;
	}
}

show()
{
	struct st *temp=head;
	printf("the stack elements: \n");
	while(temp)
	{
		printf("%d\t",temp->n);
		temp=temp->link;
	}
	printf("\n");
}
