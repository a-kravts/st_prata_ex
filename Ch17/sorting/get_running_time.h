/*Declaration(s) for get_running_time.c module*/
#ifndef GET_RUNNING_TIME_H_SENTRY
#define GET_RUNNING_TIME_H_SENTRY

typedef void (*fp_t)(const int *, int); /*sort function pointer*/
extern double get_running_time(fp_t function, int *array, int size);

#endif
