/*Definition SORT_ARRAY macro*/
#ifndef SORT_ARRAY_H_SENTRY
#define SORT_ARRAY_H_SENTRY

#include <stdlib.h>

/*ORDER < - sort in ascending order*/
/*ORDER > - sort in descending order*/
#define SORT_ARRAY(ARR_PTR, TYPE, NMEMB, ORDER) do {\
    int compare(const void *p1, const void *p2) \
    { \
        const TYPE *val1 = (const TYPE *)p1; \
        const TYPE *val2 = (const TYPE *)p2; \
        \
        if(*val1 ORDER *val2) { \
            return -1; \
        } else if(*val1 == *val2) { \
            return 0; \
        } else { \
            return 1; \
        } \
    } \
    qsort(ARR_PTR, NMEMB, sizeof(TYPE), compare); \
} while(0)

#endif
