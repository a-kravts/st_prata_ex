#include "copy_array_with_ptr_to_end.h"

void copy_ptrs(double *destination, const double *source, const double *end)
{
    for(; source < end; source++, destination++)
        *destination = *source;
}
