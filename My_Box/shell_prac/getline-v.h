#ifndef GETLINE_V_H
#define GETLINE_V_H
#define safe_free(x) (_free((void **x)))
#define BUFFER_SIZE 1024

void _free(void *ptr);
void _close(int FD);

#endif

