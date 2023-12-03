#ifndef GETLINE_V_H
#define GETLINE_V_H

void free_str_arr(char **);
void free_ptr(void *);
void _close(int);
size_t str_arr_size(char **);
ssize_t getline_v(char **, size_t *);
char **strtow(char *);

#endif

