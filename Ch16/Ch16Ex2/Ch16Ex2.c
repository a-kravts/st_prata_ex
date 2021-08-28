/* Testing the macro HARMONIC_MEAN(X, Y)
   filename: Ch16Ex2.c
   ver 1.0
   Aleksandr Kravtsov */
#include "harmonic_mean.h"
#include <stdio.h>
#include <errno.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    double number_1, number_2;
    char *endptr_1, *endptr_2;

    if(argc < 3) {
        printf("Usage: %s first_number second_number\n", argv[0]);
        return 1;
    }
    errno = 0;
    number_1 = strtod(argv[1], &endptr_1);
    number_2 = strtod(argv[2], &endptr_2);
    if(errno == ERANGE || (argv[1] == endptr_1 || argv[2] == endptr_2)) {
        printf("Error: incorrect arguments\n");
        return 2;
    }
    printf("%.12lf\n", HARMONIC_MEAN(number_1, number_2));

    return 0;
}
