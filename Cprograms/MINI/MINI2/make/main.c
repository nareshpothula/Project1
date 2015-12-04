#include"header.h"
main()
{
struct st *headptr=0;
char op;
remove("a.c");
system("rm *.o");
while(1)
{
printf("\n");
printf("******STUDENT RECORD MENU******\n");
printf("1.	a/A  :add new record\n");
printf("2.	d/D  :Delete a record\n");
printf("3.	s/S  :Show the list\n");
printf("4.	m/M  :Modify a record record\n");
printf("5.	v/V  :Save records\n");
printf("6.	e/E  :Exit\n");
printf("7.	t/T  :Sort the list\n");
printf("8.	l/L  :Delete all the records\n");
printf("9.	r/R  :Reverse the list\n");
printf("10.	c/C  :count no of rec\n");

printf("Enter the choice  according to MENU:\n");
scanf(" %c",&op);

switch(op)
{
case 'A' : 
case 'a' : std_add(&headptr); 
			 break;
case 'D' :			 
case 'd' : std_delete(&headptr);
			break;
case 'S' :
case 's' : std_show(headptr);
			 break;
case 'M' :
case 'm' : std_modify(&headptr);
			 break;
case 'V' :
case 'v' : std_save(headptr);
			 break;
case 'T' :
case 't' : std_sort(&headptr);
			 break;
case 'L' :
case 'l' : std_deleteall(&headptr);
			 break;
case 'R' :
case 'r' : std_reverse(headptr);
			 break;
case 'E' :
case 'e' : std_exit(headptr);
			break;

case 'C' :
case 'c' : std_count(headptr);
			break;
default : printf("Enter valid choice.....:\n");
		break;
}
}
//system("rm *.o");
remove("abc.c");


}
