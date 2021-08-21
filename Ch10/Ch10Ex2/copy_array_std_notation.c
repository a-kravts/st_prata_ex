#include "copy_array_std_notation.h"

void copy_arr(double destination[], const double source[], int quantity)
{
    int i;
    for(i = 0; i < quantity; i++)
        destination[i] = source[i];
}
