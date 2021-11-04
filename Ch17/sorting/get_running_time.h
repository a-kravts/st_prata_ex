/*Declaration(s) for get_running_time.c module*/
#ifndef GET_RUNNING_TIME_H_SENTRY
#define GET_RUNNING_TIME_H_SENTRY

typedef void (*fp_t)(int *, int); /*sort function pointer*/

extern double get_running_time(fp_t function, const int *array, int size);

#endif
