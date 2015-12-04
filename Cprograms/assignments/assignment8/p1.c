#include<stdio.h>
struct st
{
int an[100];
char name[20];
float bal[100];
};

main()
{
struct st s;
int i,op,n;
float am;
for(i=1;i<=9;i++)
{
s.an[i]=(99+i);
s.name[i]=(65+i);
s.bal[i]=(97.5+i);
}
printf("s.no a/c number  name    balance(in rupees)\n");
for(i=1;i<=9;i++)
{
printf("%d      %d        %c       %f\n",i,s.an[i],s.name[i],s.bal[i]);
}
printf("These are the candidates below 100 rs\n\n");
printf("s.no a/c number  name    balance(in rupees)\n");
for(i=1;i<=9;i++)
{
if(s.bal[i] < 100)
printf("%d       %d     %c        %f\n",i,s.an[i],s.name[i],s.bal[i]);
}




printf("\n");

start:
printf("\n1.Deposite\n2.Withdrawal\n3)exit\n Enter the any option:");
scanf("%d",&op);
if(op==1)
{
abc:
printf("enter the a/c number\n");
scanf("%d",&n);
for(i=1;i<=9;i++)
 {
  if(s.an[i]==n)
   {
    printf("enter the amount to deposit\n");
    scanf("%f",&am);
    s.bal[i]+=am;
    printf("Your current balance in your acoount is %f\n",s.bal[i]);   
   }
  if(n<100||n>109)
   { 
    printf("Enter the correct a/c number\n");
   goto abc;
   }
 }
}
if(op==2)
{
cd:
printf("enter the a/c number\n");
scanf("%d",&n);
for(i=1;i<=9;i++)
 {
  if(s.an[i]==n)
   {
    printf("enter the amount for withdrawal\n");
    scanf("%f",&am);
    if(am>s.bal[i])
     {
      printf("INsufficient Balance....!!!! for withdrawl\nyour account balance is %f\n ",s.bal[i]);

return;      
     }
    s.bal[i]-=am;
    printf("Now u'r acoount  Balance is %f\n",s.bal[i]);   
   }
  if(n<100||n>109)
   { 
    printf("Enter the correct a/c number\n");
   goto cd;
   }
 }
}
if(op==3)
exit(1);

goto start;


}
