#include "copy_array_ptr_notation.h"

void copy_ptr(double *destination, const double *source, int quantity)
{
    int i;
    for(i = 0; i < quantity; i++)
        *(destination++) = *(source++);
}
