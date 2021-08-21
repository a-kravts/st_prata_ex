/* Testing array copy functions
   filename: Ch10Ex2.c
   ver 1.0
   Alexandr Kravtsov */

#include "copy_array_ptr_notation.h"
#include "copy_array_std_notation.h"
#include "copy_array_with_ptr_to_end.h"
#include "print_of_array.h"

#define QUANTITY 5

int main()
{
    const double source[QUANTITY] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target_1[QUANTITY];
    double target_2[QUANTITY];
    double target_3[QUANTITY];
    
    print_arr(source, source + QUANTITY);
    
    copy_arr(target_1, source, QUANTITY);
    print_arr(target_1, target_1 + QUANTITY);
    
    copy_ptr(target_2, source, QUANTITY);
    print_arr(target_2, target_2 + QUANTITY);
    
    copy_ptrs(target_3, source, source + QUANTITY);
    print_arr(target_3, target_3 + QUANTITY);
    
    return 0;
}
