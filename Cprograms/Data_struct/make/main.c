#include"header.h"
main()
{
struct st *headptr=0;

printf("\nFile at the begin\n");
add_begin(&headptr);
add_begin(&headptr);
add_begin(&headptr);

printf("\nFile at the end\n");
add_end(&headptr);
add_end(&headptr);
add_end(&headptr);

printf("\nFile at the middle\n");
add_middle(&headptr);
add_middle(&headptr);
add_middle(&headptr);

print_rec(headptr);
print_count(headptr);
print_save(headptr);


}




