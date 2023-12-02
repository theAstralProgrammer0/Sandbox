#ifndef GETLINE_V_H
#define GETLINE_V_H
#define safe_free(x) (_free((void **x)))
#define BUFFER_SIZE 1024

void _free(void *);
void _close(int);
size_t str_arr_size(char **);
ssize_t getline_v(char **, size_t *)

#endif

