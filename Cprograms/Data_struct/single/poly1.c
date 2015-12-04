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
int n1,n2,i;
struct st  *hp1=0,*hp2=0,*hp3=0;
printf("enter how maly links do u want to add:\n");
scanf("%d",&n1);

printf("\nEnter the first poly....\n");
for(i=0;i<n1;i++)
create_poly(&hp1);
if(n1)
print(hp1);

printf("enter how many links do u want eq:\n");
scanf("%d",&n2);

printf("\nenter the second poly....\n");
for(i=0;i<n2;i++)
create_poly(&hp2);

if(n2)
print(hp2);

printf("\n\n");
if(n1)
print(hp1);
if(n2)
print(hp2);
printf("-----------------------\n");
add_poly(&hp3,hp1,hp2);
print(hp3);
}

void add_poly(struct st **hp3,struct st *hp1,struct st *hp2)
{
int k;
struct st *temp,*temp1;
while((hp1!=0) && (hp2!=0))
{

temp=malloc(sizeof(struct st));
  
 if(hp1->power==hp2->power)
    {
     temp->power=hp1->power;
     temp->coff=(hp1->coff+hp2->coff);
     hp2=hp2->next;
     hp1=hp1->next;
   }
  else if(hp1->power < hp2->power)
   {
     temp->power=hp2->power;
     temp->coff=(hp2->coff);
     hp2=hp2->next;
  }

  else if(hp1->power > hp2->power)
   {
     temp->power=hp1->power;
     temp->coff=(hp1->coff);
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
while(hp1){
temp=malloc(sizeof(struct st));
     temp->power=hp1->power;
     temp->coff=(hp1->coff);
    hp1=hp1->next;

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

while(hp2){
temp=malloc(sizeof(struct st));
     temp->power=hp2->power;
     temp->coff=(hp2->coff);
    hp2=hp2->next;

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

}//end of add_poly



int power1(struct st *ptr, int n)
{
while(ptr && (ptr->power != n))
ptr=ptr->next;

if(!ptr)
	return 0;
else return 1;

}
void create_poly(struct st **ptr)
{
int k;
struct st *temp,*temp1;
temp=malloc(sizeof(struct st));
abc:
printf("Enter the coff\n");
scanf("%d",&(temp->coff));
printf("Enter the power\n");
scanf("%d",&(temp->power));

if((*ptr!=NULL) && (k=power1(*ptr,temp->power)))
{
if(k==1)
  {
    printf("Entered the same power\n");
    goto abc;
  }
}
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
	  if((temp1->next==NULL)||(temp1->next->power < temp->power))
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
   printf("%dx^%d=0\n",ptr->coff,ptr->power);

}



